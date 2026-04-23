#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5B14B866655F10FE__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x12464640)
#define CLASS_2_5B14B866655F10FE__CTOR_OFFSET UNITYSDK_OFFSET(0x12464630)

inline static constexpr unsigned int Class_2_5B14B866655F10FE_TypeDefinitionIndex = 57868;

class Class_2_5B14B866655F10FE : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_2_5B14B866655F10FE__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_5B14B866655F10FE__COMPAREIMPL_OFFSET))(this, a1, a2);
	}
};

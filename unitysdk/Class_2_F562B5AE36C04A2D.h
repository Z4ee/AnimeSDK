#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F562B5AE36C04A2D__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x11E57890)
#define CLASS_2_F562B5AE36C04A2D__CTOR_OFFSET UNITYSDK_OFFSET(0x11E57880)

inline static constexpr unsigned int Class_2_F562B5AE36C04A2D_TypeDefinitionIndex = 57872;

class Class_2_F562B5AE36C04A2D : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_F562B5AE36C04A2D__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 _CompareImpl(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_F562B5AE36C04A2D__COMPAREIMPL_OFFSET))(this, a1, a2);
	}
};

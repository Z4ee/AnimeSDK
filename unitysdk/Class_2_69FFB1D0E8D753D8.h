#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_69FFB1D0E8D753D8__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x15666E10)
#define CLASS_2_69FFB1D0E8D753D8__CTOR_OFFSET UNITYSDK_OFFSET(0x15666E00)

inline static constexpr unsigned int Class_2_69FFB1D0E8D753D8_TypeDefinitionIndex = 60032;

class Class_2_69FFB1D0E8D753D8 : public ::RPG::Client::AvatarComparerBase
{
public:
	::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_2_69FFB1D0E8D753D8__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_69FFB1D0E8D753D8__COMPAREIMPL_OFFSET))(this, a1, a2);
	}
};

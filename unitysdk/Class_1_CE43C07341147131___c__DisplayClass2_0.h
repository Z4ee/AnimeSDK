#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B11FF0)
#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS2_0__GETAVATARBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x16B12C20)

inline static constexpr unsigned int Class_1_CE43C07341147131___c__DisplayClass2_0_TypeDefinitionIndex = 79894;

class Class_1_CE43C07341147131___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10
	::RPG::GameCore::GenderType gender; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAvatarByOwnerType_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS2_0__GETAVATARBYOWNERTYPE_B__0_OFFSET))(this, a1);
	}
};

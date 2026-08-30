#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B119F0)
#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS1_0__GETAVATARBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x16B12BA0)

inline static constexpr unsigned int Class_1_CE43C07341147131___c__DisplayClass1_0_TypeDefinitionIndex = 79893;

class Class_1_CE43C07341147131___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAvatarByOwnerType_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS1_0__GETAVATARBYOWNERTYPE_B__0_OFFSET))(this, a1);
	}
};

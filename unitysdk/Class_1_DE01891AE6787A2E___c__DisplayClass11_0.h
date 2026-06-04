#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfitSlot; }

#define CLASS_1_DE01891AE6787A2E___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF333E0)
#define CLASS_1_DE01891AE6787A2E___C__DISPLAYCLASS11_0__GETSLOT_B__0_OFFSET UNITYSDK_OFFSET(0xBF342F0)

inline static constexpr unsigned int Class_1_DE01891AE6787A2E___c__DisplayClass11_0_TypeDefinitionIndex = 58475;

class Class_1_DE01891AE6787A2E___c__DisplayClass11_0 : public ::System::Object
{
public:
	::RPG::GameCore::PlayerOutfitSlotType type; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetSlot_b__0(::RPG::Client::AvatarOutfitSlot* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E___C__DISPLAYCLASS11_0__GETSLOT_B__0_OFFSET))(this, a1);
	}
};

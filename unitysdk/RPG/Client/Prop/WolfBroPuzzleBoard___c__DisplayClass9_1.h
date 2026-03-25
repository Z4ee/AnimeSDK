#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class WolfBroPuzzleBoard___c__DisplayClass9_0; }
namespace RPG::GameCore { class GameWorld; }

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA180690)
#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1__PICKUPBULLET_B__0_OFFSET UNITYSDK_OFFSET(0xA187FD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard___c__DisplayClass9_1_TypeDefinitionIndex = 64144;

	class WolfBroPuzzleBoard___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* world; // 0x10
		::RPG::Client::Prop::WolfBroPuzzleBoard___c__DisplayClass9_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _PickupBullet_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_1__PICKUPBULLET_B__0_OFFSET))(this);
		}
	};
}

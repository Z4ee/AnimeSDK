#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class InsertionPuzzleBoard___c__DisplayClass13_0; }
namespace RPG::Client::Prop { class InsertionPuzzleItem; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC56B530)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1__PLAYERROTATEAROUNDCENTER_B__0_OFFSET UNITYSDK_OFFSET(0xC56F930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass13_1_TypeDefinitionIndex = 73144;

	class InsertionPuzzleBoard___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleItem* item; // 0x10
		::RPG::Client::Prop::InsertionPuzzleBoard___c__DisplayClass13_0* CS___8__locals1; // 0x18
		::System::Boolean bIsEncounterObstacle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayerRotateAroundCenter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_1__PLAYERROTATEAROUNDCENTER_B__0_OFFSET))(this);
		}
	};
}

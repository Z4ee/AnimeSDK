#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class InsertionPuzzleBoard; }
namespace RPG::Client::Prop { class InsertionPuzzleItem; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE27CC0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS38_0___RETREATROTATEOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0xAE28F00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass38_0_TypeDefinitionIndex = 72127;

	class InsertionPuzzleBoard___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleItem* item; // 0x10
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void __RetreatRotateOperation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS38_0___RETREATROTATEOPERATION_B__0_OFFSET))(this);
		}
	};
}

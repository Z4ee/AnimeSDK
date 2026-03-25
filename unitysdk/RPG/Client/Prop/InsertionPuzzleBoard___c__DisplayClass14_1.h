#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class InsertionPuzzleBoard___c__DisplayClass14_0; }
namespace RPG::Client::Prop { class InsertionPuzzleItem; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A6DB0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1__TRANSFERCURRENTINSERTIONITEM_B__0_OFFSET UNITYSDK_OFFSET(0xA0AA440)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass14_1_TypeDefinitionIndex = 64077;

	class InsertionPuzzleBoard___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleItem* targetTransfer; // 0x10
		::RPG::Client::Prop::InsertionPuzzleBoard___c__DisplayClass14_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _TransferCurrentInsertionItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_1__TRANSFERCURRENTINSERTIONITEM_B__0_OFFSET))(this);
		}
	};
}

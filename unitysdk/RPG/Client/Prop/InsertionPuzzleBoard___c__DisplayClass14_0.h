#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class InsertionPuzzleBoard; }
namespace RPG::Client::Prop { class InsertionPuzzleItem; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148216C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0__TRANSFERCURRENTINSERTIONITEM_B__1_OFFSET UNITYSDK_OFFSET(0x14824D40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass14_0_TypeDefinitionIndex = 74670;

	class InsertionPuzzleBoard___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x10
		::RPG::Client::Prop::InsertionPuzzleItem* item; // 0x18
		::Class_3_CD04D3296DF4C842_12* OnTransferDone; // 0x20
		::Class_3_CD04D3296DF4C842_12* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferCurrentInsertionItem_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS14_0__TRANSFERCURRENTINSERTIONITEM_B__1_OFFSET))(this);
		}
	};
}

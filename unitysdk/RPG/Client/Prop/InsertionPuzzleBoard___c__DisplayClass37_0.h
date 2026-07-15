#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class InsertionPuzzleBoard; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14823950)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS37_0___RETREATTRANSFEROPERATION_B__0_OFFSET UNITYSDK_OFFSET(0x14825140)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass37_0_TypeDefinitionIndex = 74673;

	class InsertionPuzzleBoard___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::Class_3_CD04D3296DF4C842_12* __9__0; // 0x10
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x18
		::System::Int32 transferCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void __RetreatTransferOperation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS37_0___RETREATTRANSFEROPERATION_B__0_OFFSET))(this);
		}
	};
}

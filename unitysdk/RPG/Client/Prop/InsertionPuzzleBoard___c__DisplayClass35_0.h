#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class InsertionPuzzleBoard; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE27310)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS35_0___ONREVERTITEM_B__0_OFFSET UNITYSDK_OFFSET(0xAE28E90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass35_0_TypeDefinitionIndex = 72125;

	class InsertionPuzzleBoard___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x10
		::Class_3_CD04D3296DF4C842_12* OnRotateDone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnRevertItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS35_0___ONREVERTITEM_B__0_OFFSET))(this);
		}
	};
}

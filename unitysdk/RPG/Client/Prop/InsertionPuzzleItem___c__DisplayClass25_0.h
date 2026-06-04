#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_12;

#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5705E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS25_0__SETDITHERALPHAWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xC5708A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleItem___c__DisplayClass25_0_TypeDefinitionIndex = 73154;

	class InsertionPuzzleItem___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::Class_3_CD04D3296DF4C842_12* OnDitherDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetDitherAlphaWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS25_0__SETDITHERALPHAWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}

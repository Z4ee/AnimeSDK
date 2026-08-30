#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_12;

#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16100080)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS23_0__SETSCALEWITHANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x16100110)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleItem___c__DisplayClass23_0_TypeDefinitionIndex = 78163;

	class InsertionPuzzleItem___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::Class_3_CD04D3296DF4C842_12* OnScaleDone; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetScaleWithAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM___C__DISPLAYCLASS23_0__SETSCALEWITHANIMATION_B__0_OFFSET))(this);
		}
	};
}

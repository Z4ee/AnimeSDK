#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32361ACFB28DADC0.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class InsertionPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC75FF0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0__PLAYERROTATEAROUNDCENTER_B__1_OFFSET UNITYSDK_OFFSET(0xDC7A050)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard___c__DisplayClass13_0_TypeDefinitionIndex = 78154;

	class InsertionPuzzleBoard___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_32361ACFB28DADC0>* blockCoords; // 0x10
		::RPG::Client::Prop::InsertionPuzzleBoard* __4__this; // 0x18
		::Class_3_CD04D3296DF4C842_12* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayerRotateAroundCenter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___C__DISPLAYCLASS13_0__PLAYERROTATEAROUNDCENTER_B__1_OFFSET))(this);
		}
	};
}

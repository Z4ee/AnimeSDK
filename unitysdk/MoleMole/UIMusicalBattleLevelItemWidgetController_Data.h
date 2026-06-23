#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4.h"
#include "unitysdk/Class_2_BB670ADEE63FFDEF_Struct_2_F7F069084F72D1BE.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17875D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelItemWidgetController_Data_TypeDefinitionIndex = 45707;

	class UIMusicalBattleLevelItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Boolean>* Focused; // 0x10
		::Class_0_16E4307DCC419505_165<::System::Int32>* CurSelectLevelIndex; // 0x18
		::Class_2_BB670ADEE63FFDEF_Struct_2_F7F069084F72D1BE LevelInfo; // 0x20
		::Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4 LevelResult; // 0x58
		::System::Boolean Latest; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

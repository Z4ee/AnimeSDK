#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4.h"
#include "unitysdk/Class_2_BB670ADEE63FFDEF_Struct_2_F7F069084F72D1BE.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1610E520)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelItemWidgetController_Data_TypeDefinitionIndex = 78580;

	class UIMusicalBattleLevelItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurSelectLevelIndex; // 0x10
		::Class_2_BB670ADEE63FFDEF_Struct_2_F7F069084F72D1BE LevelInfo; // 0x18
		::Class_0_16E4307DCC41950C_12<::System::Boolean>* Focused; // 0x50
		::Class_2_BB670ADEE63FFDEF_Struct_2_80920B8A456E6DC4 LevelResult; // 0x58
		::System::Boolean Latest; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

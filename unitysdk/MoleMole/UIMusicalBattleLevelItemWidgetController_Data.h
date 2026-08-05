#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BBC07147D0E400AA_Struct_2_80920B8A456E6DC4.h"
#include "unitysdk/Class_2_BBC07147D0E400AA_Struct_2_F7F069084F72D1BE.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x184F7AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelItemWidgetController_Data_TypeDefinitionIndex = 62229;

	class UIMusicalBattleLevelItemWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurSelectLevelIndex; // 0x10
		::Class_2_BBC07147D0E400AA_Struct_2_F7F069084F72D1BE LevelInfo; // 0x18
		::Class_0_16E4307DCC419505_164<::System::Boolean>* Focused; // 0x50
		::Class_2_BBC07147D0E400AA_Struct_2_80920B8A456E6DC4 LevelResult; // 0x58
		::System::Boolean Latest; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

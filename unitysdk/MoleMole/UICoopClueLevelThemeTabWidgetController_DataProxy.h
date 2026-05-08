#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/Class_2_CA81EEAA0E1B3609_Enum_3_D9F6F92CA4C186D8.h"

template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x158D6FB0)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x158D7190)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueLevelThemeTabWidgetController_DataProxy_TypeDefinitionIndex = 75755;

	class UICoopClueLevelThemeTabWidgetController_DataProxy : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_12<::System::Boolean>* Locked; // 0x70
		::Class_0_16E4307DCC41950C_12<::System::Int32>* LockTip; // 0x78
		::Class_0_16E4307DCC41950C_13<::Class_2_CA81EEAA0E1B3609_Enum_3_D9F6F92CA4C186D8>* TargetLevelTheme; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

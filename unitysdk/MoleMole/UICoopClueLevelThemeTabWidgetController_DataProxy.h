#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Class_2_CA81EEAA0E1B3609_Enum_3_D9F6F92CA4C186D8.h"

template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19589E40)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1958A030)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueLevelThemeTabWidgetController_DataProxy_TypeDefinitionIndex = 81321;

	class UICoopClueLevelThemeTabWidgetController_DataProxy : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Int32>* LockTip; // 0x80
		::Class_0_16E4307DCC419505_159<::Class_2_CA81EEAA0E1B3609_Enum_3_D9F6F92CA4C186D8>* TargetLevelTheme; // 0x88
		::Class_0_16E4307DCC419505_164<::System::Boolean>* Locked; // 0x90

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

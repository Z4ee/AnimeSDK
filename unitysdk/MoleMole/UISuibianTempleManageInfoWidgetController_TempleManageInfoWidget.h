#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_2_EF2EC4D8F28BA1A6;
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15E93760)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x15E93870)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget_TypeDefinitionIndex = 40588;

	class UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::UInt32>* CurrentBenchID; // 0x80
		::Class_0_16E4307DCC41950C_14<::Class_2_EF2EC4D8F28BA1A6*>* ProductCanShowList; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Int32>* InitSelectProductID; // 0x90
		::Class_0_16E4307DCC41950C_14<::System::Int32>* ProductIDList; // 0x98
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurSelectProductID; // 0xA0
		::Class_0_16E4307DCC419505_159<::System::UInt32>* GoodShelveID; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

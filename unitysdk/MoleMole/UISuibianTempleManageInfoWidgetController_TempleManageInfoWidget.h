#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_2_1E89A1A01EA84819;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1378B0D0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1378B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget_TypeDefinitionIndex = 44800;

	class UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_14<::System::Int32>* ProductIDList; // 0x70
		::Class_0_16E4307DCC41950C_13<::System::Int32>* InitSelectProductID; // 0x78
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurSelectProductID; // 0x80
		::Class_0_16E4307DCC41950C_13<::System::UInt32>* CurrentBenchID; // 0x88
		::Class_0_16E4307DCC41950C_13<::System::UInt32>* GoodShelveID; // 0x90
		::Class_0_16E4307DCC41950C_14<::Class_2_1E89A1A01EA84819*>* ProductCanShowList; // 0x98

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

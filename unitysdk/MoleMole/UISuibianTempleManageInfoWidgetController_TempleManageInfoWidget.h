#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_2_1E89A1A01EA84819;
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16174AD0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_TEMPLEMANAGEINFOWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x16174BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget_TypeDefinitionIndex = 58299;

	class UISuibianTempleManageInfoWidgetController_TempleManageInfoWidget : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::UInt32>* GoodShelveID; // 0x60
		::Class_0_16E4307DCC41950C_12<::Class_2_1E89A1A01EA84819*>* ProductCanShowList; // 0x68
		::Class_0_16E4307DCC419505_165<::System::Int32>* CurSelectProductID; // 0x70
		::Class_0_16E4307DCC41950C_12<::System::Int32>* ProductIDList; // 0x78
		::Class_0_16E4307DCC419505_165<::System::UInt32>* CurrentBenchID; // 0x80
		::Class_0_16E4307DCC419505_165<::System::Int32>* InitSelectProductID; // 0x88

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

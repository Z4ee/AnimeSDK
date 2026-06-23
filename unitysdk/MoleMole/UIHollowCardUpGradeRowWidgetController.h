#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_877AA22B04AFB81F_1;
class Class_2_9E9B2D0FD5CBF725;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Object; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x16ABB450)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_GETITEMHOLDER_OFFSET UNITYSDK_OFFSET(0x16ABB8A0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ABB560)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16ABB670)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ABB5F0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ABB3D0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ABB4F0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x16ABB800)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABB900)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16ABB910)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16ABB9A0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16ABBA40)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16ABBAD0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16ABBB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardUpGradeRowWidgetController_TypeDefinitionIndex = 63945;

	class UIHollowCardUpGradeRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_9E9B2D0FD5CBF725* _view; // 0x2F0
		::MoleMole::UIHollowCardOptionItemWidgetController* _itemWidget; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void CreateItemWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshItemView(::Class_1_877AA22B04AFB81F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET))(this, info);
		}

		::Class_3_6F805C3FA3D1D41D<::MoleMole::UIHollowCardOptionItemWidgetController*>* GetItemHolder()
		{
			return ((::Class_3_6F805C3FA3D1D41D<::MoleMole::UIHollowCardOptionItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_GETITEMHOLDER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

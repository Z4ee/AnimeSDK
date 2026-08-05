#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_877AA22B04AFB81F_1;
class Class_2_9E9B2D0FD5CBF725;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace System { class Object; }
template <typename T> class Class_3_826A30478DA34A69;

#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_CREATEITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x18831840)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_GETITEMHOLDER_OFFSET UNITYSDK_OFFSET(0x18831C90)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18831950)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18831A60)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188319E0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188317C0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188318E0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_REFRESHITEMVIEW_OFFSET UNITYSDK_OFFSET(0x18831BF0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18831CF0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18831D00)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18831D90)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18831E30)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18831EC0)
#define MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18831F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardUpGradeRowWidgetController_TypeDefinitionIndex = 44914;

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

		::Class_3_826A30478DA34A69<::MoleMole::UIHollowCardOptionItemWidgetController*>* GetItemHolder()
		{
			return ((::Class_3_826A30478DA34A69<::MoleMole::UIHollowCardOptionItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDUPGRADEROWWIDGETCONTROLLER_GETITEMHOLDER_OFFSET))(this);
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

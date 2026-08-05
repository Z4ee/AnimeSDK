#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_547;
class Class_2_575BCEB58FC81660;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1730F4C0)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1730F5D0)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1730F550)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1730F280)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x1730FE60)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_REFRESHTACTICSREDPOINT_OFFSET UNITYSDK_OFFSET(0x1730FE10)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1730F690)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17310210)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17310220)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173102A0)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17310330)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173103D0)
#define MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17310460)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsRowWidgetController_TypeDefinitionIndex = 57999;

	class UIHandBookTacticsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_575BCEB58FC81660* _view; // 0x2F0
		::System::Int32 curQuest; // 0x2F8
		::MoleMole::UIGeneralNewHintWidgetController* hintCtrl; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshTacticsRedPoint(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_REFRESHTACTICSREDPOINT_OFFSET))(this, args);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_547* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_547*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, template_);
		}

		::System::Void RefreshRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__1_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_0E5778BB52E10271;
class Class_2_5E2FBACADDB625B7_38;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173C9430)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173C9540)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173C94C0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173C93D0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x173C9940)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCURRENTSELECT_OFFSET UNITYSDK_OFFSET(0x173C9B60)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173C9DB0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173C9E40)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173C9ED0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173C9F70)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173CA000)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicGroupRowWidgetController_TypeDefinitionIndex = 90709;

	class UIAbyssS2RelicGroupRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_38* _view; // 0x2F0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ManageredItems; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetClickCallBack(::System::Action_1<::Class_1_0E5778BB52E10271*>* clickCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_0E5778BB52E10271*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, clickCallBack);
		}

		::System::Void SetCurrentSelect(::Class_1_0E5778BB52E10271* currentData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5778BB52E10271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCURRENTSELECT_OFFSET))(this, currentData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D890F2F8C9260D13;
class Class_2_79AE422BA06F6D26_240;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1937B410)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_DRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1937B490)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1937B640)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1937B0D0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1937A400)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1937A700)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1937A490)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1937A1A0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1937A800)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1937B350)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1937B6A0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1937B6B0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1937B6C0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1937B750)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1937B7F0)
#define MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1937B880)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseListWidgetController_TypeDefinitionIndex = 69814;

	class UIDisplayCaseListWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_240* _view; // 0x2F0
		::Class_1_D890F2F8C9260D13* _ctx; // 0x2F8
		::UnityEngine::Vector2 startDragPos; // 0x300
		::System::Boolean isUsedUp; // 0x308
		::System::Boolean isSingle; // 0x309
		::System::Boolean isUnlock; // 0x30A
		::System::Boolean dragging; // 0x30B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void DragCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_DRAGCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventData);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASELISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

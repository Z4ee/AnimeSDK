#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5002A338EA6818A8;
class Class_2_208CC9941471731A_273;
class Class_2_B1555FA59A3F87CE;
class Class_2_DFBAA7B9A2231B38_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x171706E0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET UNITYSDK_OFFSET(0x17170520)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_DRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x17170820)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x171709E0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x171704D0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1716F8F0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1716FAC0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1716F980)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1716F520)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1716F880)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYCANNOTSELECTANIM_OFFSET UNITYSDK_OFFSET(0x17170570)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x17170640)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_REFRESHUSEDTAG_OFFSET UNITYSDK_OFFSET(0x17170200)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET UNITYSDK_OFFSET(0x17170480)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17170A70)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17170A80)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17170B10)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17170BB0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17170C40)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17170CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastDishItemWidgetController_TypeDefinitionIndex = 74089;

	class UIOverlordFeastDishItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_DFBAA7B9A2231B38_1* _view; // 0x2F0
		::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* _onStartDragOutScrollView; // 0x2F8
		::Class_2_B1555FA59A3F87CE* _model; // 0x300
		::UnityEngine::Vector2 _startDragPos; // 0x308
		::System::Boolean _draging; // 0x310
		::Class_2_208CC9941471731A_273* _template; // 0x318
		::Class_1_5002A338EA6818A8* _context; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetOnDragFunc(::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET))(this, action);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_GETINDEX_OFFSET))(this);
		}

		::System::Void ClearPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET))(this);
		}

		::System::Void RefreshUsedTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_REFRESHUSEDTAG_OFFSET))(this);
		}

		::System::Void PlayCanNotSelectAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYCANNOTSELECTANIM_OFFSET))(this);
		}

		::System::Void PlayFocusAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYFOCUSANIM_OFFSET))(this);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void DragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_DRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

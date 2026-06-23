#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_19;
class Class_1_DCC4A220F5A3F1EE;
class Class_2_1CC0E2699D5FB1A6_9;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x156024D0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET UNITYSDK_OFFSET(0x15602A00)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_DRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x15602550)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x156027C0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x15602470)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x15602810)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156013B0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x156016E0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15601440)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156010E0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15601340)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_PROCESSUIAVATAR_OFFSET UNITYSDK_OFFSET(0x156023B0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET UNITYSDK_OFFSET(0x15602400)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15602B20)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15602B30)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15602BC0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15602C60)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15602CF0)
#define MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15602D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallItemWidgetController_TypeDefinitionIndex = 71009;

	class UIPhotoWallItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1CC0E2699D5FB1A6_9* _view; // 0x2F0
		::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* _onStartDragOutScrollView; // 0x2F8
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* _onDragInScrollView; // 0x300
		::System::Action* _onEndDrag; // 0x308
		::UnityEngine::Vector2 _startDragPos; // 0x310
		::System::Boolean _draging; // 0x318
		::Class_0_16E4307DCC419505_19* _template; // 0x320
		::Class_1_DCC4A220F5A3F1EE* _context; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ProcessUIAvatar(::System::Int32 avatarConfig, ::System::Int32 showTypeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_PROCESSUIAVATAR_OFFSET))(this, avatarConfig, showTypeIndex);
		}

		::System::Void SetOnDragFunc(::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* action, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* onDragInScroll, ::System::Action* onEndDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Vector3>*, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET))(this, action, onDragInScroll, onEndDrag);
		}

		::Class_2_B4378B46E0020E85* GetButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void DragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_DRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void ClearPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

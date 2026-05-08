#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIBaseDynamicTipsWidgetController.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F7F2D2EC8C42DA;
class Class_1_777EB91B86430809_1;
class Class_2_DAEA51265F00BCA5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x14FAF410)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_GETTEXTANCHOR_OFFSET UNITYSDK_OFFSET(0x14FAF510)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_INITCHILDS_OFFSET UNITYSDK_OFFSET(0x14FAEDD0)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ISOVERCANVAS_OFFSET UNITYSDK_OFFSET(0x14FAF910)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14FAF220)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14FAF370)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x14FAF770)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONSELECTCHILDITEM_OFFSET UNITYSDK_OFFSET(0x14FAF850)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14FAEA50)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14FAF2B0)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14FAE860)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14FAEA00)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FB02C0)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB01E0)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_GETLOCATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x14FB0310)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14FB03A0)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14FB0430)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONREFRESHWIDGETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x14FB0460)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14FB04F0)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14FB0590)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14FB0620)
#define MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14FB06B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownActionsWidgetController_TypeDefinitionIndex = 58932;

	class UIGeneralDropDownActionsWidgetController : public ::MoleMole::UIBaseDynamicTipsWidgetController
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__worldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDropDownActionsWidgetController_TypeDefinitionIndex)->GetStaticField(0x489C0);
		}
		::Class_2_DAEA51265F00BCA5* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_777EB91B86430809_1*>* _contexts; // 0x2C8
		::Class_1_23F7F2D2EC8C42DA* _layoutProxy; // 0x2D0
		::MoleMole::InputLogicEventType _closeEvent; // 0x2D8
		::System::Boolean _setAnchorFinished; // 0x2DC
		::UnityEngine::TextAnchor _cacheAnchor; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::UnityEngine::Transform* GetLocateTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET))(this);
		}

		::System::Void OnRefreshWidgetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET))(this);
		}

		::System::Void OnSelectChildItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ONSELECTCHILDITEM_OFFSET))(this, index);
		}

		::System::Void InitChilds(::System::Collections::Generic::IReadOnlyList_1<::Class_1_777EB91B86430809_1*>* contexts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_777EB91B86430809_1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_INITCHILDS_OFFSET))(this, contexts);
		}

		::UnityEngine::TextAnchor GetTextAnchor()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_GETTEXTANCHOR_OFFSET))(this);
		}

		::System::Boolean IsOverCanvas(::UnityEngine::TextAnchor anchor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER_ISOVERCANVAS_OFFSET))(this, anchor);
		}

		::UnityEngine::Transform* __base_GetLocateTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_GETLOCATETRANSFORM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnRefreshWidgetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONREFRESHWIDGETROOTPOSITION_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

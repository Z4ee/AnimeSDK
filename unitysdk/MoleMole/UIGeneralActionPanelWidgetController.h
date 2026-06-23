#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseDynamicTipsWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4BB73BC1050D704C;
class Class_2_511FB4275E9DBCFF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1730A180)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_GETTEXTANCHOR_OFFSET UNITYSDK_OFFSET(0x1730A280)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17309850)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ISOVERCANVAS_OFFSET UNITYSDK_OFFSET(0x1730A5C0)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x173098C0)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17309E80)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x1730A4E0)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17309960)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17309E10)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1730B0A0)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1730B040)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_GETLOCATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1730B0F0)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1730B180)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1730B220)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONREFRESHWIDGETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x1730B250)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1730B2E0)
#define MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1730B380)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActionPanelWidgetController_TypeDefinitionIndex = 65149;

	class UIGeneralActionPanelWidgetController : public ::MoleMole::UIBaseDynamicTipsWidgetController
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__worldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralActionPanelWidgetController_TypeDefinitionIndex)->GetStaticField(0x46BD0);
		}
		::Class_1_4BB73BC1050D704C* _layoutProxy; // 0x2C8
		::System::Boolean _setAnchorFinished; // 0x2D0
		::UnityEngine::TextAnchor _cacheAnchor; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::Class_2_511FB4275E9DBCFF* get__viewModel()
		{
			return ((::Class_2_511FB4275E9DBCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::UnityEngine::Transform* GetLocateTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET))(this);
		}

		::System::Void OnRefreshWidgetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET))(this);
		}

		::UnityEngine::TextAnchor GetTextAnchor()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_GETTEXTANCHOR_OFFSET))(this);
		}

		::System::Boolean IsOverCanvas(::UnityEngine::TextAnchor anchor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER_ISOVERCANVAS_OFFSET))(this, anchor);
		}

		::UnityEngine::Transform* __base_GetLocateTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_GETLOCATETRANSFORM_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnRefreshWidgetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONREFRESHWIDGETROOTPOSITION_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

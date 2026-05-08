#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseDynamicTipsWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_23F7F2D2EC8C42DA;
class Class_1_FA793AB1D49D0132;
class Class_2_54134CBC16D70821;
namespace MoleMole { class DropDownItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace MoleMole { class UIGeneralDropDownControllerContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_CREATEDROPDOWNWIDGET_OFFSET UNITYSDK_OFFSET(0x16CCF9C0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETDROPDOWNWIDGET_OFFSET UNITYSDK_OFFSET(0x16CCF920)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETOVERRIDEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x16CCFBC0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET UNITYSDK_OFFSET(0x16CCE850)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET UNITYSDK_OFFSET(0x16CCE720)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x16CCE790)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_INITNORMALVIEW_OFFSET UNITYSDK_OFFSET(0x16CCEC60)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16CCE860)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16CCF860)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16CCF7D0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0x16CCFB00)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CCF720)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CCE730)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16CCE8F0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCFC60)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GETOVERRIDEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x16CCFCD0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x16CCFCC0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16CCFCE0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16CCFD70)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16CCFDA0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET UNITYSDK_OFFSET(0x16CCFE30)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CCFE40)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CCFED0)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16CCFF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownTipsWidgetController_TypeDefinitionIndex = 73656;

	class UIGeneralDropDownTipsWidgetController : public ::MoleMole::UIBaseDynamicTipsWidgetController
	{
	public:
		::Class_2_54134CBC16D70821* _view; // 0x2C0
		::MoleMole::UIGeneralDropDownControllerContext* _normalContext; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::DropDownItemWidgetController*>* _scrollContentList; // 0x2D0
		::System::Action* onCloseAction; // 0x2D8
		::Class_1_23F7F2D2EC8C42DA* _layoutProxy; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAllowInputPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ISALLOWINPUTPASS_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::System::Boolean get_EnablePositionTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::MoleMole::DropDownItemWidgetController* GetDropDownWidget(::System::Int32 index)
		{
			return ((::MoleMole::DropDownItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETDROPDOWNWIDGET_OFFSET))(this, index);
		}

		::MoleMole::DropDownItemWidgetController* CreateDropDownWidget(::Enum_3_0A43EA4B15EC3408 type, ::UnityEngine::Transform* parent, ::MoleMole::UIControllerContextBase* uiControllerContext, ::Class_1_FA793AB1D49D0132* openParams, ::System::Int32 overrideCanvas)
		{
			return ((::MoleMole::DropDownItemWidgetController*(*)(::PVOID, ::Enum_3_0A43EA4B15EC3408, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::Class_1_FA793AB1D49D0132*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_CREATEDROPDOWNWIDGET_OFFSET))(this, type, parent, uiControllerContext, openParams, overrideCanvas);
		}

		::System::Void InitNormalView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_INITNORMALVIEW_OFFSET))(this);
		}

		::System::Void OnPlayFadeInAnimationAfterLoading(::System::String* fadeAnimation, ::System::Boolean isPlayToEnd, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, fadeAnimation, isPlayToEnd, animSpeed);
		}

		::System::String* GetOverrideFadeOutAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_81A3942BCC6E42B5 nextPage)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_81A3942BCC6E42B5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER_GETOVERRIDEFADEOUTANIM_OFFSET))(this, fadeData, nextPage);
		}

		::UnityEngine::Vector2 __base_get_PositionOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::System::String* __base_GetOverrideFadeOutAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_81A3942BCC6E42B5 P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_81A3942BCC6E42B5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_GETOVERRIDEFADEOUTANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnPlayFadeInAnimationAfterLoading(::System::String* P0, ::System::Boolean P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONPLAYFADEINANIMATIONAFTERLOADING_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

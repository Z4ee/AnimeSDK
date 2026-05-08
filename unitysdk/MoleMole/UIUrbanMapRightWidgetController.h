#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_37DF30C8B3AA0F39;
class Class_2_5C38134D4169B6E0;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_000597E145D7A42A;

#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_APPLYBANGKOVITEMINFOTOREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x14C3F6F0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_CREATITEMICON_OFFSET UNITYSDK_OFFSET(0x14C3FC30)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x14C409F0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x14C3F4D0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C400D0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14C3FFB0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14C3FA40)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14C40900)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C401E0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C3FDA0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_POINTWIDGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x14C40AD0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x14C3F4E0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SHOWEMPTYLABEL_OFFSET UNITYSDK_OFFSET(0x14C3FD60)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C40B70)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C40BD0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14C40C70)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14C40C80)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14C40D30)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C40DC0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14C40E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightWidgetController_TypeDefinitionIndex = 59338;

	class UIUrbanMapRightWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_000597E145D7A42A<::Class_1_37DF30C8B3AA0F39*>* _viewModel; // 0x2B8
		::Class_2_5C38134D4169B6E0* _allocateHelper; // 0x2C0
		::Struct_2_575273D27F02957E _binderInfo; // 0x2C8
		::MoleMole::UIControlReference* _controlReference; // 0x2D8
		::System::Boolean _setScrollview; // 0x2E0
		::MonoUITableScrollV2* _rewardScrollView; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void SetScrollView(::MonoUITableScrollV2* scrollV2)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SETSCROLLVIEW_OFFSET))(this, scrollV2);
		}

		::System::Void ApplyBangkovItemInfoToRewardItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_APPLYBANGKOVITEMINFOTOREWARDITEMS_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatItemIcon(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_CREATITEMICON_OFFSET))(this, binderInfo);
		}

		::System::Boolean ShowEmptyLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_SHOWEMPTYLABEL_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_GET_ACTIVE_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPointWidgetContext* PointWidgetContext()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER_POINTWIDGETCONTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}

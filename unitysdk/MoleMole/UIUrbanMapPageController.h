#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1D7D05B8F39EB8CF;
class Class_2_C9A08F2A8603B39E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMap3DModelController; }
namespace MoleMole { class UIUrbanMapPageContext; }

#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_CREATE3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x148F6E00)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_BANGKOVURBANMAPITEMINFOHELPER_OFFSET UNITYSDK_OFFSET(0x148F4F80)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x148F4F00)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x148F4E70)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_MODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x148F60C0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x148F4E60)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x148F4E80)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x148F4E90)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x148F5BC0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_MANUALONCLOSE_OFFSET UNITYSDK_OFFSET(0x148F6010)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x148F4F90)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x148F6320)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x148F60D0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x148F5C60)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x148F5690)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148F5870)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_OPENBANGKOVITEMINFOFROMMAPWISHLISTICON_OFFSET UNITYSDK_OFFSET(0x148F59D0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x148F7490)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_SETBOXICONCANVAS_OFFSET UNITYSDK_OFFSET(0x148F7540)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_SHOULDUSEBANGKOVITEMINFOONMAPITEMS_OFFSET UNITYSDK_OFFSET(0x148F58E0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x148F5AC0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148F8380)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x148F8390)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x148F8430)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x148F8460)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x148F84F0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x148F8500)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148F85C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageController_TypeDefinitionIndex = 64766;

	class UIUrbanMapPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean _asyncLoadMode; // 0x318
		::Struct_2_575273D27F02957E _binderInfo; // 0x320
		::MoleMole::UIControlReference* _controlReference; // 0x330
		::Class_1_1D7D05B8F39EB8CF* _bangkovUrbanMapItemInfo; // 0x338
		::MoleMole::UIUrbanMap3DModelController* _3D3DModelController; // 0x340
		::System::Boolean _in3dMode; // 0x348
		::UnityEngine::Vector2 _originSize; // 0x34C
		::UnityEngine::Vector2 _bgSize; // 0x354
		::UnityEngine::Vector2 _originContentSize; // 0x35C
		::System::Single _originRubberBandRate; // 0x364

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_C9A08F2A8603B39E* get__viewModel()
		{
			return ((::Class_2_C9A08F2A8603B39E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPageContext* get_Context()
		{
			return ((::MoleMole::UIUrbanMapPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_CONTEXT_OFFSET))(this);
		}

		::Class_1_1D7D05B8F39EB8CF* get_BangkovUrbanMapItemInfoHelper()
		{
			return ((::Class_1_1D7D05B8F39EB8CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_BANGKOVURBANMAPITEMINFOHELPER_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean ShouldUseBangkovItemInfoOnMapItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_SHOULDUSEBANGKOVITEMINFOONMAPITEMS_OFFSET))(this);
		}

		::System::Void OpenBangkovItemInfoFromMapWishlistIcon(::MoleMole::UIItemIconBtnWidgetController* iconController, ::System::Int32 logicItemId)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_OPENBANGKOVITEMINFOFROMMAPWISHLISTICON_OFFSET))(this, iconController, logicItemId);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ManualOnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_MANUALONCLOSE_OFFSET))(this);
		}

		::MoleMole::UIUrbanMap3DModelController* get_ModelController()
		{
			return ((::MoleMole::UIUrbanMap3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_MODELCONTROLLER_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::MoleMole::UIUrbanMap3DModelController* Create3DModelController(::MoleMole::UIUrbanMap3DModelContext* context)
		{
			return ((::MoleMole::UIUrbanMap3DModelController*(*)(::PVOID, ::MoleMole::UIUrbanMap3DModelContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_CREATE3DMODELCONTROLLER_OFFSET))(this, context);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Void SetBoxIconCanvas(::System::Boolean upShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_SETBOXICONCANVAS_OFFSET))(this, upShow);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

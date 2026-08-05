#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_175;
class Class_1_A11CB4C08EF906E4;
class Class_1_AF681D41A7CE2B6C;
class Class_2_C9A08F2A8603B39E;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMap3DModelController; }
namespace MoleMole { class UIUrbanMapPageContext; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_CREATE3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15A746A0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x15A75C10)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_BANGKOVURBANMAPITEMINFOHELPER_OFFSET UNITYSDK_OFFSET(0x15A72090)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x15A72010)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x15A71F80)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_MODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15A736B0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x15A71F70)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15A71F90)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A71FA0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15A73160)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_MANUALONCLOSE_OFFSET UNITYSDK_OFFSET(0x15A73600)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_NEEDMUTEINLEVELSKILLINPUTINSTREAMING_OFFSET UNITYSDK_OFFSET(0x15A71F00)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_NEEDOVERRIDEGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x15A71E80)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A720A0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15A73910)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15A736C0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A73200)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15A72950)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A72E20)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A727A0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_OPENBANGKOVITEMINFOFROMMAPWISHLISTICON_OFFSET UNITYSDK_OFFSET(0x15A72F80)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x15A74D40)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_SETBOXICONCANVAS_OFFSET UNITYSDK_OFFSET(0x15A74DF0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_SHOULDUSEBANGKOVITEMINFOONMAPITEMS_OFFSET UNITYSDK_OFFSET(0x15A72E90)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A73070)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A76C20)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x15A76C30)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_NEEDMUTEINLEVELSKILLINPUTINSTREAMING_OFFSET UNITYSDK_OFFSET(0x15A76CC0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_NEEDOVERRIDEGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x15A76D50)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A76DF0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15A76E90)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15A76EC0)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A76F50)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15A76F60)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A77020)
#define MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A77030)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageController_TypeDefinitionIndex = 42215;

	class UIUrbanMapPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* MUTE_BATTLE_SCREEN_EFFECT; // 0x0
		::System::Boolean _asyncLoadMode; // 0x318
		::Struct_2_575273D27F02957E _binderInfo; // 0x320
		::MoleMole::UIControlReference* _controlReference; // 0x330
		::Class_1_AF681D41A7CE2B6C* _bangkovUrbanMapItemInfo; // 0x338
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

		::System::Boolean NeedOverrideGamePause(::System::Boolean& needPause)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_NEEDOVERRIDEGAMEPAUSE_OFFSET))(this, needPause);
		}

		::System::Boolean NeedMuteInLevelSkillInputInStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_NEEDMUTEINLEVELSKILLINPUTINSTREAMING_OFFSET))(this);
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

		::Class_1_AF681D41A7CE2B6C* get_BangkovUrbanMapItemInfoHelper()
		{
			return ((::Class_1_AF681D41A7CE2B6C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GET_BANGKOVURBANMAPITEMINFOHELPER_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
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

		::System::Void OpenBangkovItemInfoFromMapWishlistIcon(::Class_0_16E4307DCC419505_175* iconController, ::System::Int32 logicItemId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_OPENBANGKOVITEMINFOFROMMAPWISHLISTICON_OFFSET))(this, iconController, logicItemId);
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

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Boolean __base_NeedMuteInLevelSkillInputInStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_NEEDMUTEINLEVELSKILLINPUTINSTREAMING_OFFSET))(this);
		}

		::System::Boolean __base_NeedOverrideGamePause(::System::Boolean& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_NEEDOVERRIDEGAMEPAUSE_OFFSET))(this, P0);
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

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

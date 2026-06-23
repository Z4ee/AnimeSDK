#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_737370D674376C00;
class Class_2_15D211EB7129E545;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETMODELICON_OFFSET UNITYSDK_OFFSET(0x186AEAF0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETVOICEICON_OFFSET UNITYSDK_OFFSET(0x186AEAA0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x186ADC40)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x186ADC30)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x186ADE10)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_MODIFYLISTWITHCALLBACK_OFFSET UNITYSDK_OFFSET(0x186AEB40)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186AE3A0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186AF070)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186AED30)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADSELECTITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x186AEE80)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x186AE430)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186AE790)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186ADC50)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186AF1C0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER__MODIFYLISTWITHCALLBACK_B__13_0_OFFSET UNITYSDK_OFFSET(0x186AF1D0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186AF460)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186AF4F0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x186AF5A0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x186AF650)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186AF6E0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186AF6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewDialogPopWindowController_TypeDefinitionIndex = 64858;

	class UIGalgameReviewDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Sprite** StaticGet_voiceIcon()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x43270);
		}
		static ::UnityEngine::Sprite** StaticGet_modelIcon()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x43278);
		}
		// static const ::System::String* _VOICE_ICON_SPRITE_PATH; // 0x0
		// static const ::System::String* _MODEL_ICON_SPRITE_PATH; // 0x0
		::Class_2_15D211EB7129E545* _view; // 0x318
		::System::Action* _closeCallback; // 0x320
		::Foundation::AssetRequestHandle voiceHandler; // 0x328
		::Foundation::AssetRequestHandle modelHandler; // 0x348
		::System::Int32 _gamepadSelectIdx; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Sprite* GetVoiceIcon()
		{
			return ((::UnityEngine::Sprite*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETVOICEICON_OFFSET))();
		}

		static ::UnityEngine::Sprite* GetModelIcon()
		{
			return ((::UnityEngine::Sprite*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETMODELICON_OFFSET))();
		}

		::System::Void InitView(::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this, list);
		}

		::System::Void ModifyListWithCallback(::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_MODIFYLISTWITHCALLBACK_OFFSET))(this, list);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadSelectItemChange(::System::Int32 index, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADSELECTITEMCHANGE_OFFSET))(this, index, isSelect);
		}

		::System::Void _ModifyListWithCallback_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER__MODIFYLISTWITHCALLBACK_B__13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

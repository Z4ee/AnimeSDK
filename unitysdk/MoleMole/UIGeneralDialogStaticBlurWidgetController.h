#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D091CC614BEA65CF;
class Class_2_1448B7D92ADA154C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEINACTION_OFFSET UNITYSDK_OFFSET(0x1679FFB0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEOUTACTION_OFFSET UNITYSDK_OFFSET(0x167A03E0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1679F310)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUICAPTURE_OFFSET UNITYSDK_OFFSET(0x1679EF80)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1679F3A0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1679ED60)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEINACTION_OFFSET UNITYSDK_OFFSET(0x167A0340)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEOUTACTION_OFFSET UNITYSDK_OFFSET(0x167A0390)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEIN_OFFSET UNITYSDK_OFFSET(0x1679FE70)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEOUT_OFFSET UNITYSDK_OFFSET(0x167A01D0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1679EF30)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UICAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0x1679F9B0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATEIMAGEALPHA_OFFSET UNITYSDK_OFFSET(0x1679F920)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1679F710)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x167A04A0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167A0430)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167A04F0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167A0580)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167A0610)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex = 64845;

	class UIGeneralDialogStaticBlurWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet__property()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex)->GetStaticField(0x32780);
		}
		static ::System::UInt32* StaticGet_UICaptureIndex()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex)->GetStaticField(0xC4D0);
		}
		static ::System::Boolean* StaticGet_DisableFadeIn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralDialogStaticBlurWidgetController_TypeDefinitionIndex)->GetStaticField(0xC4D4);
		}
		::Class_2_1448B7D92ADA154C* _view; // 0x2B8
		::System::Boolean _disableFadeIn; // 0x2C0
		::System::Boolean _haveSetPlayMix; // 0x2C1
		::System::Int32 downSample; // 0x2C4
		::System::Single blurRadius; // 0x2C8
		::UnityEngine::RenderTexture* rt; // 0x2D0
		::System::Int32 propertyID; // 0x2D8
		::Class_1_D091CC614BEA65CF* _task; // 0x2E0
		::System::Single _blurValue; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateImageAlpha(::System::Single blurValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UPDATEIMAGEALPHA_OFFSET))(this, blurValue);
		}

		::System::Void OnUICapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ONUICAPTURE_OFFSET))(this);
		}

		::System::Void UICaptureFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_UICAPTUREFINISHED_OFFSET))(this);
		}

		::System::Void StartUIBlurFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEIN_OFFSET))(this);
		}

		::System::Void StartUIBlurFadeOut(::System::Int32 instancedID, ::System::Action_1<::System::Int32>* endAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTUIBLURFADEOUT_OFFSET))(this, instancedID, endAction);
		}

		::System::Void StartFullScreenUIFadeInAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEINACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void EndFullScreenUIFadeInAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEINACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void StartFullScreenUIFadeOutAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_STARTFULLSCREENUIFADEOUTACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void EndFullScreenUIFadeOutAction(::System::Int32 holdUIInstancedId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER_ENDFULLSCREENUIFADEOUTACTION_OFFSET))(this, holdUIInstancedId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

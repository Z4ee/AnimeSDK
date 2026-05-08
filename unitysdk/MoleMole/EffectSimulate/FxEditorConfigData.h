#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_GET_LODTYPESHOWER_OFFSET UNITYSDK_OFFSET(0x170B9FC0)
#define MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_GET_USEJOBOPT_OFFSET UNITYSDK_OFFSET(0x170BA0B0)
#define MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_SET_LODTYPESHOWER_OFFSET UNITYSDK_OFFSET(0x170B9FD0)
#define MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_SET_USEJOBOPT_OFFSET UNITYSDK_OFFSET(0x170BA110)
#define MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x170BA310)
#define MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x170BA170)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int FxEditorConfigData_TypeDefinitionIndex = 69241;

	class FxEditorConfigData : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_MUST_MONO_EFFECT_TYPE()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FxEditorConfigData_TypeDefinitionIndex)->GetStaticField(0x49430);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_SPECIAL_MONO_EFFECT_TYPE()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FxEditorConfigData_TypeDefinitionIndex)->GetStaticField(0x49438);
		}
		// static const ::System::String* TEXTURE_ROOT_PATH; // 0x0
		// static const ::System::String* ITEM_UNLOCK_EXPEND_PATH; // 0x0
		// static const ::System::String* ITEM_LOCK_EXPEND_PATH; // 0x0
		// static const ::System::String* LIST_ADD_BUTTON_PATH; // 0x0
		// static const ::System::String* ITEM_ENABLED_PATH; // 0x0
		// static const ::System::String* ITEM_DISABLED_PATH; // 0x0
		// static const ::System::String* EFFECT_ROOT_PATH; // 0x0
		// static const ::System::String* ANIMATION_GROUP_NAME; // 0x0
		// static const ::System::String* TIMELINE_CONTROLLER_GROUP_NAME; // 0x0
		::System::Boolean debugMode; // 0x58
		::MoleMole::Config::EffectLODType lodType; // 0x5C
		::System::Single previewMinFrame; // 0x60
		::System::Boolean simulateFrameLockWhenPlay; // 0x64
		::System::Boolean previewUseFrame; // 0x65
		::System::Single listTitleLineHeight; // 0x68
		::UnityEngine::Color listTitleLineFontColor; // 0x6C
		::UnityEngine::Color listTitleLineBackgroundColor; // 0x7C
		::UnityEngine::Color listAddButtonBackgroundColor; // 0x8C
		::System::Single listTitleIconPaddingLeftWidth; // 0x9C
		::System::Single listTitleIconSizeRate; // 0xA0
		::System::Single itemTitleLineHeight; // 0xA4
		::UnityEngine::Color itemTitleLineFontColor; // 0xA8
		::UnityEngine::Color itemTitleLineBackgroundNormalColor; // 0xB8
		::UnityEngine::Color itemTitleLineBackgroundHighlightColor; // 0xC8
		::UnityEngine::Color itemTitleLineBackgroundDisabledColor; // 0xD8
		::UnityEngine::Color itemContentBackgoundColor; // 0xE8
		::UnityEngine::Color itemContentBackgoundDisabledGUIColor; // 0xF8
		::System::Single lineHeightToFontSizeRate; // 0x108
		::System::Single separationLineHeightBetweenBaseInfoAndList; // 0x10C
		::UnityEngine::Color loopablePhaseHighlightColor; // 0x110
		::UnityEngine::Color loopablePhaseNormalColor; // 0x120
		::System::Single toggleGroupLineHeight; // 0x130
		::UnityEngine::Color toggleGroupLineBackgroundColor; // 0x134
		::UnityEngine::Color animationCurveSplitLineColor; // 0x144
		::System::Single animationCurveSplitLineWidth; // 0x154
		::UnityEngine::Color animationCurveCurTimeAtLineColor; // 0x158
		::System::Single animationCurveCurTimeAtLineWidth; // 0x168
		::UnityEngine::Color tlCtl_NormalFxColor; // 0x16C
		::UnityEngine::Color tlCtl_AvatarMatChangeFxColor; // 0x17C
		::UnityEngine::Color tlCtl_PostProcessFxColor; // 0x18C
		::UnityEngine::Color tlCtl_ShaderCustomFxColor; // 0x19C
		::UnityEngine::Color tlCtl_OverDrawNormalColor; // 0x1AC
		::UnityEngine::Color tlCtl_OverDrawOverLimitColor; // 0x1BC
		::System::Single tlCtl_OverDrawOverLimitVal; // 0x1CC
		::System::Single tlCtl_OverDrawLineHeight; // 0x1D0
		::System::Int32 tlCtl_OverDrawLineFontSize; // 0x1D4
		::System::Boolean timelinePlayModeSimulateByTrack; // 0x1D8
		::System::Boolean timelinePlayAMCInitEveryPerFrame; // 0x1D9
		::System::Boolean openZNetAutoAddDefaultFadeOutBehavior; // 0x1DA
		::System::Boolean amcNodeInFxAutoFixKeyword; // 0x1DB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA__CCTOR_OFFSET))();
		}

		::MoleMole::Config::EffectLODType get_lodTypeShower()
		{
			return ((::MoleMole::Config::EffectLODType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_GET_LODTYPESHOWER_OFFSET))(this);
		}

		::System::Void set_lodTypeShower(::MoleMole::Config::EffectLODType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_SET_LODTYPESHOWER_OFFSET))(this, value);
		}

		::System::Boolean get_UseJobOpt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_GET_USEJOBOPT_OFFSET))(this);
		}

		::System::Void set_UseJobOpt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_FXEDITORCONFIGDATA_SET_USEJOBOPT_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETBLITOUTLINEBEFORETRANSPARENT_OFFSET UNITYSDK_OFFSET(0x19299790)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETENABLEHIZCULLING_OFFSET UNITYSDK_OFFSET(0x19299590)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETENABLESHADOWHIZCULLING_OFFSET UNITYSDK_OFFSET(0x19299610)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETFORCEUSESMAA_OFFSET UNITYSDK_OFFSET(0x19299690)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEDISABLE_OFFSET UNITYSDK_OFFSET(0x192999B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEENABLEMULTILAYER_OFFSET UNITYSDK_OFFSET(0x19299810)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERBEHINDSCENE_OFFSET UNITYSDK_OFFSET(0x19299AB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x19299BD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERCOLOR_OFFSET UNITYSDK_OFFSET(0x19299B30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNER_OFFSET UNITYSDK_OFFSET(0x19299A30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFLICKER_OFFSET UNITYSDK_OFFSET(0x19299CD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEOVERRIDEGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x19299710)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR_OFFSET UNITYSDK_OFFSET(0x19299910)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x19299C50)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEUSESINGLECOLOR_OFFSET UNITYSDK_OFFSET(0x19299890)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19299D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCullingEffect_TypeDefinitionIndex = 50146;

	class ConfigEntityCullingEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* outlineFillInnerColorIntensity; // 0x40
		::MoleMole::Config::ScreenEffectBool* EnableShadowHizCulling; // 0x48
		::MoleMole::Config::ScreenEffectColor* outlineSingleColor; // 0x50
		::MoleMole::Config::ScreenEffectBool* outlineFillInner; // 0x58
		::MoleMole::Config::ScreenEffectBool* outlineEnableMultiLayer; // 0x60
		::MoleMole::Config::ScreenEffectBool* BlitOutlineBeforeTransparent; // 0x68
		::MoleMole::Config::ScreenEffectBool* EnableHizCulling; // 0x70
		::MoleMole::Config::ScreenEffectBool* outlineOverrideGlobalConfig; // 0x78
		::MoleMole::Config::ScreenEffectBool* outlineUseSingleColor; // 0x80
		::MoleMole::Config::ScreenEffectFloat* outlineThickness; // 0x88
		::MoleMole::Config::ScreenEffectBool* outlineFillInnerBehindScene; // 0x90
		::MoleMole::Config::ScreenEffectColor* outlineFillInnerColor; // 0x98
		::MoleMole::Config::ScreenEffectBool* outlineFlicker; // 0xA0
		::MoleMole::Config::ScreenEffectBool* ForceUseSMAA; // 0xA8
		::MoleMole::Config::ScreenEffectBool* outlineDisable; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerBehindSceneHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType BlitOutlineBeforeTransparentHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerColorHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineSingleColorHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFlickerHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType ForceUseSMAAHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOverrideGlobalConfigHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerColorIntensityHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineEnableMultiLayerHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineThicknessHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineUseSingleColorHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType EnableHizCullingHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDisableHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType EnableShadowHizCullingHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerHandleType; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnableHizCulling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETENABLEHIZCULLING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableShadowHizCulling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETENABLESHADOWHIZCULLING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceUseSMAA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETFORCEUSESMAA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineOverrideGlobalConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEOVERRIDEGLOBALCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetBlitOutlineBeforeTransparent(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETBLITOUTLINEBEFORETRANSPARENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineEnableMultiLayer(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEENABLEMULTILAYER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineUseSingleColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEUSESINGLECOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOutlineSingleColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineDisable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEDISABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineFillInner(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineFillInnerBehindScene(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERBEHINDSCENE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOutlineFillInnerColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineFillInnerColorIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERCOLORINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineThickness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINETHICKNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineFlicker(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFLICKER_OFFSET))(this, curTime, realHoldTime);
		}
	};
}

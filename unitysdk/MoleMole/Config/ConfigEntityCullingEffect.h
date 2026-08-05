#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETBLITOUTLINEBEFORETRANSPARENT_OFFSET UNITYSDK_OFFSET(0x14860990)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETENABLEHIZCULLING_OFFSET UNITYSDK_OFFSET(0x14860790)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETENABLESHADOWHIZCULLING_OFFSET UNITYSDK_OFFSET(0x14860810)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETFORCEUSESMAA_OFFSET UNITYSDK_OFFSET(0x14860890)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEDISABLE_OFFSET UNITYSDK_OFFSET(0x14860BB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEENABLEMULTILAYER_OFFSET UNITYSDK_OFFSET(0x14860A10)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERBEHINDSCENE_OFFSET UNITYSDK_OFFSET(0x14860CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x14860DD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNERCOLOR_OFFSET UNITYSDK_OFFSET(0x14860D30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFILLINNER_OFFSET UNITYSDK_OFFSET(0x14860C30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEFLICKER_OFFSET UNITYSDK_OFFSET(0x14860ED0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEOVERRIDEGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x14860910)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR1_OFFSET UNITYSDK_OFFSET(0x14860F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR2_OFFSET UNITYSDK_OFFSET(0x14860FF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR_OFFSET UNITYSDK_OFFSET(0x14860B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x14860E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINEUSESINGLECOLOR_OFFSET UNITYSDK_OFFSET(0x14860A90)
#define MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14861090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCullingEffect_TypeDefinitionIndex = 79920;

	class ConfigEntityCullingEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* outlineThickness; // 0x40
		::MoleMole::Config::ScreenEffectBool* outlineFillInnerBehindScene; // 0x48
		::MoleMole::Config::ScreenEffectBool* ForceUseSMAA; // 0x50
		::MoleMole::Config::ScreenEffectBool* EnableShadowHizCulling; // 0x58
		::MoleMole::Config::ScreenEffectBool* outlineUseSingleColor; // 0x60
		::MoleMole::Config::ScreenEffectFloat* outlineFillInnerColorIntensity; // 0x68
		::MoleMole::Config::ScreenEffectColor* outlineSingleColor1; // 0x70
		::MoleMole::Config::ScreenEffectBool* outlineFlicker; // 0x78
		::MoleMole::Config::ScreenEffectColor* outlineSingleColor2; // 0x80
		::MoleMole::Config::ScreenEffectColor* outlineFillInnerColor; // 0x88
		::MoleMole::Config::ScreenEffectBool* outlineDisable; // 0x90
		::MoleMole::Config::ScreenEffectBool* BlitOutlineBeforeTransparent; // 0x98
		::MoleMole::Config::ScreenEffectColor* outlineSingleColor; // 0xA0
		::MoleMole::Config::ScreenEffectBool* outlineFillInner; // 0xA8
		::MoleMole::Config::ScreenEffectBool* outlineEnableMultiLayer; // 0xB0
		::MoleMole::Config::ScreenEffectBool* outlineOverrideGlobalConfig; // 0xB8
		::MoleMole::Config::ScreenEffectBool* EnableHizCulling; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerColorIntensityHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineUseSingleColorHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDisableHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType EnableHizCullingHandleType; // 0xD4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerHandleType; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineSingleColor1HandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ForceUseSMAAHandleType; // 0xE0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerColorHandleType; // 0xE4
		::MoleMole::Config::ScreenEffectFieldHandleType BlitOutlineBeforeTransparentHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineEnableMultiLayerHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFlickerHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineSingleColor2HandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOverrideGlobalConfigHandleType; // 0xF8
		::MoleMole::Config::ScreenEffectFieldHandleType EnableShadowHizCullingHandleType; // 0xFC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineSingleColorHandleType; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType outlineThicknessHandleType; // 0x104
		::MoleMole::Config::ScreenEffectFieldHandleType outlineFillInnerBehindSceneHandleType; // 0x108

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

		::UnityEngine::Color GetOutlineSingleColor1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR1_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOutlineSingleColor2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCULLINGEFFECT_GETOUTLINESINGLECOLOR2_OFFSET))(this, curTime, realHoldTime);
		}
	};
}

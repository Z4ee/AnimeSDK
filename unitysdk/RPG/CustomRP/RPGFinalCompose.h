#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGBloomRenderer; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGFXAA; }
namespace RPG::CustomRP { class RPGLensDistortion; }
namespace RPG::CustomRP { class RPGPolaroid; }
namespace RPG::CustomRP { class RPGSpeedLine; }
namespace RPG::CustomRP { class RPGTonemapping; }
namespace RPG::CustomRP { class RPGVignette; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class HableCurve; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSE_CACHELUTPARAMS_OFFSET UNITYSDK_OFFSET(0x18F053E0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_DUMPTONEMAPPINGDATA_OFFSET UNITYSDK_OFFSET(0x18EFFD20)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18EFFBA0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_GET_CURRENTHDRHEADROOM_OFFSET UNITYSDK_OFFSET(0x18F053B0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x18F008B0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISADDITIONALCOLORGRADINGENABLED_OFFSET UNITYSDK_OFFSET(0x18F00120)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISLUTDIRTY_OFFSET UNITYSDK_OFFSET(0x18F04A40)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISRARELYUSEDEFFECTSENABLED_OFFSET UNITYSDK_OFFSET(0x18F001C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_RELEASE_OFFSET UNITYSDK_OFFSET(0x18EFFC90)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_SETUPFINALOUTPUT_OFFSET UNITYSDK_OFFSET(0x18EFFC80)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18EFFB90)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFFB30)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x18F031B0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUT_OFFSET UNITYSDK_OFFSET(0x18F05910)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__ISCOLORGRADINGBAKELUT_OFFSET UNITYSDK_OFFSET(0x18F01C10)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPADDITIONALCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x18F002F0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPBLINK_OFFSET UNITYSDK_OFFSET(0x18F02BA0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x18F03400)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x18F01C50)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPFXAA_OFFSET UNITYSDK_OFFSET(0x18F04860)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0x18F03FC0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPPOLAROID_OFFSET UNITYSDK_OFFSET(0x18F027C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPSPEEDLINE_OFFSET UNITYSDK_OFFSET(0x18F036E0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPTONEMAPPING_OFFSET UNITYSDK_OFFSET(0x18F05ED0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0x18F03550)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__UBERBLIT_OFFSET UNITYSDK_OFFSET(0x18F04390)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalCompose_TypeDefinitionIndex = 35485;

	class RPGFinalCompose : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _LutBake; // 0x28
		::UnityEngine::Texture2D* _InternalSpeedlineSeed; // 0x30
		::UnityEngine::Material* _Uber; // 0x38
		::UnityEngine::Material* _Fxaa; // 0x40
		::RPG::CustomRP::RPGBloomRenderer* _BloomRenderer; // 0x48
		::UnityEngine::Texture2D* _InternalSpectralLut; // 0x50
		::UnityEngine::Rendering::HableCurve* _HableCurve; // 0x58
		::UnityEngine::RenderTexture* _CachedLutRT; // 0x60
		::UnityEngine::Color _CachedLevelColor; // 0x68
		::UnityEngine::Vector4 _CachedColorGainShadow; // 0x78
		::UnityEngine::Vector4 _CachedColorGainGlobal; // 0x88
		::System::Single _CachedShoulderAngle; // 0x98
		::UnityEngine::Vector4 _CachedColorSaturationShadow; // 0x9C
		::UnityEngine::Vector4 _CachedColorContrastGlobal; // 0xAC
		::System::Single _CachedLevelShadowTone; // 0xBC
		::System::Single _CachedColorCorrectionHighlightMin; // 0xC0
		::System::Single _CachedGamma; // 0xC4
		::UnityEngine::Vector4 _LutParam; // 0xC8
		::UnityEngine::Vector4 _CachedColorGainHighlight; // 0xD8
		::UnityEngine::Vector4 _CachedColorContrastShadow; // 0xE8
		::UnityEngine::Vector4 _CachedColorSaturationMidtone; // 0xF8
		::UnityEngine::Vector4 _CachedColorSaturationHighlight; // 0x108
		::System::Single _CachedToeStrength; // 0x118
		::System::Int32 _GenerateFrameCount; // 0x11C
		::System::Single _CachedLevelHighTone; // 0x120
		::UnityEngine::Vector4 _CachedColorContrastHighlight; // 0x124
		::System::Boolean _CachedDebugHDROutputIntermediate; // 0x134
		::System::Boolean _CachedTonemappingEnable; // 0x135
		::System::Boolean _CachedDebugEnableGamutClipping; // 0x136
		::System::Boolean _CachedForceDisableToneMapping; // 0x137
		::System::Single _CachedColorCorrectionShadowMax; // 0x138
		::System::Single _CachedToeLength; // 0x13C
		::UnityEngine::Vector4 _CachedColorSaturationGlobal; // 0x140
		::UnityEngine::Vector4 _CachedColorGainMidtone; // 0x150
		::System::Int32 _OutputRT; // 0x160
		::System::Single _CachedShoulderStrength; // 0x164
		::System::Single _CachedShoulderLength; // 0x168
		::System::Single _CachedExpandGamut; // 0x16C
		::System::Boolean _CachedColorGradingEnable; // 0x170
		::System::Boolean _CachedHDRActive; // 0x171
		::System::Single _CachedHDRHeadroom; // 0x174
		::UnityEngine::Vector4 _CachedColorContrastMidtone; // 0x178

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1, ::RPG::CustomRP::RPGBloomRenderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::RPG::CustomRP::RPGBloomRenderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void SetupFinalOutput(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_SETUPFINALOUTPUT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_RELEASE_OFFSET))(this);
		}

		::System::Void DumpTonemappingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_DUMPTONEMAPPINGDATA_OFFSET))(this);
		}

		::System::Boolean IsAdditionalColorGradingEnabled(::RPG::CustomRP::RPGAdditionalColorGrading* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGAdditionalColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISADDITIONALCOLORGRADINGENABLED_OFFSET))(this, a1);
		}

		::System::Boolean IsRarelyUsedEffectsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISRARELYUSEDEFFECTSENABLED_OFFSET))(this);
		}

		::System::Void _SetupAdditionalColorGrading(::RPG::CustomRP::RPGAdditionalColorGrading* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGAdditionalColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPADDITIONALCOLORGRADING_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_INNEREXECUTE_OFFSET))(this, a1);
		}

		::System::Void _SetupChromaticAberration(::RPG::CustomRP::RPGChromaticAberration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGChromaticAberration*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCHROMATICABERRATION_OFFSET))(this, a1);
		}

		::System::Void _SetupVignette(::RPG::CustomRP::RPGVignette* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGVignette*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPVIGNETTE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupSpeedLine(::RPG::CustomRP::RPGSpeedLine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGSpeedLine*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPSPEEDLINE_OFFSET))(this, a1);
		}

		::System::Boolean _IsColorGradingBakeLUT(::RPG::CustomRP::RPGColorGrading* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__ISCOLORGRADINGBAKELUT_OFFSET))(this, a1);
		}

		::System::Boolean IsLUTDirty(::RPG::CustomRP::RPGTonemapping* a1, ::RPG::CustomRP::RPGColorGrading* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISLUTDIRTY_OFFSET))(this, a1, a2);
		}

		::System::Void CacheLUTParams(::RPG::CustomRP::RPGTonemapping* a1, ::RPG::CustomRP::RPGColorGrading* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_CACHELUTPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateLutIfNeeded(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGTonemapping* a2, ::RPG::CustomRP::RPGColorGrading* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUTIFNEEDED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_currentHDRHeadroom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_GET_CURRENTHDRHEADROOM_OFFSET))(this);
		}

		::System::Void _GenerateLut(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGTonemapping* a2, ::RPG::CustomRP::RPGColorGrading* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetupTonemapping(::RPG::CustomRP::RPGTonemapping* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPTONEMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupColorGrading(::RPG::CustomRP::RPGColorGrading* a1, ::UnityEngine::Material* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCOLORGRADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupPolaroid(::RPG::CustomRP::RPGPolaroid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGPolaroid*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPPOLAROID_OFFSET))(this, a1);
		}

		::System::Void _SetupBlink(::RPG::CustomRP::RPGBlink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBlink*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPBLINK_OFFSET))(this, a1);
		}

		::System::Void _SetupLensDistortion(::RPG::CustomRP::RPGLensDistortion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGLensDistortion*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPLENSDISTORTION_OFFSET))(this, a1);
		}

		::System::Void _UberBlit(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__UBERBLIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupFxaa(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGFXAA* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGFXAA*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPFXAA_OFFSET))(this, a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/RPG/CustomRP/MRTBinding.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace RPG::CustomRP { class RPGDepthOfField_CoCDescriptor; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEFOCALLENGTHFROMFOV_OFFSET UNITYSDK_OFFSET(0x16AB5B60)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEINFINITYCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x16AAF850)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMAXBACKGROUNDCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x16AAFAD0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMINFOREGROUNDCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x16AAFA00)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_DEPTHTORESCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x16AB5AB0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16AAF0F0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GETDOFCOLORANDCOCFORMAT_OFFSET UNITYSDK_OFFSET(0x16AAFAF0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GET_GLOBALDOFQUALITY_OFFSET UNITYSDK_OFFSET(0x16AB20A0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16AAF1D0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x16AAFB60)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLELOW_OFFSET UNITYSDK_OFFSET(0x16AB2160)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLE_OFFSET UNITYSDK_OFFSET(0x16AB37E0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHPOLYGON_OFFSET UNITYSDK_OFFSET(0x16AB13D0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFDEFAULT_OFFSET UNITYSDK_OFFSET(0x16AAFEF0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAEA70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfFieldRenderer_TypeDefinitionIndex = 29413;

	class RPGDepthOfFieldRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		// static const ::System::Int32 c_CoCDownSample = 0x3; // 0x0
		::UnityEngine::MaterialPropertyBlock* _UberProperty; // 0x28
		::RPG::CustomRP::MRTBinding _TwoRTs; // 0x30
		::Il2CppArray<::RPG::CustomRP::RPGDepthOfField_CoCDescriptor*>* m_CoCList; // 0x88
		::UnityEngine::Material* _Uber; // 0x90
		::RPG::CustomRP::RTIDHandle _BackgroundCocTex1; // 0x98
		::RPG::CustomRP::RTIDHandle _DOFLowQualityColorTex; // 0xD0
		::RPG::CustomRP::RTIDHandle _OutputColorImmediateTex; // 0x108
		::RPG::CustomRP::RTIDHandle _HalfResColorTex; // 0x140
		::System::Single MinForegroundCocRadius; // 0x178
		::System::Single DepthBlurExponent; // 0x17C
		::RPG::CustomRP::RTIDHandle _ForegroundCocTex0; // 0x180
		::RPG::CustomRP::RTIDHandle _DOFBokehTex0; // 0x1B8
		::RPG::CustomRP::RTIDHandle _DOFBokehTex1; // 0x1F0
		::RPG::CustomRP::RTIDHandle _OutputBgdColorTex; // 0x228
		::System::Single MaxDepthBlurRadius; // 0x260
		::System::Single MaxBackgroundCocRadius; // 0x264
		::RPG::CustomRP::RTIDHandle _COCTile; // 0x268
		::RPG::CustomRP::RTIDHandle _HalfResCocTex; // 0x2A0
		::RPG::CustomRP::RTIDHandle _OutputFgdColorTex; // 0x2D8
		::RPG::CustomRP::RTIDHandle _ColorCoCBuffer; // 0x310
		::RPG::CustomRP::RTIDHandle _OutputFgdOpacityTex; // 0x348
		::RPG::CustomRP::RTIDHandle _DOFBokehCoC; // 0x380
		::System::Single InfinityBackgroundCocRadius; // 0x3B8
		::System::Single FocusDistance; // 0x3BC
		::RPG::CustomRP::RTIDHandle _ForegroundCocTex1; // 0x3C0
		::RPG::CustomRP::RTIDHandle _BackgroundCocTex0; // 0x3F8

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib, ::UnityEngine::MaterialPropertyBlock* uberSheet)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER__CTOR_OFFSET))(this, matLib, uberSheet);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}

		::UnityEngine::RenderTextureFormat GetDOFColorAndCoCFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GETDOFCOLORANDCOCFORMAT_OFFSET))(this);
		}

		::System::Single DepthToResCocRadius(::System::Single SceneDepth)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_DEPTHTORESCOCRADIUS_OFFSET))(this, SceneDepth);
		}

		::System::Single ComputeFocalLengthFromFov(::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEFOCALLENGTHFROMFOV_OFFSET))(this, settings);
		}

		::System::Single ComputeInfinityCocRadius(::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEINFINITYCOCRADIUS_OFFSET))(this, settings);
		}

		::System::Single ComputeViewMaxBackgroundCocRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMAXBACKGROUNDCOCRADIUS_OFFSET))(this);
		}

		::System::Single ComputeViewMinForegroundCocRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMINFOREGROUNDCOCRADIUS_OFFSET))(this);
		}

		::System::Void SetCocParams(::UnityEngine::Material* mat, ::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETCOCPARAMS_OFFSET))(this, mat, settings);
		}

		::System::Void SetupDOFDefault(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFDEFAULT_OFFSET))(this, cmd);
		}

		::System::Void SetupDOFBokehPolygon(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHPOLYGON_OFFSET))(this, cmd, settings);
		}

		::System::Void SetupDOFBokehCircle(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLE_OFFSET))(this, cmd);
		}

		::System::Void SetupDOFBokehCircleLow(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLELOW_OFFSET))(this, cmd);
		}

		::RPG::CustomRP::Quality get_GlobalDOFQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GET_GLOBALDOFQUALITY_OFFSET))(this);
		}
	};
}

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

#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEFOCALLENGTHFROMFOV_OFFSET UNITYSDK_OFFSET(0x18EFEE10)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEINFINITYCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x18EF8D50)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMAXBACKGROUNDCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x18EF8FD0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMINFOREGROUNDCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x18EF8F00)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_DEPTHTORESCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x18EFED60)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18EF8600)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GETDOFCOLORANDCOCFORMAT_OFFSET UNITYSDK_OFFSET(0x18EF8FF0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GET_GLOBALDOFQUALITY_OFFSET UNITYSDK_OFFSET(0x18EFB4C0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x18EF86E0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x18EF9060)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLELOW_OFFSET UNITYSDK_OFFSET(0x18EFB590)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLE_OFFSET UNITYSDK_OFFSET(0x18EFCAE0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHPOLYGON_OFFSET UNITYSDK_OFFSET(0x18EFA810)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFDEFAULT_OFFSET UNITYSDK_OFFSET(0x18EF93E0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF7FA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfFieldRenderer_TypeDefinitionIndex = 35480;

	class RPGDepthOfFieldRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		// static const ::System::Int32 c_CoCDownSample = 0x3; // 0x0
		::UnityEngine::MaterialPropertyBlock* _UberProperty; // 0x28
		::Il2CppArray<::RPG::CustomRP::RPGDepthOfField_CoCDescriptor*>* m_CoCList; // 0x30
		::UnityEngine::Material* _Uber; // 0x38
		::RPG::CustomRP::MRTBinding _TwoRTs; // 0x40
		::RPG::CustomRP::RTIDHandle _OutputColorImmediateTex; // 0x98
		::RPG::CustomRP::RTIDHandle _OutputBgdColorTex; // 0xD0
		::System::Single MinForegroundCocRadius; // 0x108
		::System::Single InfinityBackgroundCocRadius; // 0x10C
		::System::Single MaxDepthBlurRadius; // 0x110
		::System::Single MaxBackgroundCocRadius; // 0x114
		::RPG::CustomRP::RTIDHandle _COCTile; // 0x118
		::RPG::CustomRP::RTIDHandle _OutputFgdColorTex; // 0x150
		::RPG::CustomRP::RTIDHandle _DOFLowQualityColorTex; // 0x188
		::RPG::CustomRP::RTIDHandle _DOFBokehTex1; // 0x1C0
		::RPG::CustomRP::RTIDHandle _HalfResCocTex; // 0x1F8
		::RPG::CustomRP::RTIDHandle _HalfResColorTex; // 0x230
		::RPG::CustomRP::RTIDHandle _BackgroundCocTex0; // 0x268
		::RPG::CustomRP::RTIDHandle _ForegroundCocTex1; // 0x2A0
		::RPG::CustomRP::RTIDHandle _DOFBokehTex0; // 0x2D8
		::System::Single FocusDistance; // 0x310
		::System::Single DepthBlurExponent; // 0x314
		::RPG::CustomRP::RTIDHandle _OutputFgdOpacityTex; // 0x318
		::RPG::CustomRP::RTIDHandle _ColorCoCBuffer; // 0x350
		::RPG::CustomRP::RTIDHandle _DOFBokehCoC; // 0x388
		::RPG::CustomRP::RTIDHandle _BackgroundCocTex1; // 0x3C0
		::RPG::CustomRP::RTIDHandle _ForegroundCocTex0; // 0x3F8

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1, ::UnityEngine::MaterialPropertyBlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTextureFormat GetDOFColorAndCoCFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GETDOFCOLORANDCOCFORMAT_OFFSET))(this);
		}

		::System::Single DepthToResCocRadius(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_DEPTHTORESCOCRADIUS_OFFSET))(this, a1);
		}

		::System::Single ComputeFocalLengthFromFov(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEFOCALLENGTHFROMFOV_OFFSET))(this, a1);
		}

		::System::Single ComputeInfinityCocRadius(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEINFINITYCOCRADIUS_OFFSET))(this, a1);
		}

		::System::Single ComputeViewMaxBackgroundCocRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMAXBACKGROUNDCOCRADIUS_OFFSET))(this);
		}

		::System::Single ComputeViewMinForegroundCocRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMINFOREGROUNDCOCRADIUS_OFFSET))(this);
		}

		::System::Void SetCocParams(::UnityEngine::Material* a1, ::RPG::CustomRP::RPGDepthOfField* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETCOCPARAMS_OFFSET))(this, a1, a2);
		}

		::System::Void SetupDOFDefault(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFDEFAULT_OFFSET))(this, a1);
		}

		::System::Void SetupDOFBokehPolygon(::UnityEngine::Rendering::CommandBuffer* a1, ::RPG::CustomRP::RPGDepthOfField* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHPOLYGON_OFFSET))(this, a1, a2);
		}

		::System::Void SetupDOFBokehCircle(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLE_OFFSET))(this, a1);
		}

		::System::Void SetupDOFBokehCircleLow(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLELOW_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_GlobalDOFQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GET_GLOBALDOFQUALITY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_MOTIONBLURRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16BF1D10)
#define RPG_CUSTOMRP_MOTIONBLURRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16BF1E80)
#define RPG_CUSTOMRP_MOTIONBLURRENDERER_SETUPOUTPUTRT_OFFSET UNITYSDK_OFFSET(0x16BF1CE0)
#define RPG_CUSTOMRP_MOTIONBLURRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF1AF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurRenderer_TypeDefinitionIndex = 36288;

	class MotionBlurRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _MotionBlurMaterial; // 0x28
		::RPG::CustomRP::RTIDHandle _VelocityTileMaxHorizontal; // 0x30
		::RPG::CustomRP::RTIDHandle _VelocityTileNeighborMax; // 0x68
		::RPG::CustomRP::RTIDHandle _VelocityTileMax; // 0xA0
		::RPG::CustomRP::RTIDHandle _Veloctiy; // 0xD8

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURRENDERER__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetupOutputRT(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURRENDERER_SETUPOUTPUTRT_OFFSET))(this, a1);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURRENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MOTIONBLURRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}

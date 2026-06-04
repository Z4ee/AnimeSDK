#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_MOTIONBLURRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x18EEBD00)
#define RPG_CUSTOMRP_MOTIONBLURRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x18EEBE70)
#define RPG_CUSTOMRP_MOTIONBLURRENDERER_SETUPOUTPUTRT_OFFSET UNITYSDK_OFFSET(0x18EEBCD0)
#define RPG_CUSTOMRP_MOTIONBLURRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEBAE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurRenderer_TypeDefinitionIndex = 35506;

	class MotionBlurRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _MotionBlurMaterial; // 0x28
		::RPG::CustomRP::RTIDHandle _VelocityTileMaxHorizontal; // 0x30
		::RPG::CustomRP::RTIDHandle _VelocityTileMax; // 0x68
		::RPG::CustomRP::RTIDHandle _VelocityTileNeighborMax; // 0xA0
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

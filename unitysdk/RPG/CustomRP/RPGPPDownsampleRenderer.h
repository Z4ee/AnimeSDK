#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16C14F20)
#define RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16C15000)
#define RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C14EF0)
#define RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C14EE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGPPDownsampleRenderer_TypeDefinitionIndex = 36290;

	class RPGPPDownsampleRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPDOWNSAMPLERENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}

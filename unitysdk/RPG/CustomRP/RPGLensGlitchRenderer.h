#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGLensGlitch; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16AC2440)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16AC2830)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x16AC2510)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x16AC2500)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16AC2400)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC2390)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitchRenderer_TypeDefinitionIndex = 29431;

	class RPGLensGlitchRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _GlitchMat; // 0x28
		::RPG::CustomRP::RPGLensGlitch* settings; // 0x30
		::System::Int32 _RenderTarget; // 0x38
		::System::Int32 _PPGlitchCopy; // 0x3C
		::UnityEngine::RenderTextureDescriptor glitchCopyDesc; // 0x40

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matlib)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER__CTOR_OFFSET))(this, matlib);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void setRenderTarget(::System::Int32 renderTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETRENDERTARGET_OFFSET))(this, renderTarget);
		}

		::System::Void setParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETPARAM_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}
	};
}

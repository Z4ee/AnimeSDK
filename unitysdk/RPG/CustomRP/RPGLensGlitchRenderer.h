#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGLensGlitch; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16C14230)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16C148F0)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x16C14300)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x16C142F0)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C141F0)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C14180)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitchRenderer_TypeDefinitionIndex = 36280;

	class RPGLensGlitchRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _GlitchMat; // 0x28
		::RPG::CustomRP::RPGLensGlitch* settings; // 0x30
		::UnityEngine::RenderTextureDescriptor glitchCopyDesc; // 0x38
		::System::Int32 _RenderTarget; // 0x68
		::System::Int32 _PPGlitchCopy; // 0x6C

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void setRenderTarget(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETRENDERTARGET_OFFSET))(this, a1);
		}

		::System::Void setParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETPARAM_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}

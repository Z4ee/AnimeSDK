#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGLensGlitch; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C6D4840)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6D4F00)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x1C6D4910)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1C6D4900)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C6D4800)
#define RPG_CUSTOMRP_RPGLENSGLITCHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D4790)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitchRenderer_TypeDefinitionIndex = 37139;

	class RPGLensGlitchRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::RPG::CustomRP::RPGLensGlitch* settings; // 0x28
		::UnityEngine::Material* _GlitchMat; // 0x30
		::System::Int32 _PPGlitchCopy; // 0x38
		::UnityEngine::RenderTextureDescriptor glitchCopyDesc; // 0x3C
		::System::Int32 _RenderTarget; // 0x6C

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

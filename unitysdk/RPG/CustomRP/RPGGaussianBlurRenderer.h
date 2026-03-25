#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"

namespace RPG::CustomRP { class GaussianFilterKernel; }
namespace RPG::CustomRP { class MaterialLibrary; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGGAUSSIANBLURRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16ABE110)
#define RPG_CUSTOMRP_RPGGAUSSIANBLURRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16ABE1D0)
#define RPG_CUSTOMRP_RPGGAUSSIANBLURRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABE040)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGGaussianBlurRenderer_TypeDefinitionIndex = 29422;

	class RPGGaussianBlurRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _UberProperty; // 0x28
		::RPG::CustomRP::GaussianFilterKernel* _GaussianFilterKernel; // 0x30
		::UnityEngine::Material* _Uber; // 0x38
		::System::Int32 _LightenTex; // 0x40
		::System::Int32 _GlobalGaussianBlurTex1; // 0x44
		::System::Int32 _GlobalGaussianBlurTex0; // 0x48

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib, ::UnityEngine::MaterialPropertyBlock* uberSheet)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGGAUSSIANBLURRENDERER__CTOR_OFFSET))(this, matLib, uberSheet);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGGAUSSIANBLURRENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGGAUSSIANBLURRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}
	};
}

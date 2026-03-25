#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16AC59D0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETISOUTPUTTORT_OFFSET UNITYSDK_OFFSET(0x16AC40C0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x16AC40D0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x16AC40B0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16AC4070)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC4050)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGPPPatternRenderer_TypeDefinitionIndex = 29443;

	class RPGPPPatternRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::RPG::CustomRP::RPGPPPattern* settings; // 0x28
		::UnityEngine::Material* _PatternMat; // 0x30
		::System::Int32 _RenderTarget; // 0x38
		::System::Boolean isRenderToRT; // 0x3C

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matlib)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER__CTOR_OFFSET))(this, matlib);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void setRenderTarget(::System::Int32 renderTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETRENDERTARGET_OFFSET))(this, renderTarget);
		}

		::System::Void setIsOutputToRT(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETISOUTPUTTORT_OFFSET))(this, value);
		}

		::System::Void setParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETPARAM_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16C18070)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETISOUTPUTTORT_OFFSET UNITYSDK_OFFSET(0x16C15BC0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x16C15BD0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x16C15BB0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C15B70)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C15B50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGPPPatternRenderer_TypeDefinitionIndex = 36292;

	class RPGPPPatternRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _PatternMat; // 0x28
		::RPG::CustomRP::RPGPPPattern* settings; // 0x30
		::System::Int32 _RenderTarget; // 0x38
		::System::Boolean isRenderToRT; // 0x3C

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void setRenderTarget(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETRENDERTARGET_OFFSET))(this, a1);
		}

		::System::Void setIsOutputToRT(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETISOUTPUTTORT_OFFSET))(this, a1);
		}

		::System::Void setParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETPARAM_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGPPPATTERNRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}

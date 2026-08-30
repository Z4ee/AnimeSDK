#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x185A7990)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETISOUTPUTTORT_OFFSET UNITYSDK_OFFSET(0x185A54E0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x185A54F0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x185A54D0)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x185A5490)
#define RPG_CUSTOMRP_RPGPPPATTERNRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x185A5470)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGPPPatternRenderer_TypeDefinitionIndex = 37151;

	class RPGPPPatternRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::RPG::CustomRP::RPGPPPattern* settings; // 0x28
		::UnityEngine::Material* _PatternMat; // 0x30
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/RPG/CustomRP/MRTBinding.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGSKILLRADIALBLURRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x185AA4C0)
#define RPG_CUSTOMRP_RPGSKILLRADIALBLURRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x185AA3A0)
#define RPG_CUSTOMRP_RPGSKILLRADIALBLURRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x185AA2D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGSkillRadialBlurRenderer_TypeDefinitionIndex = 37156;

	class RPGSkillRadialBlurRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::RPG::CustomRP::MRTBinding _RTBinding; // 0x28
		::UnityEngine::Material* _Uber; // 0x80

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSKILLRADIALBLURRENDERER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSKILLRADIALBLURRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSKILLRADIALBLURRENDERER_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}

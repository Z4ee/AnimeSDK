#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_219F87448AC0B2DC_OFFSET UNITYSDK_OFFSET(0x19554470)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_42472F1B67E5D096_OFFSET UNITYSDK_OFFSET(0x19554540)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_4A6D4C35E1EC3C29_OFFSET UNITYSDK_OFFSET(0x19554680)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_5382E658DA86250D_OFFSET UNITYSDK_OFFSET(0x19554700)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x195544F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveSkillPointEntity_TypeDefinitionIndex = 21196;

	class ByHaveSkillPointEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_219F87448AC0B2DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_219F87448AC0B2DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_42472F1B67E5D096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_42472F1B67E5D096_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4A6D4C35E1EC3C29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_4A6D4C35E1EC3C29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5382E658DA86250D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_5382E658DA86250D_OFFSET))(a1, a2);
		}
	};
}

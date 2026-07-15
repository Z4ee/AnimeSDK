#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_42472F1B67E5D096_OFFSET UNITYSDK_OFFSET(0x1A8CF4E0)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_71244D5E64B31995_OFFSET UNITYSDK_OFFSET(0x1A8CF4A0)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_E335C01BB59BE080_OFFSET UNITYSDK_OFFSET(0x1A8CF620)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_E7C82CAB250C19A1_OFFSET UNITYSDK_OFFSET(0x1A8CF650)
#define RPG_GAMECORE_BYHAVESKILLPOINTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CF4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveSkillPointEntity_TypeDefinitionIndex = 21611;

	class ByHaveSkillPointEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_71244D5E64B31995(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_71244D5E64B31995_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_42472F1B67E5D096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_42472F1B67E5D096_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E335C01BB59BE080(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_E335C01BB59BE080_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E7C82CAB250C19A1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVESKILLPOINTENTITY_METHOD_4_E7C82CAB250C19A1_OFFSET))(a1, a2);
		}
	};
}

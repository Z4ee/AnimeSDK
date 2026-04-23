#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_3F21A508368587A6_OFFSET UNITYSDK_OFFSET(0x186708B0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_98F78F0591A79AF8_OFFSET UNITYSDK_OFFSET(0x186707E0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x18670860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMazeSkillUseCheck_TypeDefinitionIndex = 18959;

	class AdventureByMazeSkillUseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98F78F0591A79AF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_98F78F0591A79AF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F21A508368587A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_METHOD_4_3F21A508368587A6_OFFSET))(a1, a2);
		}
	};
}

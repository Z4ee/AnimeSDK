#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_24C15582DB553925_OFFSET UNITYSDK_OFFSET(0x195404F0)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_34E628933CC684D6_OFFSET UNITYSDK_OFFSET(0x195402A0)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_37B5DDE882A8DB88_OFFSET UNITYSDK_OFFSET(0x19540570)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_A95EBD651CDF9238_OFFSET UNITYSDK_OFFSET(0x19540370)
#define RPG_GAMECORE_BYCONTAINOPINSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19540320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainOpInSkill_TypeDefinitionIndex = 21339;

	class ByContainOpInSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34E628933CC684D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_34E628933CC684D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A95EBD651CDF9238(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_A95EBD651CDF9238_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_24C15582DB553925(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_24C15582DB553925_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37B5DDE882A8DB88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_37B5DDE882A8DB88_OFFSET))(a1, a2);
		}
	};
}

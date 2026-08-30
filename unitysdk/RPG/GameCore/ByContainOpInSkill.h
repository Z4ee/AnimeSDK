#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_26798C3E8EA50B08_OFFSET UNITYSDK_OFFSET(0x1BBCDBD0)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_2D18CF9DDD452546_OFFSET UNITYSDK_OFFSET(0x1BBCDC00)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_589F57DAA4C2216D_OFFSET UNITYSDK_OFFSET(0x1BBCDA10)
#define RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_A95EBD651CDF9238_OFFSET UNITYSDK_OFFSET(0x1BBCDA50)
#define RPG_GAMECORE_BYCONTAINOPINSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCDA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainOpInSkill_TypeDefinitionIndex = 22321;

	class ByContainOpInSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_589F57DAA4C2216D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_589F57DAA4C2216D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A95EBD651CDF9238(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_A95EBD651CDF9238_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26798C3E8EA50B08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_26798C3E8EA50B08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D18CF9DDD452546(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINOPINSKILL_METHOD_4_2D18CF9DDD452546_OFFSET))(a1, a2);
		}
	};
}

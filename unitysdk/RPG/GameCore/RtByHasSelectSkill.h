#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_2AD7AC616024CA7A_OFFSET UNITYSDK_OFFSET(0x19BE0DE0)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_4CA633219685EE1B_OFFSET UNITYSDK_OFFSET(0x19BE0D60)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_AC8BEDD3D87A10D6_OFFSET UNITYSDK_OFFSET(0x19BE0BE0)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_C3D54E2E3F186BA8_OFFSET UNITYSDK_OFFSET(0x19BE0B10)
#define RPG_GAMECORE_RTBYHASSELECTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE0B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasSelectSkill_TypeDefinitionIndex = 22909;

	class RtByHasSelectSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C3D54E2E3F186BA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasSelectSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasSelectSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_C3D54E2E3F186BA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC8BEDD3D87A10D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_AC8BEDD3D87A10D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4CA633219685EE1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_4CA633219685EE1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2AD7AC616024CA7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_2AD7AC616024CA7A_OFFSET))(a1, a2);
		}
	};
}

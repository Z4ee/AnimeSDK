#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_62289F380C68360C_OFFSET UNITYSDK_OFFSET(0x1D4A0560)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_AC8BEDD3D87A10D6_OFFSET UNITYSDK_OFFSET(0x1D4A03B0)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_CFB3C72B8E319A02_OFFSET UNITYSDK_OFFSET(0x1D4A0530)
#define RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_FDE6A6009F784A87_OFFSET UNITYSDK_OFFSET(0x1D4A0370)
#define RPG_GAMECORE_RTBYHASSELECTSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A03A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasSelectSkill_TypeDefinitionIndex = 23956;

	class RtByHasSelectSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FDE6A6009F784A87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasSelectSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasSelectSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_FDE6A6009F784A87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC8BEDD3D87A10D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_AC8BEDD3D87A10D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFB3C72B8E319A02(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_CFB3C72B8E319A02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_62289F380C68360C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASSELECTSKILL_METHOD_4_62289F380C68360C_OFFSET))(a1, a2);
		}
	};
}

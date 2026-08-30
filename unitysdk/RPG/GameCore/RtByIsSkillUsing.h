#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33034D1BEA687950_OFFSET UNITYSDK_OFFSET(0x1CCDF1C0)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_62BA27A72D1A09E5_OFFSET UNITYSDK_OFFSET(0x1CCDF180)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_B0AC0D5C4C815C60_OFFSET UNITYSDK_OFFSET(0x1CCDF340)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_E4429D07D0D35F2E_OFFSET UNITYSDK_OFFSET(0x1CCDF370)
#define RPG_GAMECORE_RTBYISSKILLUSING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDF1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsSkillUsing_TypeDefinitionIndex = 23955;

	class RtByIsSkillUsing : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_62BA27A72D1A09E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_62BA27A72D1A09E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33034D1BEA687950(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33034D1BEA687950_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B0AC0D5C4C815C60(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_B0AC0D5C4C815C60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4429D07D0D35F2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_E4429D07D0D35F2E_OFFSET))(a1, a2);
		}
	};
}

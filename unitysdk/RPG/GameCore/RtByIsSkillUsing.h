#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_1730A5E41CAC09F0_OFFSET UNITYSDK_OFFSET(0x19BE2A20)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33034D1BEA687950_OFFSET UNITYSDK_OFFSET(0x19BE2820)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33AEF02803A8AA6D_OFFSET UNITYSDK_OFFSET(0x19BE29A0)
#define RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_D1DCC168F389BA4E_OFFSET UNITYSDK_OFFSET(0x19BE2750)
#define RPG_GAMECORE_RTBYISSKILLUSING__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE27D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsSkillUsing_TypeDefinitionIndex = 22908;

	class RtByIsSkillUsing : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1DCC168F389BA4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_D1DCC168F389BA4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33034D1BEA687950(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33034D1BEA687950_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33AEF02803A8AA6D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_33AEF02803A8AA6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1730A5E41CAC09F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISSKILLUSING_METHOD_4_1730A5E41CAC09F0_OFFSET))(a1, a2);
		}
	};
}

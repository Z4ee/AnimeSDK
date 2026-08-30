#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_5DC292E4B4EA6A1E_OFFSET UNITYSDK_OFFSET(0x1CCDE6C0)
#define RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_6B7826D90B765878_OFFSET UNITYSDK_OFFSET(0x1CCDE500)
#define RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_BC96E2018D9CBE05_OFFSET UNITYSDK_OFFSET(0x1CCDE4C0)
#define RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_DE360941461E7638_OFFSET UNITYSDK_OFFSET(0x1CCDE6F0)
#define RPG_GAMECORE_RTBYINSKILLRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDE4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByInSkillRange_TypeDefinitionIndex = 23954;

	class RtByInSkillRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CheckTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC96E2018D9CBE05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInSkillRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInSkillRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_BC96E2018D9CBE05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B7826D90B765878(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_6B7826D90B765878_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DC292E4B4EA6A1E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_5DC292E4B4EA6A1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE360941461E7638(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINSKILLRANGE_METHOD_4_DE360941461E7638_OFFSET))(a1, a2);
		}
	};
}

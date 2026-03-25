#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_41E06D28B56B42F2_OFFSET UNITYSDK_OFFSET(0x17353B30)
#define RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_4F412DBA8CD64911_OFFSET UNITYSDK_OFFSET(0x17353AB0)
#define RPG_GAMECORE_LISTENTARGETUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x17353B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenTargetUseSkill_TypeDefinitionIndex = 19909;

	class ListenTargetUseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Owner; // 0x18
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::Il2CppArray<::RPG::GameCore::AdventureSkillType>* ListenSkillType; // 0x28
		::System::Single Distance; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ListenCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F412DBA8CD64911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenTargetUseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenTargetUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_4F412DBA8CD64911_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41E06D28B56B42F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_41E06D28B56B42F2_OFFSET))(a1, a2);
		}
	};
}

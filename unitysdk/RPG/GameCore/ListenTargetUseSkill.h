#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_4105F1F8F60D1E7B_OFFSET UNITYSDK_OFFSET(0x1DD60820)
#define RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_F01360CC5E84B306_OFFSET UNITYSDK_OFFSET(0x1DD607E0)
#define RPG_GAMECORE_LISTENTARGETUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD60810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenTargetUseSkill_TypeDefinitionIndex = 21498;

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

		static ::System::Void Method_3_F01360CC5E84B306(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenTargetUseSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenTargetUseSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_F01360CC5E84B306_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4105F1F8F60D1E7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_METHOD_3_4105F1F8F60D1E7B_OFFSET))(a1, a2);
		}
	};
}

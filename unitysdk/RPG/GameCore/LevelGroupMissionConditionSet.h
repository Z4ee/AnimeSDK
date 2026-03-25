#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionConditionOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupMissionCondition; }

#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET_METHOD_2_9D5084BB1905644E_OFFSET UNITYSDK_OFFSET(0x173319A0)
#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x17339F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionConditionSet_TypeDefinitionIndex = 15801;

	class LevelGroupMissionConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupMissionCondition*>* Conditions; // 0x10
		::RPG::GameCore::LevelGroupMissionConditionOperation Operation; // 0x18
		::System::Boolean DelayToLevelReload; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D5084BB1905644E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupMissionConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupMissionConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITIONSET_METHOD_2_9D5084BB1905644E_OFFSET))(a1, a2);
		}
	};
}

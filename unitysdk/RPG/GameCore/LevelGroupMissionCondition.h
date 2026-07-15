#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionPhase.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITION_METHOD_2_27970A41F9808B31_OFFSET UNITYSDK_OFFSET(0x1B0704E0)
#define RPG_GAMECORE_LEVELGROUPMISSIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B070630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionCondition_TypeDefinitionIndex = 16520;

	class LevelGroupMissionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelGroupMissionType Type; // 0x10
		::RPG::GameCore::LevelGroupMissionPhase Phase; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_27970A41F9808B31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupMissionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupMissionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONCONDITION_METHOD_2_27970A41F9808B31_OFFSET))(a1, a2);
		}
	};
}

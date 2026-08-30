#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_METHOD_3_931F3369DC67FBEE_OFFSET UNITYSDK_OFFSET(0x1D1D3410)
#define RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_METHOD_3_B17CB9FE380C8097_OFFSET UNITYSDK_OFFSET(0x1D1D54D0)
#define RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D3400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionSavedValueCondition_TypeDefinitionIndex = 17019;

	class LevelGroupMissionSavedValueCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::RPG::GameCore::MissionCustomValue* MissionSavedValue; // 0x18
		::RPG::GameCore::CompareType Operation; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B17CB9FE380C8097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupMissionSavedValueCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupMissionSavedValueCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_METHOD_3_B17CB9FE380C8097_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_931F3369DC67FBEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupMissionSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupMissionSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMISSIONSAVEDVALUECONDITION_METHOD_3_931F3369DC67FBEE_OFFSET))(a1, a2);
		}
	};
}

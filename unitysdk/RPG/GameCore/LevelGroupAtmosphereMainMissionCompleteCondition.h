#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_METHOD_3_1281D7B07F8C1F4F_OFFSET UNITYSDK_OFFSET(0x1C1167A0)
#define RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_METHOD_3_7D77EEB3AFB22EEA_OFFSET UNITYSDK_OFFSET(0x1C116D50)
#define RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupAtmosphereMainMissionCompleteCondition_TypeDefinitionIndex = 17021;

	class LevelGroupAtmosphereMainMissionCompleteCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::UInt32 MainMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D77EEB3AFB22EEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_METHOD_3_7D77EEB3AFB22EEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1281D7B07F8C1F4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHEREMAINMISSIONCOMPLETECONDITION_METHOD_3_1281D7B07F8C1F4F_OFFSET))(a1, a2);
		}
	};
}

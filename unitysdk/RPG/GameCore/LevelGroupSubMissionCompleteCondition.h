#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_METHOD_3_29A012CEE775FCA3_OFFSET UNITYSDK_OFFSET(0x1C118F40)
#define RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_METHOD_3_6C11EF30CBDC644E_OFFSET UNITYSDK_OFFSET(0x1C116B10)
#define RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSubMissionCompleteCondition_TypeDefinitionIndex = 17018;

	class LevelGroupSubMissionCompleteCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::UInt32 SubMissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29A012CEE775FCA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_METHOD_3_29A012CEE775FCA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C11EF30CBDC644E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSUBMISSIONCOMPLETECONDITION_METHOD_3_6C11EF30CBDC644E_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_METHOD_3_B7CEC4C5E028EE47_OFFSET UNITYSDK_OFFSET(0x1940D9E0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_METHOD_3_F9506AD661724CD0_OFFSET UNITYSDK_OFFSET(0x1940D960)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1940D9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_ResultValue_TypeDefinitionIndex = 20359;

	class AddFinishMissionData_ResultValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::UInt32 MissionResultValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9506AD661724CD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_ResultValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_ResultValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_METHOD_3_F9506AD661724CD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7CEC4C5E028EE47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddFinishMissionData_ResultValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddFinishMissionData_ResultValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_RESULTVALUE_METHOD_3_B7CEC4C5E028EE47_OFFSET))(a1, a2);
		}
	};
}

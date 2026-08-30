#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETMISSIONWAYPOINT_METHOD_3_5680F46EA55D2FBF_OFFSET UNITYSDK_OFFSET(0x1DB93660)
#define RPG_GAMECORE_RESETMISSIONWAYPOINT_METHOD_3_A16AEA80EB49B2AC_OFFSET UNITYSDK_OFFSET(0x1DB936A0)
#define RPG_GAMECORE_RESETMISSIONWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB93690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetMissionWayPoint_TypeDefinitionIndex = 21440;

	class ResetMissionWayPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5680F46EA55D2FBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetMissionWayPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetMissionWayPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONWAYPOINT_METHOD_3_5680F46EA55D2FBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A16AEA80EB49B2AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetMissionWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONWAYPOINT_METHOD_3_A16AEA80EB49B2AC_OFFSET))(a1, a2);
		}
	};
}

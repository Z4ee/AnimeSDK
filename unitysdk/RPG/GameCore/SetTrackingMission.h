#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_12C442B859D2299D_OFFSET UNITYSDK_OFFSET(0x19C65850)
#define RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_9C36E1AF811DFAFC_OFFSET UNITYSDK_OFFSET(0x19C657D0)
#define RPG_GAMECORE_SETTRACKINGMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C65820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTrackingMission_TypeDefinitionIndex = 19617;

	class SetTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C36E1AF811DFAFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrackingMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrackingMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_9C36E1AF811DFAFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12C442B859D2299D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrackingMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_12C442B859D2299D_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_12C442B859D2299D_OFFSET UNITYSDK_OFFSET(0x1C60EA00)
#define RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_57BD5B8D950E2346_OFFSET UNITYSDK_OFFSET(0x1C60E9C0)
#define RPG_GAMECORE_SETTRACKINGMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60E9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTrackingMission_TypeDefinitionIndex = 19976;

	class SetTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_57BD5B8D950E2346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrackingMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrackingMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_57BD5B8D950E2346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12C442B859D2299D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTrackingMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACKINGMISSION_METHOD_3_12C442B859D2299D_OFFSET))(a1, a2);
		}
	};
}

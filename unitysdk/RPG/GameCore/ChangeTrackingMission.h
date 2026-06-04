#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGETRACKINGMISSION_METHOD_3_BA38D0C1B2030339_OFFSET UNITYSDK_OFFSET(0x19605FC0)
#define RPG_GAMECORE_CHANGETRACKINGMISSION_METHOD_3_FE1DA113A76B6CB0_OFFSET UNITYSDK_OFFSET(0x19605F40)
#define RPG_GAMECORE_CHANGETRACKINGMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19605F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeTrackingMission_TypeDefinitionIndex = 20361;

	class ChangeTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TrackingMainMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKINGMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE1DA113A76B6CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTrackingMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTrackingMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKINGMISSION_METHOD_3_FE1DA113A76B6CB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA38D0C1B2030339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTrackingMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETRACKINGMISSION_METHOD_3_BA38D0C1B2030339_OFFSET))(a1, a2);
		}
	};
}

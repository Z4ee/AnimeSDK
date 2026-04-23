#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITTRACKINGMISSION_METHOD_3_435F991BB1F935F6_OFFSET UNITYSDK_OFFSET(0x1910AB30)
#define RPG_GAMECORE_WAITTRACKINGMISSION_METHOD_3_475152BF63673DAF_OFFSET UNITYSDK_OFFSET(0x1910ABB0)
#define RPG_GAMECORE_WAITTRACKINGMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1910AB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTrackingMission_TypeDefinitionIndex = 20133;

	class WaitTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitEqual; // 0x18
		::System::Boolean UseGroupOwnerMission; // 0x19
		::System::UInt32 MainMissionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRACKINGMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_435F991BB1F935F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTrackingMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTrackingMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRACKINGMISSION_METHOD_3_435F991BB1F935F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_475152BF63673DAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTrackingMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRACKINGMISSION_METHOD_3_475152BF63673DAF_OFFSET))(a1, a2);
		}
	};
}

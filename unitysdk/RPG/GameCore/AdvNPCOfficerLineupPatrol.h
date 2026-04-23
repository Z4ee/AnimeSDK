#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_METHOD_3_3773C08236E86A40_OFFSET UNITYSDK_OFFSET(0x18656AD0)
#define RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_METHOD_3_BCF7D6823E77EF16_OFFSET UNITYSDK_OFFSET(0x18656B60)
#define RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18656B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCOfficerLineupPatrol_TypeDefinitionIndex = 18921;

	class AdvNPCOfficerLineupPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StayOnWaypoint; // 0x18
		::System::Boolean IsNeatlyPatrol; // 0x19
		::System::Single StayOnWaypointDuration; // 0x1C
		::RPG::GameCore::TaskConfig* OnWaypointTask; // 0x20
		::System::Single FallOutDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3773C08236E86A40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_METHOD_3_3773C08236E86A40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCF7D6823E77EF16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCOfficerLineupPatrol* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_METHOD_3_BCF7D6823E77EF16_OFFSET))(a1, a2);
		}
	};
}

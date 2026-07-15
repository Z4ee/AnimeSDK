#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_354522DBCBD6E651_OFFSET UNITYSDK_OFFSET(0x1BE22F30)
#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_905B2F74C0AAF014_OFFSET UNITYSDK_OFFSET(0x1BE23000)
#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE22FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCSoldierLineupPatrol_TypeDefinitionIndex = 19227;

	class AdvNPCSoldierLineupPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_354522DBCBD6E651(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_354522DBCBD6E651_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_905B2F74C0AAF014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_905B2F74C0AAF014_OFFSET))(a1, a2);
		}
	};
}

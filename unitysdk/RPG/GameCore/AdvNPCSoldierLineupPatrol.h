#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_3B9398D5AB6CBD28_OFFSET UNITYSDK_OFFSET(0x16F35960)
#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_905B2F74C0AAF014_OFFSET UNITYSDK_OFFSET(0x16F35A70)
#define RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F35A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCSoldierLineupPatrol_TypeDefinitionIndex = 18275;

	class AdvNPCSoldierLineupPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B9398D5AB6CBD28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_3B9398D5AB6CBD28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_905B2F74C0AAF014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSOLDIERLINEUPPATROL_METHOD_3_905B2F74C0AAF014_OFFSET))(a1, a2);
		}
	};
}

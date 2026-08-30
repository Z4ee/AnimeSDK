#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE11DD0)
#define RPG_GAMECORE_ALLEYMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE124A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMissionRow_TypeDefinitionIndex = 12518;

	class AlleyMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventEffect; // 0x10
		::System::Boolean IsMissionTrack; // 0x18
		::System::Boolean IsUrgent; // 0x19
		::System::UInt32 NextMission; // 0x1C
		::System::UInt32 MissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyMissionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

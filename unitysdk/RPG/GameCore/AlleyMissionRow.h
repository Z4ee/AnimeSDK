#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F76F80)
#define RPG_GAMECORE_ALLEYMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F775F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMissionRow_TypeDefinitionIndex = 11502;

	class AlleyMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventEffect; // 0x10
		::System::UInt32 MissionID; // 0x18
		::System::UInt32 NextMission; // 0x1C
		::System::Boolean IsMissionTrack; // 0x20
		::System::Boolean IsUrgent; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

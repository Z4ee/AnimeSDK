#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DAILYMISSIONDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D012A70)
#define RPG_GAMECORE_DAILYMISSIONDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D013160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyMissionDataRow_TypeDefinitionIndex = 13017;

	class DailyMissionDataRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 UnlockMainMission; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 QuestID; // 0x24
		::System::UInt32 DailyMissionType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DailyMissionDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyMissionDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

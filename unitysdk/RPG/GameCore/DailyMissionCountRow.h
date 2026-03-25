#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYMISSIONCOUNTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17145730)
#define RPG_GAMECORE_DAILYMISSIONCOUNTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171458A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyMissionCountRow_TypeDefinitionIndex = 11966;

	class DailyMissionCountRow : public ::System::Object
	{
	public:
		::System::UInt32 DailyCount; // 0x10
		::System::UInt32 DailyMissionType; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONCOUNTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DailyMissionCountRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyMissionCountRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONCOUNTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

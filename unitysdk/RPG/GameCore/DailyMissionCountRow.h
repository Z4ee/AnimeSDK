#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAILYMISSIONCOUNTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BC43A60)
#define RPG_GAMECORE_DAILYMISSIONCOUNTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC43BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DailyMissionCountRow_TypeDefinitionIndex = 12624;

	class DailyMissionCountRow : public ::System::Object
	{
	public:
		::System::UInt32 DailyMissionType; // 0x10
		::System::UInt32 DailyCount; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONCOUNTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DailyMissionCountRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DailyMissionCountRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAILYMISSIONCOUNTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYVERSIONBANNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB13160)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB13710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityVersionBannerRow_TypeDefinitionIndex = 10838;

	class ActivityVersionBannerRow : public ::System::Object
	{
	public:
		::System::UInt32 ChapterID; // 0x10
		::System::UInt32 ActivityID; // 0x14
		::RPG::GameCore::MainMissionType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityVersionBannerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityVersionBannerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

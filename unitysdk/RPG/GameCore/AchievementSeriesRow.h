#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTSERIESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9FC5D0)
#define RPG_GAMECORE_ACHIEVEMENTSERIESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FCDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementSeriesRow_TypeDefinitionIndex = 10534;

	class AchievementSeriesRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* CopperIconPath; // 0x18
		::System::String* GoldIconPath; // 0x20
		::System::String* SilverIconPath; // 0x28
		::System::String* MainIconPath; // 0x30
		::RPG::Client::TextID SeriesTitle; // 0x38
		::RPG::GameCore::ShowType ShowType; // 0x48
		::System::UInt32 ShowParamInt1; // 0x4C
		::System::UInt32 Priority; // 0x50
		::System::UInt32 SeriesID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AchievementSeriesRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AchievementSeriesRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTSERIESROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

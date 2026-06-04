#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityCountRefreshType.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193E4910)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193E5400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFarmMultipleDropRow_TypeDefinitionIndex = 11021;

	class ActivityFarmMultipleDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>* MultipleDropTypeList; // 0x10
		::RPG::Client::TextID BannerText; // 0x18
		::RPG::Client::TextID LabelText; // 0x28
		::RPG::Client::TextID MappingInfoBannerText; // 0x38
		::System::UInt32 CountValue; // 0x48
		::RPG::GameCore::ActivityCountRefreshType CountRefreshType; // 0x4C
		::System::UInt32 ActivityModuleID; // 0x50
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x54
		::RPG::Client::TextID HintText; // 0x58
		::RPG::Client::TextID NameText; // 0x68
		::RPG::Client::TextID ActivityPanelBannerText; // 0x78
		::System::UInt32 ActivityThemeID; // 0x88
		::System::UInt32 ID; // 0x8C
		::System::UInt32 Priority; // 0x90
		::System::UInt32 DropMultiple; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFarmMultipleDropRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFarmMultipleDropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

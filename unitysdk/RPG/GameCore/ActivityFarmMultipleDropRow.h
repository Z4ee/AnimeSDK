#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityCountRefreshType.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9FEFF0)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFarmMultipleDropRow_TypeDefinitionIndex = 11460;

	class ActivityFarmMultipleDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>* MultipleDropTypeList; // 0x10
		::RPG::Client::TextID NameText; // 0x18
		::System::UInt32 Priority; // 0x28
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::UInt32 CountValue; // 0x34
		::RPG::Client::TextID HintText; // 0x38
		::RPG::Client::TextID ActivityPanelBannerText; // 0x48
		::RPG::Client::TextID BannerText; // 0x58
		::System::UInt32 ActivityThemeID; // 0x68
		::RPG::GameCore::ActivityCountRefreshType CountRefreshType; // 0x6C
		::System::UInt32 DropMultiple; // 0x70
		::System::UInt32 ActivityModuleID; // 0x74
		::RPG::Client::TextID LabelText; // 0x78
		::RPG::Client::TextID MappingInfoBannerText; // 0x88

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityCountRefreshType.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/Struct_2_69897E9810A376CB.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_645;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityFarmMultipleDropRow; }
namespace RPG::GameCore { class ActivityThemeRow; }

#define RPG_CLIENT_MULTIPLEDROPDATA_GET_ACTIVITYPANELBANNERTEXT_OFFSET UNITYSDK_OFFSET(0xC1C4D70)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_BANNERTEXT_OFFSET UNITYSDK_OFFSET(0xC1C4D40)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0xC1C4CB0)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC1C4360)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_LABELTEXT_OFFSET UNITYSDK_OFFSET(0xC1C4CE0)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_MAPPINGINFOBANNERTEXT_OFFSET UNITYSDK_OFFSET(0xC1C4DA0)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0xC1C4D10)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC1C4C90)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_THEME_OFFSET UNITYSDK_OFFSET(0xC1C4DD0)
#define RPG_CLIENT_MULTIPLEDROPDATA_HASMULTIPLEDROPTYPE_OFFSET UNITYSDK_OFFSET(0xC1C4BE0)
#define RPG_CLIENT_MULTIPLEDROPDATA_SYNCGAMEPLAYMULTIDROPINFO_OFFSET UNITYSDK_OFFSET(0xC1C4B40)
#define RPG_CLIENT_MULTIPLEDROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC1C4A30)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropData_TypeDefinitionIndex = 62005;

	class MultipleDropData : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleData* ScheduleData; // 0x10
		::RPG::GameCore::ActivityFarmMultipleDropRow* _Row; // 0x18
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x20
		::System::UInt32 Multiplier; // 0x24
		::Struct_2_69897E9810A376CB GameplayDropInfo; // 0x28
		::RPG::GameCore::ActivityCountRefreshType RefreshType; // 0x34
		::System::UInt32 MultipleDropRowID; // 0x38
		::RPG::Client::MultipleDropTimesData TimesData; // 0x3C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncGamePlayMultiDropInfo(::Class_1_D17272E82AE804C2_645* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_645*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_SYNCGAMEPLAYMULTIDROPINFO_OFFSET))(this, a1);
		}

		::System::Boolean HasMultipleDropType(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_HASMULTIPLEDROPTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_LabelText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_LABELTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_NAMETEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_BannerText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_BANNERTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_ActivityPanelBannerText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_ACTIVITYPANELBANNERTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_MappingInfoBannerText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_MAPPINGINFOBANNERTEXT_OFFSET))(this);
		}

		::RPG::GameCore::ActivityThemeRow* get_Theme()
		{
			return ((::RPG::GameCore::ActivityThemeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_THEME_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_GET_ISVALID_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityCountRefreshType.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/Struct_2_69897E9810A376CB.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_599;
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityFarmMultipleDropRow; }
namespace RPG::GameCore { class ActivityThemeRow; }

#define RPG_CLIENT_MULTIPLEDROPDATA_GET_ACTIVITYPANELBANNERTEXT_OFFSET UNITYSDK_OFFSET(0x9DAEE00)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_BANNERTEXT_OFFSET UNITYSDK_OFFSET(0x9DAEDD0)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0x9DAED40)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DAE3D0)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_LABELTEXT_OFFSET UNITYSDK_OFFSET(0x9DAED70)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_MAPPINGINFOBANNERTEXT_OFFSET UNITYSDK_OFFSET(0x9DAEE30)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0x9DAEDA0)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9DAED20)
#define RPG_CLIENT_MULTIPLEDROPDATA_GET_THEME_OFFSET UNITYSDK_OFFSET(0x9DAEE60)
#define RPG_CLIENT_MULTIPLEDROPDATA_HASMULTIPLEDROPTYPE_OFFSET UNITYSDK_OFFSET(0x9DAEC70)
#define RPG_CLIENT_MULTIPLEDROPDATA_SYNCGAMEPLAYMULTIDROPINFO_OFFSET UNITYSDK_OFFSET(0x9DAEBD0)
#define RPG_CLIENT_MULTIPLEDROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAEAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropData_TypeDefinitionIndex = 53936;

	class MultipleDropData : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleData* ScheduleData; // 0x10
		::RPG::GameCore::ActivityFarmMultipleDropRow* _Row; // 0x18
		::System::UInt32 Multiplier; // 0x20
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x24
		::RPG::Client::MultipleDropTimesData TimesData; // 0x28
		::RPG::GameCore::ActivityCountRefreshType RefreshType; // 0x30
		::Struct_2_69897E9810A376CB GameplayDropInfo; // 0x34
		::System::UInt32 MultipleDropRowID; // 0x40

		::System::Void _ctor(::System::UInt32 rowID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA__CTOR_OFFSET))(this, rowID);
		}

		::System::Void SyncGamePlayMultiDropInfo(::Class_1_FA4F4A67B1C04320_599* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_599*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_SYNCGAMEPLAYMULTIDROPINFO_OFFSET))(this, info);
		}

		::System::Boolean HasMultipleDropType(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPDATA_HASMULTIPLEDROPTYPE_OFFSET))(this, farmType);
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

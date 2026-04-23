#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_48.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumStaffData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MUSEUMUTILS_CONVERTSTATTYPETOSTUFFSTATS_OFFSET UNITYSDK_OFFSET(0xAB0FB70)
#define RPG_CLIENT_MUSEUMUTILS_CONVERTSTUFFSTATSTOSTATTYPE_OFFSET UNITYSDK_OFFSET(0xAB0FB20)
#define RPG_CLIENT_MUSEUMUTILS_GETAREAFULLSTATNUM_OFFSET UNITYSDK_OFFSET(0xAB10170)
#define RPG_CLIENT_MUSEUMUTILS_GETSTAFFSTATVALUE_OFFSET UNITYSDK_OFFSET(0xAB0FBC0)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMATLASPAGE_OFFSET UNITYSDK_OFFSET(0xAB0FED0)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xAB0FC80)
#define RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMMARKETPAGE_OFFSET UNITYSDK_OFFSET(0xAB10020)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumUtils_TypeDefinitionIndex = 61120;

	class MuseumUtils : public ::System::Object
	{
	public:
		static ::Enum_3_DB663931210BBC27_48 ConvertStuffStatsToStatType(::RPG::GameCore::StuffStats stat)
		{
			return ((::Enum_3_DB663931210BBC27_48(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_CONVERTSTUFFSTATSTOSTATTYPE_OFFSET))(stat);
		}

		static ::RPG::GameCore::StuffStats ConvertStatTypeToStuffStats(::Enum_3_DB663931210BBC27_48 stat)
		{
			return ((::RPG::GameCore::StuffStats(*)(::Enum_3_DB663931210BBC27_48))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_CONVERTSTATTYPETOSTUFFSTATS_OFFSET))(stat);
		}

		static ::System::UInt32 GetStaffStatValue(::RPG::Client::MuseumStaffData* staffData, ::RPG::GameCore::StuffStats statType)
		{
			return ((::System::UInt32(*)(::RPG::Client::MuseumStaffData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_GETSTAFFSTATVALUE_OFFSET))(staffData, statType);
		}

		static ::System::Void ShowMuseumEntrancePage(::System::Action_1<::RPG::Client::LuaUIController*>* callback, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMENTRANCEPAGE_OFFSET))(callback, args);
		}

		static ::System::Void ShowMuseumAtlasPage(::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMATLASPAGE_OFFSET))(callback);
		}

		static ::System::Void ShowMuseumMarketPage(::System::Action_1<::RPG::Client::LuaUIController*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LuaUIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_SHOWMUSEUMMARKETPAGE_OFFSET))(callback);
		}

		static ::System::Int32 GetAreaFullStatNum(::RPG::Client::MuseumAreaData* areaData, ::System::Boolean includePreview)
		{
			return ((::System::Int32(*)(::RPG::Client::MuseumAreaData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMUTILS_GETAREAFULLSTATNUM_OFFSET))(areaData, includePreview);
		}
	};
}

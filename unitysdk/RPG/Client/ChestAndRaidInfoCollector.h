#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_58.h"
#include "unitysdk/RPG/GameCore/ChestMonsterType.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_114;
class Class_1_35B19D34B208E77E_24;
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0x9385C80)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x9385D40)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0x93865A0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0x93866C0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9386580)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x93867E0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9386800)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9385D00)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET UNITYSDK_OFFSET(0x9386780)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x9386660)

namespace RPG::Client
{
	inline static constexpr unsigned int ChestAndRaidInfoCollector_TypeDefinitionIndex = 53988;

	class ChestAndRaidInfoCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* _ChestAndRaidInfoList; // 0x10
		::RPG::Client::NavMap::IMapDataSource* _MapData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChestAndRaidInfoCollector* Create(::RPG::Client::NavMap::IMapDataSource* mapData)
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET))(mapData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* get_ChestAndRaidInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowType(::Enum_3_DB663931210BBC27_58 chestType)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::Enum_3_DB663931210BBC27_58))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET))(this, chestType);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowTypeByMonsterStat(::RPG::GameCore::ChestMonsterType chestMonsterType)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::RPG::GameCore::ChestMonsterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET))(this, chestMonsterType);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_35B19D34B208E77E_24*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_35B19D34B208E77E_24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_120319518E6F6581_114*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_120319518E6F6581_114*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}
	};
}

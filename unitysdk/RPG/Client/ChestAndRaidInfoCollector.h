#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_64.h"
#include "unitysdk/RPG/GameCore/ChestMonsterType.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_93;
class Class_1_D17272E82AE804C2_1082;
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0xCBBB460)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0xCBBB520)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0xCBBC2B0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0xCBBC3D0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCBBC230)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCBBC4F0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCBBC570)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCBBB4E0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET UNITYSDK_OFFSET(0xCBBC490)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xCBBC370)

namespace RPG::Client
{
	inline static constexpr unsigned int ChestAndRaidInfoCollector_TypeDefinitionIndex = 66407;

	class ChestAndRaidInfoCollector : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* _MapData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* _ChestAndRaidInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChestAndRaidInfoCollector* Create(::RPG::Client::NavMap::IMapDataSource* a1)
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* get_ChestAndRaidInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowType(::Enum_3_DB663931210BBC27_64 a1)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::Enum_3_DB663931210BBC27_64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowTypeByMonsterStat(::RPG::GameCore::ChestMonsterType a1)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::RPG::GameCore::ChestMonsterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET))(this, a1);
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

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_1CBA230307F9C289_93*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1CBA230307F9C289_93*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_1082*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_1082*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}
	};
}

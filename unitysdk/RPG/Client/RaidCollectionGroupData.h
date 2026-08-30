#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RaidCollectionData; }
namespace RPG::GameCore { class ActivityRaidCollectionGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETALLCOLLECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x1805BC60)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1805BBE0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETCOLLECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1805BEE0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETFINISHEDCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1805C0E0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ALLCOLLECTIONIDS_OFFSET UNITYSDK_OFFSET(0x1805BA80)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1805C3A0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1805C6F0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1805C450)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1805C3E0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1805C3C0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1805C3B0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1805C3D0)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1805B890)
#define RPG_CLIENT_RAIDCOLLECTIONGROUPDATA__SAFEGETCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1805BB20)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionGroupData_TypeDefinitionIndex = 66771;

	class RaidCollectionGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRaidCollectionGroupRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RaidCollectionData*>* _CollectionDatas; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::RaidCollectionData* GetCollectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RaidCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETCOLLECTIONDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RaidCollectionData*>* GetAllCollectionDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RaidCollectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETALLCOLLECTIONDATAS_OFFSET))(this);
		}

		::System::Int32 GetCollectionIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETCOLLECTIONINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetFinishedCollectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GETFINISHEDCOLLECTIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::RaidCollectionData* _SafeGetCollectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RaidCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA__SAFEGETCOLLECTIONDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRaidCollectionGroupRow* get_Row()
		{
			return ((::RPG::GameCore::ActivityRaidCollectionGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ActivityRaidCollectionGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRaidCollectionGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AllCollectionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ALLCOLLECTIONIDS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONGROUPDATA_GET_ISFINISHED_OFFSET))(this);
		}
	};
}

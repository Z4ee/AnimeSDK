#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDCOLLECTIONUTILS_GETRAIDCOLLECTIONTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xA279340)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_GETTABDOINGGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xA277E10)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_HASNEWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA274B70)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONLASTINGROUP_OFFSET UNITYSDK_OFFSET(0xA279590)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA275C10)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPNEW_OFFSET UNITYSDK_OFFSET(0xA279890)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA276AD0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISTABUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA2794F0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_RECORDGROUPSEEN_OFFSET UNITYSDK_OFFSET(0xA279650)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionUtils_TypeDefinitionIndex = 54326;

	class RaidCollectionUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetRaidCollectionTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_GETRAIDCOLLECTIONTYPECOUNT_OFFSET))();
		}

		static ::System::Boolean IsTabUnlocked(::System::UInt32 tabID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISTABUNLOCKED_OFFSET))(tabID);
		}

		static ::System::Boolean IsGroupUnlocked(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPUNLOCKED_OFFSET))(groupID);
		}

		static ::System::Boolean IsCollectionUnlocked(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONUNLOCKED_OFFSET))(id);
		}

		static ::System::Boolean IsCollectionLastInGroup(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONLASTINGROUP_OFFSET))(id);
		}

		static ::System::Void RecordGroupSeen(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_RECORDGROUPSEEN_OFFSET))(groupID);
		}

		static ::System::Boolean IsGroupNew(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPNEW_OFFSET))(id);
		}

		static ::System::Boolean HasNewCollection(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_HASNEWCOLLECTION_OFFSET))(type);
		}

		static ::System::Int32 GetTabDoingGroupIndex(::System::UInt32 tabID)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_GETTABDOINGGROUPINDEX_OFFSET))(tabID);
		}
	};
}

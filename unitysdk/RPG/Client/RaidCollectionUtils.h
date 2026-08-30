#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RAIDCOLLECTIONUTILS_GETRAIDCOLLECTIONTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xDDF66E0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_GETTABDOINGGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xDDF4EE0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_HASNEWCOLLECTION_OFFSET UNITYSDK_OFFSET(0xDDF1D90)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONLASTINGROUP_OFFSET UNITYSDK_OFFSET(0xDDF68E0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDDF2B80)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPNEW_OFFSET UNITYSDK_OFFSET(0xDDF6BD0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDDF3AE0)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_ISTABUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDDF6850)
#define RPG_CLIENT_RAIDCOLLECTIONUTILS_RECORDGROUPSEEN_OFFSET UNITYSDK_OFFSET(0xDDF6990)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionUtils_TypeDefinitionIndex = 66773;

	class RaidCollectionUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetRaidCollectionTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_GETRAIDCOLLECTIONTYPECOUNT_OFFSET))();
		}

		static ::System::Boolean IsTabUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISTABUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsGroupUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsCollectionUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsCollectionLastInGroup(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISCOLLECTIONLASTINGROUP_OFFSET))(a1);
		}

		static ::System::Void RecordGroupSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_RECORDGROUPSEEN_OFFSET))(a1);
		}

		static ::System::Boolean IsGroupNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_ISGROUPNEW_OFFSET))(a1);
		}

		static ::System::Boolean HasNewCollection(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_HASNEWCOLLECTION_OFFSET))(a1);
		}

		static ::System::Int32 GetTabDoingGroupIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONUTILS_GETTABDOINGGROUPINDEX_OFFSET))(a1);
		}
	};
}

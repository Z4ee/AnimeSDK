#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_41;
namespace RPG::Client { class RogueTournPersonaTalentGroupData; }
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_CANUNLOCKNEXTTALENT_OFFSET UNITYSDK_OFFSET(0xB102840)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB101AE0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETALLTALENTGROUPS_OFFSET UNITYSDK_OFFSET(0xB1022A0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETLATESTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0xB1025D0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETNEXTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0xB1024B0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTGROUP_OFFSET UNITYSDK_OFFSET(0xB1022E0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTSOFGROUP_OFFSET UNITYSDK_OFFSET(0xB1023D0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xB102700)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB100FF0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB101C60)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB100EC0)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__GENERATEORDEREDTALENTLIST_OFFSET UNITYSDK_OFFSET(0xB101840)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentInfo_TypeDefinitionIndex = 62454;

	class RogueTournPersonaTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* _OrderedTalentNodes; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>* _TalentGroups; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*>* _GroupID2TalentNodes; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournPersonaTalentNodeData*>* _TalentID2TalentNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_7BF8FDF00F218876_41* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BF8FDF00F218876_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>* GetAllTalentGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETALLTALENTGROUPS_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaTalentGroupData* GetTalentGroup(::System::UInt32 groupID)
		{
			return ((::RPG::Client::RogueTournPersonaTalentGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTGROUP_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* GetTalentsOfGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTSOFGROUP_OFFSET))(this, groupID);
		}

		::RPG::Client::RogueTournPersonaTalentNodeData* GetNextUnlockTalent()
		{
			return ((::RPG::Client::RogueTournPersonaTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETNEXTUNLOCKTALENT_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaTalentNodeData* GetLatestUnlockTalent()
		{
			return ((::RPG::Client::RogueTournPersonaTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETLATESTUNLOCKTALENT_OFFSET))(this);
		}

		::System::Void GetTalentUnlockedProgressInfo(::System::UInt32& unlockedCnt, ::System::UInt32& totalCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET))(this, unlockedCnt, totalCnt);
		}

		::System::Boolean CanUnlockNextTalent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_CANUNLOCKNEXTTALENT_OFFSET))(this);
		}

		::System::Void _GenerateOrderedTalentList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__GENERATEORDEREDTALENTLIST_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D8CC61AD64FF9091_36;
namespace RPG::Client { class RogueTournPersonaTalentGroupData; }
namespace RPG::Client { class RogueTournPersonaTalentNodeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_CANUNLOCKNEXTTALENT_OFFSET UNITYSDK_OFFSET(0x1AA74F80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA4E110)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETALLTALENTGROUPS_OFFSET UNITYSDK_OFFSET(0x1AA74A40)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETLATESTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x1AA74D20)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETNEXTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x1AA74C30)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTGROUP_OFFSET UNITYSDK_OFFSET(0x1AA74A80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTSOFGROUP_OFFSET UNITYSDK_OFFSET(0x1AA74B80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x1AA74E60)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AA4CD80)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1AA53070)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4C970)
#define RPG_CLIENT_ROGUETOURNPERSONATALENTINFO__GENERATEORDEREDTALENTLIST_OFFSET UNITYSDK_OFFSET(0x1AA745E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaTalentInfo_TypeDefinitionIndex = 64754;

	class RogueTournPersonaTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>* _TalentGroups; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournPersonaTalentNodeData*>* _TalentID2TalentNode; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*>* _GroupID2TalentNodes; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* _OrderedTalentNodes; // 0x28

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

		::System::Void Sync(::Class_1_D8CC61AD64FF9091_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>* GetAllTalentGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETALLTALENTGROUPS_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaTalentGroupData* GetTalentGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaTalentGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>* GetTalentsOfGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournPersonaTalentNodeData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTSOFGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaTalentNodeData* GetNextUnlockTalent()
		{
			return ((::RPG::Client::RogueTournPersonaTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETNEXTUNLOCKTALENT_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaTalentNodeData* GetLatestUnlockTalent()
		{
			return ((::RPG::Client::RogueTournPersonaTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETLATESTUNLOCKTALENT_OFFSET))(this);
		}

		::System::Void GetTalentUnlockedProgressInfo(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONATALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET))(this, a1, a2);
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

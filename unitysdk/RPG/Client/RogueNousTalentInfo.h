#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_12;
class Class_1_D8CC61AD64FF9091_9;
namespace RPG::Client { class RogueTalentDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19828AB0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_GET_AVAILABLETALENTIDS_OFFSET UNITYSDK_OFFSET(0x19829890)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_GET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0x19829870)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x19828850)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SET_AVAILABLETALENTIDS_OFFSET UNITYSDK_OFFSET(0x198298A0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SET_TALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0x19829880)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_1_OFFSET UNITYSDK_OFFSET(0x19828BC0)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_OFFSET UNITYSDK_OFFSET(0x19828B60)
#define RPG_CLIENT_ROGUENOUSTALENTINFO_UPDATEAVAILABLETALENTINFO_OFFSET UNITYSDK_OFFSET(0x19829380)
#define RPG_CLIENT_ROGUENOUSTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19828840)
#define RPG_CLIENT_ROGUENOUSTALENTINFO__GETTALENTDATAITEM_OFFSET UNITYSDK_OFFSET(0x19829040)
#define RPG_CLIENT_ROGUENOUSTALENTINFO__INITROGUETALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0x198288A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousTalentInfo_TypeDefinitionIndex = 64488;

	class RogueNousTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableTalentIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* _TalentDataItems_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRogueNousTalentInfo(::Class_1_D8CC61AD64FF9091_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_OFFSET))(this, a1);
		}

		::System::Void SyncRogueNousTalentInfo_1(::Class_1_0A99AF1699F7F17E_12* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_12*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SYNCROGUENOUSTALENTINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAvailableTalentInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_UPDATEAVAILABLETALENTINFO_OFFSET))(this);
		}

		::System::Void _InitRogueTalentDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO__INITROGUETALENTDATAITEMS_OFFSET))(this);
		}

		::RPG::Client::RogueTalentDataItem* _GetTalentDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO__GETTALENTDATAITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* get_TalentDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_GET_TALENTDATAITEMS_OFFSET))(this);
		}

		::System::Void set_TalentDataItems(::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SET_TALENTDATAITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableTalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_GET_AVAILABLETALENTIDS_OFFSET))(this);
		}

		::System::Void set_AvailableTalentIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSTALENTINFO_SET_AVAILABLETALENTIDS_OFFSET))(this, a1);
		}
	};
}

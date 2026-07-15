#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightSeasonTraitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETOWITHOUTCHECKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A5FBE70)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1A5FBDF0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETALLQUESTS_OFFSET UNITYSDK_OFFSET(0x1A5FC620)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETQUESTS_OFFSET UNITYSDK_OFFSET(0x1A5FBEE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETSTANDARDQUESTS_OFFSET UNITYSDK_OFFSET(0x1A5FC280)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ANYFINISHED_OFFSET UNITYSDK_OFFSET(0x1A5FD280)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_HAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5FD330)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A5FD2A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_QUESTS_OFFSET UNITYSDK_OFFSET(0x1A5FC040)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_RELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5FD2E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_STANDARDQUESTS_OFFSET UNITYSDK_OFFSET(0x1A5FC3E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1A5FD2C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITICON_OFFSET UNITYSDK_OFFSET(0x1A5FD1B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITNAME_OFFSET UNITYSDK_OFFSET(0x1A5FD090)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_REQUESTTAKEQUESTREWARDS_OFFSET UNITYSDK_OFFSET(0x1A5FC7E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ANYFINISHED_OFFSET UNITYSDK_OFFSET(0x1A5FD290)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A5FD2B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1A5FD2D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1A5FCD30)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FBCC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETHAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5FCB80)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5FC9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge_TypeDefinitionIndex = 62509;

	class GridFightTraitChallenge : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightSeasonTraitRow* _Row; // 0x10
		::RPG::Client::GridFightTraitConfig* _TraitConfig_k__BackingField; // 0x18
		::System::UInt32 _SortPriority; // 0x20
		::System::Boolean _IsCompleted_k__BackingField; // 0x24
		::System::Boolean _AnyFinished_k__BackingField; // 0x25

		::System::Void _ctor(::RPG::GameCore::GridFightSeasonTraitRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSeasonTraitRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareToWithoutCheckCompleted(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETOWITHOUTCHECKCOMPLETED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetStandardQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETSTANDARDQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetAllQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETALLQUESTS_OFFSET))(this);
		}

		::System::Void RequestTakeQuestRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_REQUESTTAKEQUESTREWARDS_OFFSET))(this);
		}

		::System::Int32 _GetRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetHaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETHAVEGOTTENRELICCOUNT_OFFSET))(this);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_UPDATESTATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITNAME_OFFSET))(this);
		}

		::System::String* get_TraitIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITICON_OFFSET))(this);
		}

		::System::Boolean get_AnyFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ANYFINISHED_OFFSET))(this);
		}

		::System::Void set_AnyFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ANYFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsCompleted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ISCOMPLETED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITCONFIG_OFFSET))(this);
		}

		::System::Void set_TraitConfig(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_TRAITCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>* get_Quests()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_QUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>* get_StandardQuests()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_STANDARDQUESTS_OFFSET))(this);
		}

		::System::Int32 get_RelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_RELICCOUNT_OFFSET))(this);
		}

		::System::Int32 get_HaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_HAVEGOTTENRELICCOUNT_OFFSET))(this);
		}
	};
}

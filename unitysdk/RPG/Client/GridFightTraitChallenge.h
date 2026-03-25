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

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETOWITHOUTCHECKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x98A5660)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x98CB820)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETALLQUESTS_OFFSET UNITYSDK_OFFSET(0x98A3940)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETQUESTS_OFFSET UNITYSDK_OFFSET(0x98CBAD0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETSTANDARDQUESTS_OFFSET UNITYSDK_OFFSET(0x98CBB90)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ANYFINISHED_OFFSET UNITYSDK_OFFSET(0x98A4B50)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_HAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98A5530)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x98CB8C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_QUESTS_OFFSET UNITYSDK_OFFSET(0x98A45E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_RELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98A53D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_STANDARDQUESTS_OFFSET UNITYSDK_OFFSET(0x98CBC50)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x98CC370)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITICON_OFFSET UNITYSDK_OFFSET(0x98CC340)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITNAME_OFFSET UNITYSDK_OFFSET(0x98CC310)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_REQUESTTAKEQUESTREWARDS_OFFSET UNITYSDK_OFFSET(0x98CBE50)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x98CC380)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x98A33A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETHAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98CC1A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x98CC030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge_TypeDefinitionIndex = 53115;

	class GridFightTraitChallenge : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightSeasonTraitRow* _Row; // 0x10
		::RPG::Client::GridFightTraitConfig* _TraitConfig_k__BackingField; // 0x18
		::System::UInt32 _SortPriority; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightSeasonTraitRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSeasonTraitRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__CTOR_OFFSET))(this, row);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightTraitChallenge* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareToWithoutCheckCompleted(::RPG::Client::GridFightTraitChallenge* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETOWITHOUTCHECKCOMPLETED_OFFSET))(this, other);
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

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfig* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITCONFIG_OFFSET))(this);
		}

		::System::Void set_TraitConfig(::RPG::Client::GridFightTraitConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_TRAITCONFIG_OFFSET))(this, value);
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

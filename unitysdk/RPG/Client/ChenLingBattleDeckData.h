#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDINDEXLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x934C810)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPEWITHDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x934C530)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPE_OFFSET UNITYSDK_OFFSET(0x934C360)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETDECKDESC_OFFSET UNITYSDK_OFFSET(0x934C270)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x934C070)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ACTIVITYPANELCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934CD00)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ACTIVITYPANELSOLDIELIST_OFFSET UNITYSDK_OFFSET(0x934CD40)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x934CE80)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934CCD0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x934CD20)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DECKICONPATH_OFFSET UNITYSDK_OFFSET(0x934CEE0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x934CE70)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DISPLAYCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934CCF0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DISPLAYCARDLIST_OFFSET UNITYSDK_OFFSET(0x934CD30)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_EFFECTIDS_OFFSET UNITYSDK_OFFSET(0x934CEA0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_GUIDEGROUPID_OFFSET UNITYSDK_OFFSET(0x934CED0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x934CE90)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_INITIALCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934CCE0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_INITIALCARDLIST_OFFSET UNITYSDK_OFFSET(0x934CD10)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ISSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x934CD60)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x934CD50)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x934CE60)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_RELATEDCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934CEC0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_RELATEDCARDIDS_OFFSET UNITYSDK_OFFSET(0x934CEB0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x934BB40)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_TRYGETINDEXBYCARDCONFIG_OFFSET UNITYSDK_OFFSET(0x934CBE0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x934B7A0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITACTIVITYPANELCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934BF90)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITALLCARDCONFIGSTOINDEX_OFFSET UNITYSDK_OFFSET(0x934BC70)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITALLCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934BB90)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITDISPLAYCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934BEB0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITIALIZECARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934BAD0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITINITIALCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x934BDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckData_TypeDefinitionIndex = 49825;

	class ChenLingBattleDeckData : public ::System::Object
	{
	public:
		// static const ::System::Int32 DEFAULT_CARD_INDEX = 0xFFFFFFFF; // 0x0
		::System::String* _DeckIconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _DisplayCardList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _DisplayCardConfigs; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32>* _AllCardConfigToIndex; // 0x28
		::Il2CppArray<::System::UInt32>* _InitialCardList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _AllCardConfigs; // 0x38
		::System::String* _IconPath_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _ActivityPanelCardConfigs; // 0x48
		::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* _RelatedCardConfigs_k__BackingField; // 0x50
		::Il2CppArray<::System::UInt32>* _ActivityPanelSoldieList_k__BackingField; // 0x58
		::Il2CppArray<::System::UInt32>* _CardList_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _InitialCardConfigs; // 0x68
		::Il2CppArray<::System::UInt32>* _EffectIDs_k__BackingField; // 0x70
		::Il2CppArray<::System::UInt32>* _RelatedCardIDs_k__BackingField; // 0x78
		::RPG::Client::TextID _BGDesc_k__BackingField; // 0x80
		::System::UInt32 _GuideGroupID_k__BackingField; // 0x90
		::RPG::Client::TextID _Name_k__BackingField; // 0x98
		::RPG::Client::TextID _Desc_k__BackingField; // 0xA8
		::System::UInt32 ID; // 0xB8
		::System::Boolean _IsUnlocked; // 0xBC

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void SetUnlockState(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_SETUNLOCKSTATE_OFFSET))(this, isUnlocked);
		}

		::System::Void _InitializeCardConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITIALIZECARDCONFIGS_OFFSET))(this);
		}

		::System::Void _InitAllCardConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITALLCARDCONFIGS_OFFSET))(this);
		}

		::System::Void _InitAllCardConfigsToIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITALLCARDCONFIGSTOINDEX_OFFSET))(this);
		}

		::System::Void _InitInitialCardConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITINITIALCARDCONFIGS_OFFSET))(this);
		}

		::System::Void _InitDisplayCardConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITDISPLAYCARDCONFIGS_OFFSET))(this);
		}

		::System::Void _InitActivityPanelCardConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITACTIVITYPANELCARDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETEFFECTPARAMS_OFFSET))(this);
		}

		::System::String* GetDeckDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETDECKDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* GetCardsByType(::RPG::GameCore::ChenLingCardType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* GetCardsByTypeWithDisplayOnly(::RPG::GameCore::ChenLingCardType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPEWITHDISPLAYONLY_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCardIndexListByType(::RPG::GameCore::ChenLingCardType type)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDINDEXLISTBYTYPE_OFFSET))(this, type);
		}

		::System::Int32 TryGetIndexByCardConfig(::RPG::Client::ChenLingBattle::CardConfig* cardConfig)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_TRYGETINDEXBYCARDCONFIG_OFFSET))(this, cardConfig);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_CardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_CARDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_InitialCardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_INITIALCARDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_DisplayCardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DISPLAYCARDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_ActivityPanelCardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ACTIVITYPANELCARDCONFIGS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_InitialCardList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_INITIALCARDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CardList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_CARDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DisplayCardList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DISPLAYCARDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ActivityPanelSoldieList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ACTIVITYPANELSOLDIELIST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsSeenUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ISSEENUNLOCK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_EFFECTIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RelatedCardIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_RELATEDCARDIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* get_RelatedCardConfigs()
		{
			return ((::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_RELATEDCARDCONFIGS_OFFSET))(this);
		}

		::System::UInt32 get_GuideGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_GUIDEGROUPID_OFFSET))(this);
		}

		::System::String* get_DeckIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DECKICONPATH_OFFSET))(this);
		}
	};
}

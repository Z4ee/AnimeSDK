#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDINDEXLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1CC3DAD0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPEWITHDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x1CC3D710)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1CC3D4D0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETDECKDESC_OFFSET UNITYSDK_OFFSET(0x1CC3D3B0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x1CC3D0E0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ACTIVITYPANELCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3DF80)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ACTIVITYPANELSOLDIELIST_OFFSET UNITYSDK_OFFSET(0x1CC3DFF0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1CC3E170)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3D6D0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1CC3DFD0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DECKICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC3E1D0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CC3E160)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DISPLAYCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3DA80)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_DISPLAYCARDLIST_OFFSET UNITYSDK_OFFSET(0x1CC3DFE0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_EFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1CC3E190)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_GUIDEGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC3E1C0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC3E180)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_INITIALCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3DF40)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_INITIALCARDLIST_OFFSET UNITYSDK_OFFSET(0x1CC3DFC0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ISSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CC3E050)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CC3E000)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC3E150)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_RELATEDCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3E1B0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_GET_RELATEDCARDIDS_OFFSET UNITYSDK_OFFSET(0x1CC3E1A0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1CC3CA60)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA_TRYGETINDEXBYCARDCONFIG_OFFSET UNITYSDK_OFFSET(0x1CC3DE60)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3C700)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITACTIVITYPANELCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3CFB0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITALLCARDCONFIGSTOINDEX_OFFSET UNITYSDK_OFFSET(0x1CC3CBE0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITALLCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3CAB0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITDISPLAYCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3CE80)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITIALIZECARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3C9F0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA__INITINITIALCARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CC3CD50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckData_TypeDefinitionIndex = 61517;

	class ChenLingBattleDeckData : public ::System::Object
	{
	public:
		// static const ::System::Int32 DEFAULT_CARD_INDEX = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::RPG::Client::ChenLingBattle::CardConfig*>* _RelatedCardConfigs_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _CardList_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _ActivityPanelSoldieList_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _InitialCardList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _ActivityPanelCardConfigs; // 0x30
		::System::String* _IconPath_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _DisplayCardConfigs; // 0x40
		::Il2CppArray<::System::UInt32>* _EffectIDs_k__BackingField; // 0x48
		::Il2CppArray<::System::UInt32>* _RelatedCardIDs_k__BackingField; // 0x50
		::Il2CppArray<::System::UInt32>* _DisplayCardList_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32>* _AllCardConfigToIndex; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _InitialCardConfigs; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _AllCardConfigs; // 0x70
		::System::String* _DeckIconPath_k__BackingField; // 0x78
		::System::Boolean _IsUnlocked; // 0x80
		::System::UInt32 ID; // 0x84
		::System::UInt32 _GuideGroupID_k__BackingField; // 0x88
		::RPG::Client::TextID _Name_k__BackingField; // 0x90
		::RPG::Client::TextID _BGDesc_k__BackingField; // 0xA0
		::RPG::Client::TextID _Desc_k__BackingField; // 0xB0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetUnlockState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_SETUNLOCKSTATE_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* GetCardsByType(::RPG::GameCore::ChenLingCardType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* GetCardsByTypeWithDisplayOnly(::RPG::GameCore::ChenLingCardType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDSBYTYPEWITHDISPLAYONLY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCardIndexListByType(::RPG::GameCore::ChenLingCardType a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::ChenLingCardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_GETCARDINDEXLISTBYTYPE_OFFSET))(this, a1);
		}

		::System::Int32 TryGetIndexByCardConfig(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA_TRYGETINDEXBYCARDCONFIG_OFFSET))(this, a1);
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

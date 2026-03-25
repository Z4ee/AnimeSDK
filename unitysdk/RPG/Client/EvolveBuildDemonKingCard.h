#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_24.h"
#include "unitysdk/RPG/Client/DemonKingCardGuideType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildModule; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEINBATTLE_OFFSET UNITYSDK_OFFSET(0x962F880)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEOUTSIDEBATTLE_OFFSET UNITYSDK_OFFSET(0x962F5C0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATE_OFFSET UNITYSDK_OFFSET(0x962F7E0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_DOSHOWUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x96304E0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GETCANSHOWUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x962FCB0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GETTUTORIALANDTUTORIALUNLOCKID_OFFSET UNITYSDK_OFFSET(0x9630210)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_CARDDATA_OFFSET UNITYSDK_OFFSET(0x9630880)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_ISFULLCARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9630BE0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9630C80)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0x9630860)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_UNLOCKCHIPINDEX_OFFSET UNITYSDK_OFFSET(0x9630440)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET__CARDID_OFFSET UNITYSDK_OFFSET(0x9630920)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x962FFE0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x9630170)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SETSHOWNUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x9630740)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0x9630870)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_TRYSHOWUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x962FE30)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x962FA10)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__GETNEXTSTAGEUNLOCKQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x962FD00)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x96307A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildDemonKingCard_TypeDefinitionIndex = 51876;

	class EvolveBuildDemonKingCard : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _AllChipIndex = 0x5; // 0x0
		::RPG::Client::EvolveBuildCard* _CardData; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::DemonKingCardGuideType, ::Il2CppArray<::System::UInt32>*>* _TutorialUnlockIDs; // 0x18
		::System::UInt32 _StageMergedID_k__BackingField; // 0x20
		::RPG::Client::DemonKingCardGuideType _GuideType; // 0x24
		::System::Boolean _IsCreatedOutsideBattle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildDemonKingCard* CreateOutsideBattle()
		{
			return ((::RPG::Client::EvolveBuildDemonKingCard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEOUTSIDEBATTLE_OFFSET))();
		}

		static ::RPG::Client::EvolveBuildDemonKingCard* CreateInBattle(::System::Boolean isLose)
		{
			return ((::RPG::Client::EvolveBuildDemonKingCard*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEINBATTLE_OFFSET))(isLose);
		}

		static ::RPG::Client::EvolveBuildDemonKingCard* Create(::System::UInt32 stageMergedID, ::RPG::Client::DemonKingCardGuideType guideType, ::System::Boolean IsCreatedOutsideBattle)
		{
			return ((::RPG::Client::EvolveBuildDemonKingCard*(*)(::System::UInt32, ::RPG::Client::DemonKingCardGuideType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATE_OFFSET))(stageMergedID, guideType, IsCreatedOutsideBattle);
		}

		::System::Boolean GetCanShowUnlockChip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GETCANSHOWUNLOCKCHIP_OFFSET))(this);
		}

		::System::Boolean TryShowUnlockChip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_TRYSHOWUNLOCKCHIP_OFFSET))(this);
		}

		::System::Void OpenResultPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_OPENRESULTPAGE_OFFSET))(this);
		}

		::System::String* GetTutorialAndTutorialUnlockID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GETTUTORIALANDTUTORIALUNLOCKID_OFFSET))(this);
		}

		::System::Void DoShowUnlockChip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_DOSHOWUNLOCKCHIP_OFFSET))(this);
		}

		::System::Void SetShownUnlockChip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SETSHOWNUNLOCKCHIP_OFFSET))(this);
		}

		::System::Void _OnQuestUpdated(::System::Object* questIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__ONQUESTUPDATED_OFFSET))(this, questIDs);
		}

		::Enum_3_4608E37A1B3D374A_24 _GetNextStageUnlockQuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_24(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__GETNEXTSTAGEUNLOCKQUESTSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_StageMergedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_STAGEMERGEDID_OFFSET))(this);
		}

		::System::Void set_StageMergedID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SET_STAGEMERGEDID_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildCard* get_CardData()
		{
			return ((::RPG::Client::EvolveBuildCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_CARDDATA_OFFSET))(this);
		}

		::System::Int32 get_UnlockChipIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_UNLOCKCHIPINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsFullCardUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_ISFULLCARDUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get__CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET__CARDID_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET__MODULE_OFFSET))(this);
		}
	};
}

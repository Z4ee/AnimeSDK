#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/RPG/Client/DemonKingCardGuideType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildModule; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEINBATTLE_OFFSET UNITYSDK_OFFSET(0xCED2B70)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEOUTSIDEBATTLE_OFFSET UNITYSDK_OFFSET(0xCED27D0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATE_OFFSET UNITYSDK_OFFSET(0xCED2AD0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_DOSHOWUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0xCED3780)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GETCANSHOWUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0xCED2FA0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GETTUTORIALANDTUTORIALUNLOCKID_OFFSET UNITYSDK_OFFSET(0xCED3550)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_CARDDATA_OFFSET UNITYSDK_OFFSET(0xCED3B40)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_ISFULLCARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCED3E70)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCED3F00)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0xCED3B20)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_UNLOCKCHIPINDEX_OFFSET UNITYSDK_OFFSET(0xCED3720)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET__CARDID_OFFSET UNITYSDK_OFFSET(0xCED3BE0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xCED3240)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xCED3420)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SETSHOWNUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0xCED39D0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0xCED3B30)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_TRYSHOWUNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0xCED30C0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__CTOR_OFFSET UNITYSDK_OFFSET(0xCED2D00)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__GETNEXTSTAGEUNLOCKQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xCED2FF0)
#define RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xCED3A30)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildDemonKingCard_TypeDefinitionIndex = 63892;

	class EvolveBuildDemonKingCard : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _AllChipIndex = 0x5; // 0x0
		::RPG::Client::EvolveBuildCard* _CardData; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::DemonKingCardGuideType, ::Il2CppArray<::System::UInt32>*>* _TutorialUnlockIDs; // 0x18
		::System::Boolean _IsCreatedOutsideBattle; // 0x20
		::RPG::Client::DemonKingCardGuideType _GuideType; // 0x24
		::System::UInt32 _StageMergedID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildDemonKingCard* CreateOutsideBattle()
		{
			return ((::RPG::Client::EvolveBuildDemonKingCard*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEOUTSIDEBATTLE_OFFSET))();
		}

		static ::RPG::Client::EvolveBuildDemonKingCard* CreateInBattle(::System::Boolean a1)
		{
			return ((::RPG::Client::EvolveBuildDemonKingCard*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATEINBATTLE_OFFSET))(a1);
		}

		static ::RPG::Client::EvolveBuildDemonKingCard* Create(::System::UInt32 a1, ::RPG::Client::DemonKingCardGuideType a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::EvolveBuildDemonKingCard*(*)(::System::UInt32, ::RPG::Client::DemonKingCardGuideType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_CREATE_OFFSET))(a1, a2, a3);
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

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__ONQUESTUPDATED_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_25 _GetNextStageUnlockQuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_25(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD__GETNEXTSTAGEUNLOCKQUESTSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_StageMergedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_GET_STAGEMERGEDID_OFFSET))(this);
		}

		::System::Void set_StageMergedID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDDEMONKINGCARD_SET_STAGEMERGEDID_OFFSET))(this, a1);
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

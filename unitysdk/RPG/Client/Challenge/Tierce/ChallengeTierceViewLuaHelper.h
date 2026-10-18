#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5EBDCA5E10FB9D5A;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceBattlePauseViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceEntranceViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRewardViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CHECKCHALLENGETIERCESPECIALREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0xC96B5E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATEMAZEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96A880)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATEREWARDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96A4C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATESTAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96A5D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATETEAMEDITVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96A760)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_GETENTRANCEUNLOCKBLOCKSECONDS_OFFSET UNITYSDK_OFFSET(0xC96B6C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_GETMODESWITCHCOOLDOWNSECONDS_OFFSET UNITYSDK_OFFSET(0xC96B4C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_HANDLEBATTLELOSEEXIT_OFFSET UNITYSDK_OFFSET(0xC96B7E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_HANDLEBATTLELOSERESTART_OFFSET UNITYSDK_OFFSET(0xC96BC30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_OPENENTRANCEUNLOCKWINDOW_OFFSET UNITYSDK_OFFSET(0xC96B630)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_OPENSTAGESELECTWINDOW_OFFSET UNITYSDK_OFFSET(0xC96A830)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYCREATEBADGENOTICEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96B2C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYCREATEBATTLEPAUSEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96B080)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYCREATEENTRANCEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC96A410)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYGETCURRENTLYENGAGEDGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xC96AC50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYGETCURRENTLYENGAGEDMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xC96AC90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYGETCURRENTLYENGAGEDSTORYFEVERMAZEBUFFIDS_OFFSET UNITYSDK_OFFSET(0xC96AEE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC96B960)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER__SETUPAUTOSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0xC96BAD0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceViewLuaHelper_TypeDefinitionIndex = 81521;

	class ChallengeTierceViewLuaHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* TryCreateEntranceViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYCREATEENTRANCEVIEWMODEL_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* CreateRewardViewModel(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*(*)(::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATEREWARDVIEWMODEL_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* CreateStageViewModel(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATESTAGEVIEWMODEL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel* CreateTeamEditViewModel(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel*(*)(::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATETEAMEDITVIEWMODEL_OFFSET))(a1);
		}

		static ::System::Void OpenStageSelectWindow(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_OPENSTAGESELECTWINDOW_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel* CreateMazeViewModel()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CREATEMAZEVIEWMODEL_OFFSET))();
		}

		static ::System::Nullable_1<::RPG::GameCore::ChallengeGroupType> TryGetCurrentlyEngagedGroupType()
		{
			return ((::System::Nullable_1<::RPG::GameCore::ChallengeGroupType>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYGETCURRENTLYENGAGEDGROUPTYPE_OFFSET))();
		}

		static ::System::Nullable_1<::System::UInt32> TryGetCurrentlyEngagedMazeBuffID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYGETCURRENTLYENGAGEDMAZEBUFFID_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* TryGetCurrentlyEngagedStoryFeverMazeBuffIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYGETCURRENTLYENGAGEDSTORYFEVERMAZEBUFFIDS_OFFSET))();
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* TryCreateBattlePauseViewModel()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYCREATEBATTLEPAUSEVIEWMODEL_OFFSET))();
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel* TryCreateBadgeNoticeViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_TRYCREATEBADGENOTICEVIEWMODEL_OFFSET))(a1);
		}

		static ::System::Single GetModeSwitchCooldownSeconds()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_GETMODESWITCHCOOLDOWNSECONDS_OFFSET))();
		}

		static ::System::Boolean CheckChallengeTierceSpecialRewardHasSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_CHECKCHALLENGETIERCESPECIALREWARDHASSEEN_OFFSET))();
		}

		static ::System::Void OpenEntranceUnlockWindow(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_OPENENTRANCEUNLOCKWINDOW_OFFSET))(a1);
		}

		static ::System::Single GetEntranceUnlockBlockSeconds()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_GETENTRANCEUNLOCKBLOCKSECONDS_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* HandleBattleLoseExit()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_HANDLEBATTLELOSEEXIT_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* HandleBattleLoseRestart()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER_HANDLEBATTLELOSERESTART_OFFSET))();
		}

		static ::System::Boolean _IsExpired(::Class_1_5EBDCA5E10FB9D5A* a1)
		{
			return ((::System::Boolean(*)(::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER__ISEXPIRED_OFFSET))(a1);
		}

		static ::System::Void _SetupAutoShowEntrance(::Class_1_5EBDCA5E10FB9D5A* a1)
		{
			return ((::System::Void(*)(::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEVIEWLUAHELPER__SETUPAUTOSHOWENTRANCE_OFFSET))(a1);
		}
	};
}

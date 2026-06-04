#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGameFlow; }
namespace System { class Action; }

#define RPG_CLIENT_CHALLENGEPEAKUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xB577CD0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_GETFLOW_OFFSET UNITYSDK_OFFSET(0xB5748F0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISBATTLETARGETFINISH_OFFSET UNITYSDK_OFFSET(0xB577F60)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISCHALLENGEPEAKUNLOCK_OFFSET UNITYSDK_OFFSET(0xB5778A0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISINGAME_OFFSET UNITYSDK_OFFSET(0xB577860)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0xB577E40)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISTUTORIALMAINMISSIONSTART_OFFSET UNITYSDK_OFFSET(0xB577930)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_STARTGAME_OFFSET UNITYSDK_OFFSET(0xB577A10)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xB577B30)
#define RPG_CLIENT_CHALLENGEPEAKUTILS__DOSTARTGAME_OFFSET UNITYSDK_OFFSET(0xB577C30)
#define RPG_CLIENT_CHALLENGEPEAKUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0xB577D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakUtils_TypeDefinitionIndex = 59141;

	class ChallengePeakUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsInGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISINGAME_OFFSET))();
		}

		static ::RPG::Client::ChallengePeakGameFlow* GetFlow()
		{
			return ((::RPG::Client::ChallengePeakGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_GETFLOW_OFFSET))();
		}

		static ::System::Boolean IsChallengePeakUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISCHALLENGEPEAKUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsTutorialMainMissionStart()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISTUTORIALMAINMISSIONSTART_OFFSET))();
		}

		static ::System::Void StartGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_STARTGAME_OFFSET))();
		}

		static ::System::Void _DoStartGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS__DOSTARTGAME_OFFSET))();
		}

		static ::System::Void TransferToLauncher(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_TRANSFERTOLAUNCHER_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Void _GetLauncherTransferParam(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsBattleTargetFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISBATTLETARGETFINISH_OFFSET))(a1);
		}
	};
}

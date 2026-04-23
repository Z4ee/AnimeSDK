#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGameFlow; }
namespace System { class Action; }

#define RPG_CLIENT_CHALLENGEPEAKUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x9F5ED40)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_GETFLOW_OFFSET UNITYSDK_OFFSET(0x9F5E7B0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISBATTLETARGETFINISH_OFFSET UNITYSDK_OFFSET(0x9F5EFE0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISCHALLENGEPEAKUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F5E910)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISINGAME_OFFSET UNITYSDK_OFFSET(0x9F5E770)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0x9F5EEB0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_ISTUTORIALMAINMISSIONSTART_OFFSET UNITYSDK_OFFSET(0x9F5E9A0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_STARTGAME_OFFSET UNITYSDK_OFFSET(0x9F5EAD0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0x9F5EBC0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS__DOSTARTGAME_OFFSET UNITYSDK_OFFSET(0x9F5ECA0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0x9F5EDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakUtils_TypeDefinitionIndex = 58211;

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

		static ::System::Void TransferToLauncher(::System::Action* preTeleportCallback, ::System::Action* afterTeleportCallback)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_TRANSFERTOLAUNCHER_OFFSET))(preTeleportCallback, afterTeleportCallback);
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Void _GetLauncherTransferParam(::System::UInt32& entranceID, ::System::UInt32& mappingInfoID)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET))(entranceID, mappingInfoID);
		}

		static ::System::Boolean IsBattleTargetFinish(::System::UInt32 targetID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS_ISBATTLETARGETFINISH_OFFSET))(targetID);
		}
	};
}

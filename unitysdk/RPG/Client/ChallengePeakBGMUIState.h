#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }
namespace System { class String; }

#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCEPLAYBGM_OFFSET UNITYSDK_OFFSET(0x191DCF50)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCESTOPBGM_OFFSET UNITYSDK_OFFSET(0x191DD080)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_INIT_OFFSET UNITYSDK_OFFSET(0x191DCF00)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x191DD020)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_STOPBGM_OFFSET UNITYSDK_OFFSET(0x191DD160)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x191DCEF0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__GETAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0x191DD1B0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__PLAYBGM_OFFSET UNITYSDK_OFFSET(0x191DCFA0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__STOPBGM_OFFSET UNITYSDK_OFFSET(0x191DD0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBGMUIState_TypeDefinitionIndex = 60370;

	class ChallengePeakBGMUIState : public ::System::Object
	{
	public:
		// static const ::System::String* _UI_BGM_STATE; // 0x0
		::System::Boolean _IsBGMPlayingState; // 0x10
		::System::Int32 _PlayCounter; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_INIT_OFFSET))(this);
		}

		::System::Void ForcePlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCEPLAYBGM_OFFSET))(this);
		}

		::System::Void PlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_PLAYBGM_OFFSET))(this);
		}

		::System::Void ForceStopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCESTOPBGM_OFFSET))(this);
		}

		::System::Void StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_STOPBGM_OFFSET))(this);
		}

		::System::Void _PlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__PLAYBGM_OFFSET))(this);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__STOPBGM_OFFSET))(this);
		}

		::RPG::Client::AdventureAudioManager* _GetAudioManager()
		{
			return ((::RPG::Client::AdventureAudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__GETAUDIOMANAGER_OFFSET))(this);
		}
	};
}

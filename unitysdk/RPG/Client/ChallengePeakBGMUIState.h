#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }
namespace System { class String; }

#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCEPLAYBGM_OFFSET UNITYSDK_OFFSET(0x92DC610)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_FORCESTOPBGM_OFFSET UNITYSDK_OFFSET(0x92DC740)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_INIT_OFFSET UNITYSDK_OFFSET(0x92DC5C0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x92DC6E0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE_STOPBGM_OFFSET UNITYSDK_OFFSET(0x92DC820)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x92DC5B0)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__GETAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0x92DC870)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__PLAYBGM_OFFSET UNITYSDK_OFFSET(0x92DC660)
#define RPG_CLIENT_CHALLENGEPEAKBGMUISTATE__STOPBGM_OFFSET UNITYSDK_OFFSET(0x92DC790)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBGMUIState_TypeDefinitionIndex = 51245;

	class ChallengePeakBGMUIState : public ::System::Object
	{
	public:
		// static const ::System::String* _UI_BGM_STATE; // 0x0
		::System::Int32 _PlayCounter; // 0x10
		::System::Boolean _IsBGMPlayingState; // 0x14

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

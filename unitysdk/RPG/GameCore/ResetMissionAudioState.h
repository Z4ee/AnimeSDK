#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_48B4A71BE33CA0C2_OFFSET UNITYSDK_OFFSET(0x1DB93480)
#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_817BCE334BFF49BB_OFFSET UNITYSDK_OFFSET(0x1DB934C0)
#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB934B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetMissionAudioState_TypeDefinitionIndex = 21438;

	class ResetMissionAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ResetBGMEmotionState; // 0x18
		::System::Boolean ResetSoundEffectState; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48B4A71BE33CA0C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetMissionAudioState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetMissionAudioState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_48B4A71BE33CA0C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_817BCE334BFF49BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_817BCE334BFF49BB_OFFSET))(a1, a2);
		}
	};
}

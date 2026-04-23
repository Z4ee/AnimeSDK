#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_817BCE334BFF49BB_OFFSET UNITYSDK_OFFSET(0x18CAAB40)
#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_8830ADF6ADCD624A_OFFSET UNITYSDK_OFFSET(0x18CAAAC0)
#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetMissionAudioState_TypeDefinitionIndex = 20531;

	class ResetMissionAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ResetBGMEmotionState; // 0x18
		::System::Boolean ResetSoundEffectState; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8830ADF6ADCD624A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetMissionAudioState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetMissionAudioState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_8830ADF6ADCD624A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_817BCE334BFF49BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_METHOD_3_817BCE334BFF49BB_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETMISSIONAUDIOSTATE_METHOD_3_178D291519872096_OFFSET UNITYSDK_OFFSET(0x19C55650)
#define RPG_GAMECORE_SETMISSIONAUDIOSTATE_METHOD_3_2A623ED5ADA240B7_OFFSET UNITYSDK_OFFSET(0x19C556D0)
#define RPG_GAMECORE_SETMISSIONAUDIOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C556A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMissionAudioState_TypeDefinitionIndex = 20466;

	class SetMissionAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SetBGMEmotionState; // 0x18
		::System::String* BGMEmotionStateName; // 0x20
		::System::Boolean SetDefaultBGMEmotionState; // 0x28
		::System::Boolean SetSoundEffectState; // 0x29
		::System::String* SoundEffectStateName; // 0x30
		::System::Boolean SetDefaultSoundEffectState; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONAUDIOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_178D291519872096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMissionAudioState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMissionAudioState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONAUDIOSTATE_METHOD_3_178D291519872096_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A623ED5ADA240B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONAUDIOSTATE_METHOD_3_2A623ED5ADA240B7_OFFSET))(a1, a2);
		}
	};
}

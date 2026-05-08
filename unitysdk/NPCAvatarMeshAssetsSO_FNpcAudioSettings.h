#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNpcAudioSettings_TypeDefinitionIndex = 56637;

struct alignas(8) NPCAvatarMeshAssetsSO_FNpcAudioSettings
{
	::System::String* loopEvent; // 0x10
	::System::Single triggerDistance; // 0x18
	::System::Single triggerCooldown; // 0x1C
	::System::String* triggerEvent; // 0x20
	::System::String* soundActionKey; // 0x28
	::System::Boolean onlyTriggerByPathNPC; // 0x30
};

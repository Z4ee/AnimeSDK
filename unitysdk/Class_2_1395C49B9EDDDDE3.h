#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_1395C49B9EDDDDE3_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x89FC080)
#define CLASS_2_1395C49B9EDDDDE3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x89FC0A0)
#define CLASS_2_1395C49B9EDDDDE3_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x89FC090)
#define CLASS_2_1395C49B9EDDDDE3__CTOR_OFFSET UNITYSDK_OFFSET(0x89FC190)
#define CLASS_2_1395C49B9EDDDDE3___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x89FC1A0)

inline static constexpr unsigned int Class_2_1395C49B9EDDDDE3_TypeDefinitionIndex = 38936;

class Class_2_1395C49B9EDDDDE3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* _CharacterUniqueName_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1395C49B9EDDDDE3__CTOR_OFFSET))(this);
	}

	::System::String* get_CharacterUniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1395C49B9EDDDDE3_GET_CHARACTERUNIQUENAME_OFFSET))(this);
	}

	::System::Void set_CharacterUniqueName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1395C49B9EDDDDE3_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_1395C49B9EDDDDE3_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_1395C49B9EDDDDE3___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}
};

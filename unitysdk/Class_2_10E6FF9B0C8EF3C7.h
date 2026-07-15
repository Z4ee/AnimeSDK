#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_10E6FF9B0C8EF3C7_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x17FB8130)
#define CLASS_2_10E6FF9B0C8EF3C7_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x17FB8150)
#define CLASS_2_10E6FF9B0C8EF3C7_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x17FB8140)
#define CLASS_2_10E6FF9B0C8EF3C7__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8240)

inline static constexpr unsigned int Class_2_10E6FF9B0C8EF3C7_TypeDefinitionIndex = 46319;

class Class_2_10E6FF9B0C8EF3C7 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* _CharacterUniqueName_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E6FF9B0C8EF3C7__CTOR_OFFSET))(this);
	}

	::System::String* get_CharacterUniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10E6FF9B0C8EF3C7_GET_CHARACTERUNIQUENAME_OFFSET))(this);
	}

	::System::Void set_CharacterUniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_10E6FF9B0C8EF3C7_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_10E6FF9B0C8EF3C7_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}
};

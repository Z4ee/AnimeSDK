#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_18750566D9DA0473_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x165BBFB0)
#define CLASS_2_18750566D9DA0473_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x165BBFD0)
#define CLASS_2_18750566D9DA0473_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x165BC110)
#define CLASS_2_18750566D9DA0473_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x165BC180)
#define CLASS_2_18750566D9DA0473_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x165BBFC0)
#define CLASS_2_18750566D9DA0473__CTOR_OFFSET UNITYSDK_OFFSET(0x165BC4D0)

inline static constexpr unsigned int Class_2_18750566D9DA0473_TypeDefinitionIndex = 46095;

class Class_2_18750566D9DA0473 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* _CharacterUniqueName_k__BackingField; // 0x10
	::RPG::Client::MonoEmoPlayableGraph* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18750566D9DA0473__CTOR_OFFSET))(this);
	}

	::System::String* get_CharacterUniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18750566D9DA0473_GET_CHARACTERUNIQUENAME_OFFSET))(this);
	}

	::System::Void set_CharacterUniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_18750566D9DA0473_SET_CHARACTERUNIQUENAME_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_18750566D9DA0473_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_18750566D9DA0473_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_18750566D9DA0473_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};

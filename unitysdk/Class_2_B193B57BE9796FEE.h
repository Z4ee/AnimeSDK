#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_B193B57BE9796FEE_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x8A60930)
#define CLASS_2_B193B57BE9796FEE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x8A60950)
#define CLASS_2_B193B57BE9796FEE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x8A60A80)
#define CLASS_2_B193B57BE9796FEE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8A60AF0)
#define CLASS_2_B193B57BE9796FEE_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x8A60940)
#define CLASS_2_B193B57BE9796FEE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A60F10)
#define CLASS_2_B193B57BE9796FEE___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x8A60F20)
#define CLASS_2_B193B57BE9796FEE___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x8A60F30)
#define CLASS_2_B193B57BE9796FEE___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8A60F40)

inline static constexpr unsigned int Class_2_B193B57BE9796FEE_TypeDefinitionIndex = 38725;

class Class_2_B193B57BE9796FEE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPG::Client::MonoEmoPlayableGraph* Field_2_1; // 0x10
	::System::String* _CharacterUniqueName_k__BackingField; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE__CTOR_OFFSET))(this);
	}

	::System::String* get_CharacterUniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE_GET_CHARACTERUNIQUENAME_OFFSET))(this);
	}

	::System::Void set_CharacterUniqueName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B193B57BE9796FEE___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

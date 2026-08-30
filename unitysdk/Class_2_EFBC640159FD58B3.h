#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213.h"
#include "unitysdk/Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213_1.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_EFBC640159FD58B3_METHOD_2_D85A542D4381A291_OFFSET UNITYSDK_OFFSET(0x1B44B460)
#define CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B44B6F0)
#define CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B44B610)
#define CLASS_2_EFBC640159FD58B3_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B44B890)
#define CLASS_2_EFBC640159FD58B3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B44B910)
#define CLASS_2_EFBC640159FD58B3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B44B7A0)
#define CLASS_2_EFBC640159FD58B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44B9F0)

inline static constexpr unsigned int Class_2_EFBC640159FD58B3_TypeDefinitionIndex = 48193;

class Class_2_EFBC640159FD58B3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* ICIMIPJLMJJ; // 0x10
	::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213 PHNPJJCOPKO; // 0x18
	::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213_1 KOOMFLNHMHL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_EFBC640159FD58B3*> Method_2_D85A542D4381A291(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213_1 a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_EFBC640159FD58B3*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213_1))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_METHOD_2_D85A542D4381A291_OFFSET))(a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}
};

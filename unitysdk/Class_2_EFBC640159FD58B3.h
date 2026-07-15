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

#define CLASS_2_EFBC640159FD58B3_METHOD_2_D85A542D4381A291_OFFSET UNITYSDK_OFFSET(0x1798ADD0)
#define CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1798B060)
#define CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1798AF80)
#define CLASS_2_EFBC640159FD58B3_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1798B200)
#define CLASS_2_EFBC640159FD58B3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1798B280)
#define CLASS_2_EFBC640159FD58B3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1798B110)
#define CLASS_2_EFBC640159FD58B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1798B360)

inline static constexpr unsigned int Class_2_EFBC640159FD58B3_TypeDefinitionIndex = 45970;

class Class_2_EFBC640159FD58B3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213 Field_2_1; // 0x18
	::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213_1 Field_2_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_EFBC640159FD58B3*> Method_2_D85A542D4381A291(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213 a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_EFBC640159FD58B3*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3_METHOD_2_D85A542D4381A291_OFFSET))(a1, a2, a3);
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

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

#define CLASS_2_EFBC640159FD58B3_METHOD_2_D85A542D4381A291_OFFSET UNITYSDK_OFFSET(0xE633550)
#define CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE6337E0)
#define CLASS_2_EFBC640159FD58B3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE633700)
#define CLASS_2_EFBC640159FD58B3_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE633980)
#define CLASS_2_EFBC640159FD58B3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE633A00)
#define CLASS_2_EFBC640159FD58B3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE633890)
#define CLASS_2_EFBC640159FD58B3__CTOR_OFFSET UNITYSDK_OFFSET(0xE633AE0)
#define CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE633B00)
#define CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE633AF0)
#define CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE633B20)
#define CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE633B30)
#define CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE633B10)

inline static constexpr unsigned int Class_2_EFBC640159FD58B3_TypeDefinitionIndex = 44505;

class Class_2_EFBC640159FD58B3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x10
	::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213 Field_2_2; // 0x18
	::Class_2_EFBC640159FD58B3_Enum_3_63A4A17A448E4213_1 Field_2_1; // 0x1C

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

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_EFBC640159FD58B3___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_E3C0F091037CDE77;
namespace System { class Object; }

#define CLASS_2_51327FF269289840_1_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x8909510)
#define CLASS_2_51327FF269289840_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8909670)
#define CLASS_2_51327FF269289840_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8909B80)
#define CLASS_2_51327FF269289840_1___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x8909B90)
#define CLASS_2_51327FF269289840_1___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x8909BA0)

inline static constexpr unsigned int Class_2_51327FF269289840_1_TypeDefinitionIndex = 38766;

class Class_2_51327FF269289840_1 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_1_E3C0F091037CDE77* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51327FF269289840_1__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_51327FF269289840_1_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51327FF269289840_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_51327FF269289840_1___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51327FF269289840_1___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

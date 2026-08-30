#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_C0B6729114B2E0B0;
namespace System { class Object; }

#define CLASS_2_05F553DD489AB6F0_GET_NEEDDEPTHOVERLAY_OFFSET UNITYSDK_OFFSET(0xBA1DB00)
#define CLASS_2_05F553DD489AB6F0_METHOD_2_BBB974229C889820_OFFSET UNITYSDK_OFFSET(0xBA1E7D0)
#define CLASS_2_05F553DD489AB6F0_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xBA1DFE0)
#define CLASS_2_05F553DD489AB6F0_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xBA1DB20)
#define CLASS_2_05F553DD489AB6F0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBA1E0E0)
#define CLASS_2_05F553DD489AB6F0_SET_NEEDDEPTHOVERLAY_OFFSET UNITYSDK_OFFSET(0xBA1DB10)
#define CLASS_2_05F553DD489AB6F0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1E890)

inline static constexpr unsigned int Class_2_05F553DD489AB6F0_TypeDefinitionIndex = 48362;

class Class_2_05F553DD489AB6F0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_1_C0B6729114B2E0B0* ENNACIEALGC; // 0x10
	::System::Boolean _NeedDepthOverlay_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0__CTOR_OFFSET))(this);
	}

	::System::Boolean get_NeedDepthOverlay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0_GET_NEEDDEPTHOVERLAY_OFFSET))(this);
	}

	::System::Void set_NeedDepthOverlay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0_SET_NEEDDEPTHOVERLAY_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BBB974229C889820(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_05F553DD489AB6F0_METHOD_2_BBB974229C889820_OFFSET))(this, a1);
	}
};

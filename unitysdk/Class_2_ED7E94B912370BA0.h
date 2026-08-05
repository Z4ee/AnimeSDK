#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class VisualEnvConfig; }
namespace System { class Object; }

#define CLASS_2_ED7E94B912370BA0_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x12FA4320)
#define CLASS_2_ED7E94B912370BA0_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12FA4310)
#define CLASS_2_ED7E94B912370BA0_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x12FA4300)
#define CLASS_2_ED7E94B912370BA0_METHOD_2_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x12FA4340)
#define CLASS_2_ED7E94B912370BA0_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x12FA42F0)
#define CLASS_2_ED7E94B912370BA0_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12FA4330)
#define CLASS_2_ED7E94B912370BA0_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x12FA31B0)
#define CLASS_2_ED7E94B912370BA0_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x12FA3130)
#define CLASS_2_ED7E94B912370BA0_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x12FA30E0)
#define CLASS_2_ED7E94B912370BA0_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12FA3240)
#define CLASS_2_ED7E94B912370BA0_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x12FA32B0)
#define CLASS_2_ED7E94B912370BA0_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12FA3330)
#define CLASS_2_ED7E94B912370BA0__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA42E0)

inline static constexpr unsigned int Class_2_ED7E94B912370BA0_TypeDefinitionIndex = 68786;

class Class_2_ED7E94B912370BA0 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::VisualEnvConfig* Field_2_7; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_ED7E94B912370BA0_METHOD_2_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
	}
};

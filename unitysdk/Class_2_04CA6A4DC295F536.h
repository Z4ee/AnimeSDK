#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraBackgroundData.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_E3C0F091037CDE77;
namespace System { class Object; }

#define CLASS_2_04CA6A4DC295F536_METHOD_2_07871A1A4C5521C0_1_OFFSET UNITYSDK_OFFSET(0x894ECD0)
#define CLASS_2_04CA6A4DC295F536_METHOD_2_07871A1A4C5521C0_OFFSET UNITYSDK_OFFSET(0x894E290)
#define CLASS_2_04CA6A4DC295F536_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x894DFF0)
#define CLASS_2_04CA6A4DC295F536_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x894E150)
#define CLASS_2_04CA6A4DC295F536__CTOR_OFFSET UNITYSDK_OFFSET(0x894F410)
#define CLASS_2_04CA6A4DC295F536___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x894F630)
#define CLASS_2_04CA6A4DC295F536___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x894F640)

inline static constexpr unsigned int Class_2_04CA6A4DC295F536_TypeDefinitionIndex = 38740;

class Class_2_04CA6A4DC295F536 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_1_E3C0F091037CDE77* Field_2_0; // 0x10
	::RPGTools::Timeline::CRPCameraBackgroundData Field_2_1; // 0x18
	::RPGTools::Timeline::CRPCameraBackgroundData Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_07871A1A4C5521C0(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536_METHOD_2_07871A1A4C5521C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_07871A1A4C5521C0_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536_METHOD_2_07871A1A4C5521C0_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_04CA6A4DC295F536___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

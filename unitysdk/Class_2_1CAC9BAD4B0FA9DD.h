#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13CC8F10)
#define CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x13CC8F00)
#define CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_905407E1FB2AA5A6_OFFSET UNITYSDK_OFFSET(0x13CC8D70)
#define CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_B301AA36B7CA8000_OFFSET UNITYSDK_OFFSET(0x13CC86A0)
#define CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x13CC8F20)
#define CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13CC9100)
#define CLASS_2_1CAC9BAD4B0FA9DD_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x13CC85B0)
#define CLASS_2_1CAC9BAD4B0FA9DD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13CC8630)
#define CLASS_2_1CAC9BAD4B0FA9DD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13CC8940)
#define CLASS_2_1CAC9BAD4B0FA9DD__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC8EF0)

inline static constexpr unsigned int Class_2_1CAC9BAD4B0FA9DD_TypeDefinitionIndex = 56645;

class Class_2_1CAC9BAD4B0FA9DD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D33218A492B26449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_D33218A492B26449_OFFSET))(this);
	}

	::System::Void Method_2_905407E1FB2AA5A6(::UnityEngine::SkinnedMeshRenderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_905407E1FB2AA5A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B301AA36B7CA8000(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_B301AA36B7CA8000_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1CAC9BAD4B0FA9DD_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};

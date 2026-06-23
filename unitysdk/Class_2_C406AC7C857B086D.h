#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class MonoTimelineTickProxy; }
namespace System { class Object; }

#define CLASS_2_C406AC7C857B086D_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13430590)
#define CLASS_2_C406AC7C857B086D_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x134305D0)
#define CLASS_2_C406AC7C857B086D_METHOD_2_6E593CC3036F8804_OFFSET UNITYSDK_OFFSET(0x134302F0)
#define CLASS_2_C406AC7C857B086D_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x134305B0)
#define CLASS_2_C406AC7C857B086D_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x134305A0)
#define CLASS_2_C406AC7C857B086D_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x134305C0)
#define CLASS_2_C406AC7C857B086D_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x13430580)
#define CLASS_2_C406AC7C857B086D_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1342FD50)
#define CLASS_2_C406AC7C857B086D_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1342FCD0)
#define CLASS_2_C406AC7C857B086D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1342FDD0)
#define CLASS_2_C406AC7C857B086D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1342FE80)
#define CLASS_2_C406AC7C857B086D__CTOR_OFFSET UNITYSDK_OFFSET(0x13430570)

inline static constexpr unsigned int Class_2_C406AC7C857B086D_TypeDefinitionIndex = 84804;

class Class_2_C406AC7C857B086D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::MonoTimelineTickProxy* Field_2_2; // 0x10
	::System::Boolean Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::MoleMole::Timeline::MonoTimelineTickProxy* Method_2_6E593CC3036F8804(::System::Object* a1)
	{
		return ((::MoleMole::Timeline::MonoTimelineTickProxy*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_6E593CC3036F8804_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C406AC7C857B086D_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_E5F5C9B18D66D44F_METHOD_2_4A045D7C062680E6_OFFSET UNITYSDK_OFFSET(0x1A8C17B0)
#define CLASS_2_E5F5C9B18D66D44F_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x1A8C1B50)
#define CLASS_2_E5F5C9B18D66D44F_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1A8C1B30)
#define CLASS_2_E5F5C9B18D66D44F_METHOD_2_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x1A8C1260)
#define CLASS_2_E5F5C9B18D66D44F_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1A8C1B40)
#define CLASS_2_E5F5C9B18D66D44F_METHOD_2_F848D92BB56369EE_OFFSET UNITYSDK_OFFSET(0x1A8C1A40)
#define CLASS_2_E5F5C9B18D66D44F_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A8C0FD0)
#define CLASS_2_E5F5C9B18D66D44F_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A8C0F50)
#define CLASS_2_E5F5C9B18D66D44F_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A8C11B0)
#define CLASS_2_E5F5C9B18D66D44F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C17A0)

inline static constexpr unsigned int Class_2_E5F5C9B18D66D44F_TypeDefinitionIndex = 66482;

class Class_2_E5F5C9B18D66D44F : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x10
	::MoleMole::Timeline::ZNetEffectPlayableAsset* Field_2_2; // 0x18
	::MoleMole::MonoEffectPluginFollowCamera* Field_2_7; // 0x20
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_E5F5C9B18D66D44F*> Method_2_4A045D7C062680E6(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_E5F5C9B18D66D44F*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_METHOD_2_4A045D7C062680E6_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E2BCD1B56132A826()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_METHOD_2_E2BCD1B56132A826_OFFSET))(this);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F848D92BB56369EE(::UnityEngine::GameObject* a1, ::MoleMole::Timeline::ZNetEffectPlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_METHOD_2_F848D92BB56369EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E5F5C9B18D66D44F_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}
};

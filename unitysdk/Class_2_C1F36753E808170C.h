#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_0ACE77AB9981A526;
namespace RPGTools::Timeline { class ScaleCharacterNodeClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C1F36753E808170C_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x11734BC0)
#define CLASS_2_C1F36753E808170C_METHOD_2_0190BA75FF339E40_OFFSET UNITYSDK_OFFSET(0x11734DF0)
#define CLASS_2_C1F36753E808170C_METHOD_2_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x11734C90)
#define CLASS_2_C1F36753E808170C_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x11734EA0)
#define CLASS_2_C1F36753E808170C_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11734BE0)
#define CLASS_2_C1F36753E808170C_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x11734BD0)
#define CLASS_2_C1F36753E808170C__CTOR_OFFSET UNITYSDK_OFFSET(0x11735050)
#define CLASS_2_C1F36753E808170C___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x11735070)
#define CLASS_2_C1F36753E808170C___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x11735060)

inline static constexpr unsigned int Class_2_C1F36753E808170C_TypeDefinitionIndex = 39108;

class Class_2_C1F36753E808170C : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_0ACE77AB9981A526* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_1; // 0x18
	::RPGTools::Timeline::ScaleCharacterNodeClip* _Clip_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::ScaleCharacterNodeClip* get_Clip()
	{
		return ((::RPGTools::Timeline::ScaleCharacterNodeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::ScaleCharacterNodeClip* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ScaleCharacterNodeClip*))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C_SET_CLIP_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C1E0405EEC95DC65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C_METHOD_2_C1E0405EEC95DC65_OFFSET))(this);
	}

	::System::Void Method_2_0190BA75FF339E40(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C_METHOD_2_0190BA75FF339E40_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_C1F36753E808170C___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
	}
};

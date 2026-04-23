#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_04E516019EC1D060_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD399CB0)
#define CLASS_2_04E516019EC1D060__CTOR_OFFSET UNITYSDK_OFFSET(0xD399DC0)
#define CLASS_2_04E516019EC1D060___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD399DD0)

inline static constexpr unsigned int Class_2_04E516019EC1D060_TypeDefinitionIndex = 44999;

class Class_2_04E516019EC1D060 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Single Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x24
	::System::Int32 Field_2_5; // 0x28
	::System::Single Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E516019EC1D060__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_04E516019EC1D060_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_04E516019EC1D060___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}
};

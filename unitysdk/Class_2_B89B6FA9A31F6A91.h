#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_B89B6FA9A31F6A91_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF42C140)
#define CLASS_2_B89B6FA9A31F6A91__CTOR_OFFSET UNITYSDK_OFFSET(0xF42C250)

inline static constexpr unsigned int Class_2_B89B6FA9A31F6A91_TypeDefinitionIndex = 48716;

class Class_2_B89B6FA9A31F6A91 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* BJCBMNHOAGO; // 0x10
	::System::String* PODFJDMHFMK; // 0x18
	::System::Single CCAOGMEFNLB; // 0x20
	::System::Int32 BIKLAFLEIOC; // 0x24
	::System::Single JIHLNPHKEEP; // 0x28
	::System::Boolean BMANOLMNHBK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89B6FA9A31F6A91__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B89B6FA9A31F6A91_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}
};

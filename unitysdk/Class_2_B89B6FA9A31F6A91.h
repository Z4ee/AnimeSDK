#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_B89B6FA9A31F6A91_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x17AE8F10)
#define CLASS_2_B89B6FA9A31F6A91__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE9020)

inline static constexpr unsigned int Class_2_B89B6FA9A31F6A91_TypeDefinitionIndex = 48716;

class Class_2_B89B6FA9A31F6A91 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* PODFJDMHFMK; // 0x10
	::System::String* BJCBMNHOAGO; // 0x18
	::System::Single JIHLNPHKEEP; // 0x20
	::System::Single CCAOGMEFNLB; // 0x24
	::System::Boolean BMANOLMNHBK; // 0x28
	::System::Int32 BIKLAFLEIOC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89B6FA9A31F6A91__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B89B6FA9A31F6A91_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_B89B6FA9A31F6A91_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x16986350)
#define CLASS_2_B89B6FA9A31F6A91__CTOR_OFFSET UNITYSDK_OFFSET(0x16986460)

inline static constexpr unsigned int Class_2_B89B6FA9A31F6A91_TypeDefinitionIndex = 46481;

class Class_2_B89B6FA9A31F6A91 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::System::Boolean Field_2_4; // 0x28
	::System::Single Field_2_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89B6FA9A31F6A91__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B89B6FA9A31F6A91_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}
};

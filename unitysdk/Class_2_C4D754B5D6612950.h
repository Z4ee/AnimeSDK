#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class Object; }

#define CLASS_2_C4D754B5D6612950_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x185DDBC0)
#define CLASS_2_C4D754B5D6612950__CTOR_OFFSET UNITYSDK_OFFSET(0x185DDC50)

inline static constexpr unsigned int Class_2_C4D754B5D6612950_TypeDefinitionIndex = 49213;

class Class_2_C4D754B5D6612950 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPG::Client::MonoEmoBlendShapesController* JIIKAEMELPJ; // 0x10
	::System::Single EELKIDELOCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4D754B5D6612950__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C4D754B5D6612950_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};

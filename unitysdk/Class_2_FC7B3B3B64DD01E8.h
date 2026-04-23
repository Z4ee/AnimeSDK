#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class Object; }

#define CLASS_2_FC7B3B3B64DD01E8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x127CDAE0)
#define CLASS_2_FC7B3B3B64DD01E8__CTOR_OFFSET UNITYSDK_OFFSET(0x127CDB70)
#define CLASS_2_FC7B3B3B64DD01E8___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x127CDB80)

inline static constexpr unsigned int Class_2_FC7B3B3B64DD01E8_TypeDefinitionIndex = 45445;

class Class_2_FC7B3B3B64DD01E8 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPG::Client::MonoEmoBlendShapesController* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7B3B3B64DD01E8__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FC7B3B3B64DD01E8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FC7B3B3B64DD01E8___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

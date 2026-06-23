#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_52375F5368B0E91A_METHOD_2_60AE9A3EDECFD3BC_OFFSET UNITYSDK_OFFSET(0x1727DC70)
#define CLASS_2_52375F5368B0E91A_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x1727DC10)
#define CLASS_2_52375F5368B0E91A_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1727DC60)
#define CLASS_2_52375F5368B0E91A_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1727DA60)
#define CLASS_2_52375F5368B0E91A__CTOR_OFFSET UNITYSDK_OFFSET(0x1727DC00)

inline static constexpr unsigned int Class_2_52375F5368B0E91A_TypeDefinitionIndex = 59449;

class Class_2_52375F5368B0E91A : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52375F5368B0E91A__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_52375F5368B0E91A_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_52375F5368B0E91A_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_52375F5368B0E91A_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_52375F5368B0E91A*> Method_2_60AE9A3EDECFD3BC(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_52375F5368B0E91A*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_52375F5368B0E91A_METHOD_2_60AE9A3EDECFD3BC_OFFSET))(a1, a2);
	}
};

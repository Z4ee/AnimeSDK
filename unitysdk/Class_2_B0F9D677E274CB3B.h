#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_2_B0F9D677E274CB3B_METHOD_2_336D58AFF40F3362_OFFSET UNITYSDK_OFFSET(0x12589880)
#define CLASS_2_B0F9D677E274CB3B_METHOD_2_4C3A09BDCDF5D131_OFFSET UNITYSDK_OFFSET(0x12589B30)
#define CLASS_2_B0F9D677E274CB3B_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12589B80)
#define CLASS_2_B0F9D677E274CB3B_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12589550)
#define CLASS_2_B0F9D677E274CB3B__CTOR_OFFSET UNITYSDK_OFFSET(0x12589870)

inline static constexpr unsigned int Class_2_B0F9D677E274CB3B_TypeDefinitionIndex = 68180;

class Class_2_B0F9D677E274CB3B : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0F9D677E274CB3B__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B0F9D677E274CB3B_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_B0F9D677E274CB3B*> Method_2_336D58AFF40F3362(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_B0F9D677E274CB3B*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_B0F9D677E274CB3B_METHOD_2_336D58AFF40F3362_OFFSET))(a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B0F9D677E274CB3B_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4C3A09BDCDF5D131(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_B0F9D677E274CB3B_METHOD_2_4C3A09BDCDF5D131_OFFSET))(this, a1);
	}
};

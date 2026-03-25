#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_52D9E76AE3420F1A_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x115B0C00)
#define CLASS_2_52D9E76AE3420F1A_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x115B0CE0)
#define CLASS_2_52D9E76AE3420F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x115B1140)
#define CLASS_2_52D9E76AE3420F1A___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x115B11C0)
#define CLASS_2_52D9E76AE3420F1A___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x115B11D0)

inline static constexpr unsigned int Class_2_52D9E76AE3420F1A_TypeDefinitionIndex = 39272;

class Class_2_52D9E76AE3420F1A : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Playables::PlayableDirector* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52D9E76AE3420F1A__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_52D9E76AE3420F1A_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_52D9E76AE3420F1A_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_52D9E76AE3420F1A___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_52D9E76AE3420F1A___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};

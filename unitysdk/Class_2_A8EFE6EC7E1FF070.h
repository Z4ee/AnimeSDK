#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_A8EFE6EC7E1FF070_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x17F88FF0)
#define CLASS_2_A8EFE6EC7E1FF070_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17F890D0)
#define CLASS_2_A8EFE6EC7E1FF070__CTOR_OFFSET UNITYSDK_OFFSET(0x17F89560)

inline static constexpr unsigned int Class_2_A8EFE6EC7E1FF070_TypeDefinitionIndex = 48913;

class Class_2_A8EFE6EC7E1FF070 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* DDJNNLKPJBF; // 0x10
	::UnityEngine::Playables::PlayableDirector* LCOPDJCBHJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8EFE6EC7E1FF070__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A8EFE6EC7E1FF070_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A8EFE6EC7E1FF070_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};

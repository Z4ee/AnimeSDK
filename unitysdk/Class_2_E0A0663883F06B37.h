#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_E0A0663883F06B37_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0x16257190)
#define CLASS_2_E0A0663883F06B37_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x16256D90)
#define CLASS_2_E0A0663883F06B37_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x16256B90)
#define CLASS_2_E0A0663883F06B37_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16256CE0)
#define CLASS_2_E0A0663883F06B37__CTOR_OFFSET UNITYSDK_OFFSET(0x162571E0)

inline static constexpr unsigned int Class_2_E0A0663883F06B37_TypeDefinitionIndex = 47023;

class Class_2_E0A0663883F06B37 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Playables::PlayableDirector* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* Field_2_1; // 0x18
	::System::Double Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C6BB5BD685E1939(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37_METHOD_2_2C6BB5BD685E1939_OFFSET))(this, a1);
	}
};

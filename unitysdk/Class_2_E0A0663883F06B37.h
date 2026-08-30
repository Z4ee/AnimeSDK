#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_E0A0663883F06B37_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0x15B0EF80)
#define CLASS_2_E0A0663883F06B37_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x15B0EB50)
#define CLASS_2_E0A0663883F06B37_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15B0E910)
#define CLASS_2_E0A0663883F06B37_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15B0EA80)
#define CLASS_2_E0A0663883F06B37__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0EFD0)

inline static constexpr unsigned int Class_2_E0A0663883F06B37_TypeDefinitionIndex = 49279;

class Class_2_E0A0663883F06B37 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* ECBONMNCJMA; // 0x10
	::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x18
	::System::Double HBDJCFFDGDD; // 0x20

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

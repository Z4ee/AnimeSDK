#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_E0A0663883F06B37_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0x9869000)
#define CLASS_2_E0A0663883F06B37_METHOD_2_AB1A253BFABC50A9_OFFSET UNITYSDK_OFFSET(0x9868C70)
#define CLASS_2_E0A0663883F06B37_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x9868AB0)
#define CLASS_2_E0A0663883F06B37_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9868BE0)
#define CLASS_2_E0A0663883F06B37__CTOR_OFFSET UNITYSDK_OFFSET(0x9869050)
#define CLASS_2_E0A0663883F06B37___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x9869060)
#define CLASS_2_E0A0663883F06B37___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x9869070)

inline static constexpr unsigned int Class_2_E0A0663883F06B37_TypeDefinitionIndex = 45501;

class Class_2_E0A0663883F06B37 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* Field_2_2; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_1; // 0x18
	::System::Double Field_2_0; // 0x20

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

	::System::Void Method_2_AB1A253BFABC50A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37_METHOD_2_AB1A253BFABC50A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C6BB5BD685E1939(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37_METHOD_2_2C6BB5BD685E1939_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E0A0663883F06B37___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}
};

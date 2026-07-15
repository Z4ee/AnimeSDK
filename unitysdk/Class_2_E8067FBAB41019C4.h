#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_E8067FBAB41019C4_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0x16A25100)
#define CLASS_2_E8067FBAB41019C4_METHOD_2_DB51C66BCC16DD6E_OFFSET UNITYSDK_OFFSET(0x16A25150)
#define CLASS_2_E8067FBAB41019C4_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x16A254A0)
#define CLASS_2_E8067FBAB41019C4_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16A256D0)
#define CLASS_2_E8067FBAB41019C4__CTOR_OFFSET UNITYSDK_OFFSET(0x16A257A0)

inline static constexpr unsigned int Class_2_E8067FBAB41019C4_TypeDefinitionIndex = 46295;

class Class_2_E8067FBAB41019C4 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* Field_2_0; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8067FBAB41019C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C6BB5BD685E1939(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_E8067FBAB41019C4_METHOD_2_2C6BB5BD685E1939_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB51C66BCC16DD6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8067FBAB41019C4_METHOD_2_DB51C66BCC16DD6E_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E8067FBAB41019C4_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E8067FBAB41019C4_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};

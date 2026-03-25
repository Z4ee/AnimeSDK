#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_65DC6A4D27FAFDF9_METHOD_2_2C6BB5BD685E1939_OFFSET UNITYSDK_OFFSET(0x113D5750)
#define CLASS_2_65DC6A4D27FAFDF9_METHOD_2_72FFA610B5C45275_OFFSET UNITYSDK_OFFSET(0x113D57A0)
#define CLASS_2_65DC6A4D27FAFDF9_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x113D5A90)
#define CLASS_2_65DC6A4D27FAFDF9_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x113D5C90)
#define CLASS_2_65DC6A4D27FAFDF9__CTOR_OFFSET UNITYSDK_OFFSET(0x113D5D40)
#define CLASS_2_65DC6A4D27FAFDF9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x113D5D50)
#define CLASS_2_65DC6A4D27FAFDF9___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x113D5D60)

inline static constexpr unsigned int Class_2_65DC6A4D27FAFDF9_TypeDefinitionIndex = 38916;

class Class_2_65DC6A4D27FAFDF9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* Field_2_0; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C6BB5BD685E1939(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9_METHOD_2_2C6BB5BD685E1939_OFFSET))(this, a1);
	}

	::System::Void Method_2_72FFA610B5C45275(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9_METHOD_2_72FFA610B5C45275_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_65DC6A4D27FAFDF9___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};

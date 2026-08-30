#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithObject.h"

namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_BEGIN_OFFSET UNITYSDK_OFFSET(0x1E528060)
#define RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_END_OFFSET UNITYSDK_OFFSET(0x1E5280E0)
#define RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E527F90)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerWithObject_TypeDefinitionIndex = 34500;

	class RPGProfilerMarkerWithObject : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x10
		::Unity::Profiling::ProfilerMarkerWithObject m_Marker; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Begin(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_BEGIN_OFFSET))(this, a1, a2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_END_OFFSET))(this);
		}
	};
}

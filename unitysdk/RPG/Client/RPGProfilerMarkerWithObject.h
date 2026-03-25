#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithObject.h"

namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_BEGIN_OFFSET UNITYSDK_OFFSET(0x182DD470)
#define RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_END_OFFSET UNITYSDK_OFFSET(0x182DD4F0)
#define RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x182DD3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerWithObject_TypeDefinitionIndex = 27631;

	class RPGProfilerMarkerWithObject : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x10
		::Unity::Profiling::ProfilerMarkerWithObject m_Marker; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2, ::System::Int32 markerLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT__CTOR_OFFSET))(this, name, parameterName1, parameterName2, markerLevel);
		}

		::System::Void Begin(::UnityEngine::Object* obj1, ::UnityEngine::Object* obj2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_BEGIN_OFFSET))(this, obj1, obj2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHOBJECT_END_OFFSET))(this);
		}
	};
}

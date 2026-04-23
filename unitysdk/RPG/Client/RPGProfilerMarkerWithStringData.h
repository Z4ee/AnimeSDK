#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithStringData.h"

namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }

#define RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x19D33370)
#define RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_END_OFFSET UNITYSDK_OFFSET(0x19D333F0)
#define RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D332A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerWithStringData_TypeDefinitionIndex = 33256;

	class RPGProfilerMarkerWithStringData : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x10
		::Unity::Profiling::ProfilerMarkerWithStringData m_Marker; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2, ::System::Int32 markerLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA__CTOR_OFFSET))(this, name, parameterName1, parameterName2, markerLevel);
		}

		::System::Void Begin(::System::String* value1, ::System::String* value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET))(this, value1, value2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_END_OFFSET))(this);
		}
	};
}

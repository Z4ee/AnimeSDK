#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithIntData.h"

namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }

#define RPG_CLIENT_RPGPROFILERMARKERWITHINTDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x182DD1B0)
#define RPG_CLIENT_RPGPROFILERMARKERWITHINTDATA_END_OFFSET UNITYSDK_OFFSET(0x182DD330)
#define RPG_CLIENT_RPGPROFILERMARKERWITHINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x182DD0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerWithIntData_TypeDefinitionIndex = 27630;

	class RPGProfilerMarkerWithIntData : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x10
		::Unity::Profiling::ProfilerMarkerWithIntData m_Marker; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* parameterName1, ::System::String* parameterName2, ::System::Int32 markerLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHINTDATA__CTOR_OFFSET))(this, name, parameterName1, parameterName2, markerLevel);
		}

		::System::Void Begin(::System::Int32 value1, ::System::Int32 value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHINTDATA_BEGIN_OFFSET))(this, value1, value2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHINTDATA_END_OFFSET))(this);
		}
	};
}

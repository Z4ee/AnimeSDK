#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithStringData.h"

namespace RPG::Client { class RPGProfilerMarkerLevel; }
namespace System { class String; }

#define RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET UNITYSDK_OFFSET(0x1EF92990)
#define RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_END_OFFSET UNITYSDK_OFFSET(0x1EF92A10)
#define RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF928C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerWithStringData_TypeDefinitionIndex = 34501;

	class RPGProfilerMarkerWithStringData : public ::System::Object
	{
	public:
		::RPG::Client::RPGProfilerMarkerLevel* m_MarkerLevel; // 0x10
		::Unity::Profiling::ProfilerMarkerWithStringData m_Marker; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Begin(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_BEGIN_OFFSET))(this, a1, a2);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERWITHSTRINGDATA_END_OFFSET))(this);
		}
	};
}

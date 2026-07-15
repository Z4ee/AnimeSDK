#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class Recorder; }

#define RPG_PROFILERECORDERINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1D2A0E20)
#define RPG_PROFILERECORDERINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2A0DB0)
#define RPG_PROFILERECORDERINFO_GET_ELAPSEDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1D2A0A90)
#define RPG_PROFILERECORDERINFO_GET_ISFILTERED_OFFSET UNITYSDK_OFFSET(0x1D2A0A70)
#define RPG_PROFILERECORDERINFO_GET_ISGETCALLED_OFFSET UNITYSDK_OFFSET(0x1D2A0A50)
#define RPG_PROFILERECORDERINFO_GET_TIMESAMPLE_OFFSET UNITYSDK_OFFSET(0x1D2A0A30)
#define RPG_PROFILERECORDERINFO_SET_ISFILTERED_OFFSET UNITYSDK_OFFSET(0x1D2A0A80)
#define RPG_PROFILERECORDERINFO_SET_ISGETCALLED_OFFSET UNITYSDK_OFFSET(0x1D2A0A60)
#define RPG_PROFILERECORDERINFO_SET_TIMESAMPLE_OFFSET UNITYSDK_OFFSET(0x1D2A0A40)
#define RPG_PROFILERECORDERINFO_UPDATERECORDER_OFFSET UNITYSDK_OFFSET(0x1D2A0AD0)
#define RPG_PROFILERECORDERINFO_UPDATETIMESAMPLE_OFFSET UNITYSDK_OFFSET(0x1D2A0D60)
#define RPG_PROFILERECORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A0E10)
#define RPG_PROFILERECORDERINFO__UPDATERECORDER_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D2A0E80)

namespace RPG
{
	inline static constexpr unsigned int ProfileRecorderInfo_TypeDefinitionIndex = 33726;

	class ProfileRecorderInfo : public ::System::Object
	{
	public:
		::UnityEngine::Profiling::Recorder* Recorder; // 0x10
		::System::String* MarkerName; // 0x18
		::System::Boolean _IsFiltered_k__BackingField; // 0x20
		::System::Boolean _IsGetCalled_k__BackingField; // 0x21
		::System::Double _TimeSample_k__BackingField; // 0x28
		::Unity::Profiling::ProfilerMarker Marker; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO__CTOR_OFFSET))(this);
		}

		::System::Double get_TimeSample()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_GET_TIMESAMPLE_OFFSET))(this);
		}

		::System::Void set_TimeSample(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_SET_TIMESAMPLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGetCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_GET_ISGETCALLED_OFFSET))(this);
		}

		::System::Void set_IsGetCalled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_SET_ISGETCALLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFiltered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_GET_ISFILTERED_OFFSET))(this);
		}

		::System::Void set_IsFiltered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_SET_ISFILTERED_OFFSET))(this, a1);
		}

		::System::Double get_ElapsedMilliseconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_GET_ELAPSEDMILLISECONDS_OFFSET))(this);
		}

		::System::Void UpdateRecorder(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_UPDATERECORDER_OFFSET))(this, a1);
		}

		::System::Void UpdateTimeSample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_UPDATETIMESAMPLE_OFFSET))(this);
		}

		static ::RPG::ProfileRecorderInfo* Create(::System::String* a1)
		{
			return ((::RPG::ProfileRecorderInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_CREATE_OFFSET))(a1);
		}

		static ::RPG::ProfileRecorderInfo* Create_1(::Unity::Profiling::ProfilerMarker a1, ::UnityEngine::Profiling::Recorder* a2)
		{
			return ((::RPG::ProfileRecorderInfo*(*)(::Unity::Profiling::ProfilerMarker, ::UnityEngine::Profiling::Recorder*))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Void _UpdateRecorder_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILERECORDERINFO__UPDATERECORDER_B__17_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Profiling { class Recorder; }

#define RPG_CUSTOMRP_RUNTIMEPROFILER_RECORDERENTRY_INIT_OFFSET UNITYSDK_OFFSET(0x185BAA70)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_RECORDERENTRY_UPDATE_OFFSET UNITYSDK_OFFSET(0x185BABB0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_RECORDERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x185BAC80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RuntimeProfiler_RecorderEntry_TypeDefinitionIndex = 37234;

	class RuntimeProfiler_RecorderEntry : public ::System::Object
	{
	public:
		::UnityEngine::Profiling::Recorder* recorder; // 0x10
		::System::String* name; // 0x18
		::System::String* profileName; // 0x20
		::System::Int32 callCount; // 0x28
		::System::Single avgTime; // 0x2C
		::System::Single accTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_RECORDERENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_RECORDERENTRY_INIT_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_RECORDERENTRY_UPDATE_OFFSET))(this, a1, a2);
		}
	};
}

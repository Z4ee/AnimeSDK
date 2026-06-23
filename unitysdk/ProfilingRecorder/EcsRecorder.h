#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProfilingRecorder/EcsRecorder_EcsDelta.h"
#include "unitysdk/ProfilingRecorder/EcsRecorder_EcsSnapshot.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PROFILINGRECORDER_ECSRECORDER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1AADA040)
#define PROFILINGRECORDER_ECSRECORDER_END_OFFSET UNITYSDK_OFFSET(0x1AADA0A0)
#define PROFILINGRECORDER_ECSRECORDER_GETCOMPONENTCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1AAD9A60)
#define PROFILINGRECORDER_ECSRECORDER_GETTOTALARCHETYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1AAD95D0)
#define PROFILINGRECORDER_ECSRECORDER_GETTOTALCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AAD9340)
#define PROFILINGRECORDER_ECSRECORDER_GETTOTALENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1AAD98B0)
#define PROFILINGRECORDER_ECSRECORDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AAD9290)
#define PROFILINGRECORDER_ECSRECORDER_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x1AAD9310)
#define PROFILINGRECORDER_ECSRECORDER_GET_LASTDELTA_OFFSET UNITYSDK_OFFSET(0x1AAD9320)
#define PROFILINGRECORDER_ECSRECORDER_PROFILINGRECORDER_IPROFILERRECORDER_END_OFFSET UNITYSDK_OFFSET(0x1AADA600)
#define PROFILINGRECORDER_ECSRECORDER_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AAD9F90)
#define PROFILINGRECORDER_ECSRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD9300)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int EcsRecorder_TypeDefinitionIndex = 42552;

	class EcsRecorder : public ::System::Object
	{
	public:
		static ::ProfilingRecorder::EcsRecorder** StaticGet__instance()
		{
			return (::ProfilingRecorder::EcsRecorder**)Il2CppClass::FromTypeDefinitionIndex(EcsRecorder_TypeDefinitionIndex)->GetStaticField(0x41EA0);
		}
		::ProfilingRecorder::EcsRecorder_EcsDelta _lastDelta; // 0x10
		::ProfilingRecorder::EcsRecorder_EcsSnapshot _beginSnapshot; // 0x30
		::System::Boolean _isRecording; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER__CTOR_OFFSET))(this);
		}

		static ::ProfilingRecorder::EcsRecorder* get_Instance()
		{
			return ((::ProfilingRecorder::EcsRecorder*(*)())((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_IsRecording()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GET_ISRECORDING_OFFSET))(this);
		}

		::ProfilingRecorder::EcsRecorder_EcsDelta get_LastDelta()
		{
			return ((::ProfilingRecorder::EcsRecorder_EcsDelta(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GET_LASTDELTA_OFFSET))(this);
		}

		::System::Int32 GetTotalComponentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GETTOTALCOMPONENTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTotalArchetypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GETTOTALARCHETYPECOUNT_OFFSET))(this);
		}

		::System::Int32 GetTotalEntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GETTOTALENTITYCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GetComponentCountByType()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_GETCOMPONENTCOUNTBYTYPE_OFFSET))(this);
		}

		::ProfilingRecorder::EcsRecorder_EcsSnapshot TakeSnapshot()
		{
			return ((::ProfilingRecorder::EcsRecorder_EcsSnapshot(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_TAKESNAPSHOT_OFFSET))(this);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_BEGIN_OFFSET))(this);
		}

		::ProfilingRecorder::EcsRecorder_EcsDelta End()
		{
			return ((::ProfilingRecorder::EcsRecorder_EcsDelta(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_END_OFFSET))(this);
		}

		::System::Void ProfilingRecorder_IProfilerRecorder_End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_ECSRECORDER_PROFILINGRECORDER_IPROFILERRECORDER_END_OFFSET))(this);
		}
	};
}

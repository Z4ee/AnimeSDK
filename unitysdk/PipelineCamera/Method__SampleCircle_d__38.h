#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F2368D0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F236C30)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F236B80)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F236CB0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F236BE0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F236B90)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F2368C0)
#define PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2368A0)

namespace PipelineCamera
{
	inline static constexpr unsigned int Method__SampleCircle_d__38_TypeDefinitionIndex = 38155;

	class Method__SampleCircle_d__38 : public ::System::Object
	{
	public:
		::System::Int32 _step_5__3; // 0x10
		::System::ValueTuple_2<::System::Single, ::System::Single> __2__current; // 0x14
		::System::Int32 _angle_5__2; // 0x1C
		::System::Int32 __1__state; // 0x20
		::System::Int32 segmentHint; // 0x24
		::System::Int32 __3__segmentHint; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> System_Collections_Generic_IEnumerator__System_Singlesin_System_Singlecos___get_Current()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* System_Collections_Generic_IEnumerable__System_Singlesin_System_Singlecos___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD__SAMPLECIRCLE_D__38_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}

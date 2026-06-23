#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D8B8CC0)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8B8E00)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D8B8D50)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8B8E70)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D8B8DB0)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D8B8D60)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D8B8CB0)
#define PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B8C90)

namespace PipelineCamera
{
	inline static constexpr unsigned int Method___SampleCircle_g__GetSinCosEnumerable_38_1_d_TypeDefinitionIndex = 37495;

	class Method___SampleCircle_g__GetSinCosEnumerable_38_1_d : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Int32 _i_5__2; // 0x14
		::System::ValueTuple_2<::System::Single, ::System::Single> __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_MOVENEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> System_Collections_Generic_IEnumerator__System_Singlesin_System_Singlecos___get_Current()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* System_Collections_Generic_IEnumerable__System_Singlesin_System_Singlecos___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_SINGLESIN_SYSTEM_SINGLECOS___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___SAMPLECIRCLE_G__GETSINCOSENUMERABLE_38_1_D_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}

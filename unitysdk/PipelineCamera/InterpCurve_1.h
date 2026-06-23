#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Inline4List_1.h"
#include "unitysdk/PipelineCamera/InterpCurveMode.h"
#include "unitysdk/PipelineCamera/InterpCurvePoint_1.h"
#include "unitysdk/PipelineCamera/InterpCurve_1_Comparer.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { template <typename T> class IMathOperation_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurve_1_TypeDefinitionIndex = 37683;

	template <typename T>
	struct InterpCurve_1
	{
		::PipelineCamera::Inline4List_1<::PipelineCamera::InterpCurvePoint_1<T>> _points; // 0x0
		::System::Boolean _isLooped; // 0x0
		::System::Single _loopKeyOffset; // 0x0
		::PipelineCamera::IMathOperation_1<T>* _operation; // 0x0
		::PipelineCamera::InterpCurveMode _interpMode; // 0x0
		static ::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>** StaticGet__indexBuffer()
		{
			return (::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(InterpCurve_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::PipelineCamera::InterpCurve_1_Comparer<T>* StaticGet_PointComparer()
		{
			return (::PipelineCamera::InterpCurve_1_Comparer<T>*)Il2CppClass::FromTypeDefinitionIndex(InterpCurve_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

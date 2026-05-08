#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { template <typename T1, typename T2> class Optional_1_Delegate_RetNewWithParam_1; }
namespace PipelineCamera { template <typename T1, typename T2> class Optional_1_Delegate_RetValWithParam_1; }
namespace PipelineCamera { template <typename T> class Optional_1_Delegate_NoRetWithParam; }
namespace PipelineCamera { template <typename T> class Optional_1_Delegate_RetSelfNoParam; }

namespace PipelineCamera
{
	inline static constexpr unsigned int Optional_1_TypeDefinitionIndex = 36078;

	template <typename T>
	struct Optional_1
	{
		static ::PipelineCamera::Optional_1<T>* StaticGet_Null()
		{
			return (::PipelineCamera::Optional_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Optional_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T _value; // 0x0
		::System::Byte _isSet; // 0x0
	};
}

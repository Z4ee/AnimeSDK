#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class CircularBuffer_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CircularBuffer_1___c_TypeDefinitionIndex = 36032;

	template <typename T>
	class CircularBuffer_1___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CircularBuffer_1___c<T>** StaticGet___9()
		{
			return (::PipelineCamera::CircularBuffer_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(CircularBuffer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CircularBuffer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

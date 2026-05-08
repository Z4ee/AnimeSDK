#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class Method_EnumConvert_1___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_EnumConvert_1___c_TypeDefinitionIndex = 35884;

	template <typename TEnum>
	class Method_EnumConvert_1___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::Method_EnumConvert_1___c<TEnum>** StaticGet___9()
		{
			return (::PipelineCamera::Method_EnumConvert_1___c<TEnum>**)Il2CppClass::FromTypeDefinitionIndex(Method_EnumConvert_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Int32, TEnum>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, TEnum>**)Il2CppClass::FromTypeDefinitionIndex(Method_EnumConvert_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

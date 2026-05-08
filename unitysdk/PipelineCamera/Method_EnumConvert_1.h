#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_EnumConvert_1_TypeDefinitionIndex = 35883;

	template <typename TEnum>
	class Method_EnumConvert_1 : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, TEnum>** StaticGet_Convert()
		{
			return (::System::Func_2<::System::Int32, TEnum>**)Il2CppClass::FromTypeDefinitionIndex(Method_EnumConvert_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

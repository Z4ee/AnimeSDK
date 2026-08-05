#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int EnumField_1_TypeDefinitionIndex = 38303;

	template <typename TEnum>
	class EnumField_1 : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Int32>* StaticGet_Count()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(EnumField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet_PostProcessing()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(EnumField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

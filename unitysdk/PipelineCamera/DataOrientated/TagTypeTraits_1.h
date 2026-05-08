#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int TagTypeTraits_1_TypeDefinitionIndex = 36134;

	template <typename T>
	class TagTypeTraits_1 : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_TypeHash()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TagTypeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Boolean IsValid; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int TypeTrait_1_TypeDefinitionIndex = 7893;

	template <typename T>
	class TypeTrait_1 : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_TraitValue()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TypeTrait_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsPrimitive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypeTrait_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsEnum()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypeTrait_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypeTrait_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsClass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TypeTrait_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

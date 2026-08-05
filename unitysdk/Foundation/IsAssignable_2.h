#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int IsAssignable_2_TypeDefinitionIndex = 8533;

	template <typename T, typename TFrom>
	class IsAssignable_2 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Value()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IsAssignable_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

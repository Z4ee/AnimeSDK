#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

namespace Foundation
{
	inline static constexpr unsigned int TypeOf_1_TypeDefinitionIndex = 7980;

	template <typename T>
	class TypeOf_1 : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_Value()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(TypeOf_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace Foundation
{
	inline static constexpr unsigned int NameOf_1_TypeDefinitionIndex = 8518;

	template <typename T>
	class NameOf_1 : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Value()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NameOf_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

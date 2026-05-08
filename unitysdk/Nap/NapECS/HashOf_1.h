#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int HashOf_1_TypeDefinitionIndex = 35695;

	template <typename T>
	class HashOf_1 : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_Value()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HashOf_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

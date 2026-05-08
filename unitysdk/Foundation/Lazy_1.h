#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int Lazy_1_TypeDefinitionIndex = 8082;

	template <typename T>
	class Lazy_1 : public ::System::Object
	{
	public:
		static T* StaticGet__value()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(Lazy_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

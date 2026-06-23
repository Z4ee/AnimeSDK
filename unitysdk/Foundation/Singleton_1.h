#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int Singleton_1_TypeDefinitionIndex = 7870;

	template <typename T>
	class Singleton_1 : public ::System::Object
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(Singleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

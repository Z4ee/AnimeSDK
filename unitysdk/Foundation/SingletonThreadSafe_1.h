#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int SingletonThreadSafe_1_TypeDefinitionIndex = 8054;

	template <typename T>
	class SingletonThreadSafe_1 : public ::System::Object
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(SingletonThreadSafe_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet__syncLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SingletonThreadSafe_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

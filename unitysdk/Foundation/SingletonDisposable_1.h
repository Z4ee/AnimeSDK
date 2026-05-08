#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int SingletonDisposable_1_TypeDefinitionIndex = 7994;

	template <typename T>
	class SingletonDisposable_1 : public ::System::Object
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(SingletonDisposable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet__instanceDisposed()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SingletonDisposable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

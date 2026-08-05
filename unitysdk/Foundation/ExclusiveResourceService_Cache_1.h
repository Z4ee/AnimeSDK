#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceService_Cache_1_TypeDefinitionIndex = 8894;

	template <typename T>
	class ExclusiveResourceService_Cache_1 : public ::System::Object
	{
	public:
		static T* StaticGet_Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(ExclusiveResourceService_Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

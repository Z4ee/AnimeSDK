#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionaryConfig_TypeDefinitionIndex = 5102;

	class PooledDictionaryConfig : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_PooledDictionary_Clear_Fix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PooledDictionaryConfig_TypeDefinitionIndex)->GetStaticField(0x1860);
		}
	};
}

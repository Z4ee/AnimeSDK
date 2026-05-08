#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int TypeTrait_1_TypeDefinitionIndex = 32433;

	template <typename T>
	class TypeTrait_1 : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet__TypeGUID_k__BackingField()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(TypeTrait_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

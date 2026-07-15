#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { class ReferencePool_ReferenceCollection; }

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_ReferenceCollectionAccessor_1_TypeDefinitionIndex = 5630;

	template <typename T>
	class ReferencePool_ReferenceCollectionAccessor_1 : public ::System::Object
	{
	public:
		static ::RPG::ReferencePool_ReferenceCollection** StaticGet_Get()
		{
			return (::RPG::ReferencePool_ReferenceCollection**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_ReferenceCollectionAccessor_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

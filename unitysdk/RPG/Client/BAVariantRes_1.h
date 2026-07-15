#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BAVariantRes_1_TypeDefinitionIndex = 66388;

	template <typename T>
	struct BAVariantRes_1
	{
		T res; // 0x0
		::System::Int32 refCount; // 0x0
		::System::Single gcTime; // 0x0
		static ::System::Single* StaticGet_gcThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BAVariantRes_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

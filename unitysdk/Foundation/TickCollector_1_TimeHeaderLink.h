#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_TimeHeaderLink_TypeDefinitionIndex = 8523;

	template <typename TTickingGroup>
	struct TickCollector_1_TimeHeaderLink
	{
		::System::Int32 _index; // 0x0
		static ::Foundation::TickCollector_1_TimeHeaderLink<TTickingGroup>* StaticGet_Null()
		{
			return (::Foundation::TickCollector_1_TimeHeaderLink<TTickingGroup>*)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_TimeHeaderLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_NodeLink_TypeDefinitionIndex = 8843;

	template <typename TTickingGroup>
	struct TickCollector_1_NodeLink
	{
		::System::Int32 _index; // 0x0
		static ::Foundation::TickCollector_1_NodeLink<TTickingGroup>* StaticGet_Null()
		{
			return (::Foundation::TickCollector_1_NodeLink<TTickingGroup>*)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_NodeLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

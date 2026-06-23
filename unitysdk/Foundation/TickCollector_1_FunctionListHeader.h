#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickCollector_1_NodeLink.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class TickFunction_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_FunctionListHeader_TypeDefinitionIndex = 8520;

	template <typename TTickingGroup>
	struct TickCollector_1_FunctionListHeader
	{
		::Foundation::TickFunction_1<TTickingGroup>* Function; // 0x0
		::Foundation::TickCollector_1_NodeLink<TTickingGroup> First; // 0x0
		static ::Foundation::TickCollector_1_FunctionListHeader<TTickingGroup>* StaticGet_Null()
		{
			return (::Foundation::TickCollector_1_FunctionListHeader<TTickingGroup>*)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_FunctionListHeader_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

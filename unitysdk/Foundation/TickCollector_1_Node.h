#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickCollector_1_NodeLink.h"
#include "unitysdk/Foundation/TickTime.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class TickFunction_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_Node_TypeDefinitionIndex = 8846;

	template <typename TTickingGroup>
	struct TickCollector_1_Node
	{
		::Foundation::TickTime Time; // 0x0
		::Foundation::TickFunction_1<TTickingGroup>* Function; // 0x0
		::System::Int32 _nodeIndex; // 0x0
		::Foundation::TickCollector_1_NodeLink<TTickingGroup> _PreviousTimeNode_k__BackingField; // 0x0
		::Foundation::TickCollector_1_NodeLink<TTickingGroup> _NextTimeNode_k__BackingField; // 0x0
		::Foundation::TickCollector_1_NodeLink<TTickingGroup> _PreviousFunctionNode_k__BackingField; // 0x0
		::Foundation::TickCollector_1_NodeLink<TTickingGroup> _NextFunctionNode_k__BackingField; // 0x0
		static ::Foundation::TickCollector_1_Node<TTickingGroup>* StaticGet_Null()
		{
			return (::Foundation::TickCollector_1_Node<TTickingGroup>*)Il2CppClass::FromTypeDefinitionIndex(TickCollector_1_Node_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

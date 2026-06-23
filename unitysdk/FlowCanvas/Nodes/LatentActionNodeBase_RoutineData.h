#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ROUTINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4CB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNodeBase_RoutineData_TypeDefinitionIndex = 30234;

	struct alignas(8) LatentActionNodeBase_RoutineData
	{
		::System::Collections::IEnumerator* enumerator; // 0x10
		::FlowCanvas::Flow flow; // 0x18

		::System::Void _ctor(::System::Collections::IEnumerator* enumerator, ::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODEBASE_ROUTINEDATA__CTOR_OFFSET))(this, enumerator, flow);
		}
	};
}

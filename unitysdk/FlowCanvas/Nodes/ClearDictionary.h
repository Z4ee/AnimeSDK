#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System::Collections { class IDictionary; }

#define FLOWCANVAS_NODES_CLEARDICTIONARY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AC470)
#define FLOWCANVAS_NODES_CLEARDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AC540)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ClearDictionary_TypeDefinitionIndex = 27002;

	class ClearDictionary : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Collections::IDictionary*, ::System::Collections::IDictionary*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CLEARDICTIONARY__CTOR_OFFSET))(this);
		}

		::System::Collections::IDictionary* Invoke(::System::Collections::IDictionary* dict)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CLEARDICTIONARY_INVOKE_OFFSET))(this, dict);
		}
	};
}

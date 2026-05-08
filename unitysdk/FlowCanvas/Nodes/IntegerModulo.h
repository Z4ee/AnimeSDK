#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_INTEGERMODULO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F60A0)
#define FLOWCANVAS_NODES_INTEGERMODULO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F60B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerModulo_TypeDefinitionIndex = 27865;

	class IntegerModulo : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERMODULO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 value, ::System::Int32 mod)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERMODULO_INVOKE_OFFSET))(this, value, mod);
		}
	};
}

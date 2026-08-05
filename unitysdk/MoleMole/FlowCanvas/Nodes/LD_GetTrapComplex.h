#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684F7F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1684F980)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTrapComplex_TypeDefinitionIndex = 68291;

	class LD_GetTrapComplex : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX_INVOKE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x125C93B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x125C9550)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetMonsterComplex_TypeDefinitionIndex = 78953;

	class LD_GetMonsterComplex : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX_INVOKE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3FFB084FB2E4C2F3.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BE5620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE5750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedMoveNextTurnUnit_TypeDefinitionIndex = 47681;

	class LDTurnBasedMoveNextTurnUnit : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::Enum_3_3FFB084FB2E4C2F3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT__CTOR_OFFSET))(this);
		}

		::Enum_3_3FFB084FB2E4C2F3 Invoke()
		{
			return ((::Enum_3_3FFB084FB2E4C2F3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDMOVENEXTTURNUNIT_INVOKE_OFFSET))(this);
		}
	};
}

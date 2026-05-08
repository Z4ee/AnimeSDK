#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8AEDFD848EEC981C.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A3B220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3B380)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHandleFollowerGuideState_TypeDefinitionIndex = 46078;

	class LDHandleFollowerGuideState : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::Enum_3_8AEDFD848EEC981C>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::Enum_3_8AEDFD848EEC981C state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_8AEDFD848EEC981C))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHANDLEFOLLOWERGUIDESTATE_INVOKE_OFFSET))(this, state);
		}
	};
}

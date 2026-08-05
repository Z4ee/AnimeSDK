#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B0BC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0BE40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishRatingProgress_TypeDefinitionIndex = 48947;

	class LDGetStylishRatingProgress : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS_INVOKE_OFFSET))(this);
		}
	};
}

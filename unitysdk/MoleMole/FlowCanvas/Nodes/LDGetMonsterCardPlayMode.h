#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B0BB00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0BC40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterCardPlayMode_TypeDefinitionIndex = 83032;

	class LDGetMonsterCardPlayMode : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE_INVOKE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1911C770)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1911C8D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetTheGunScore_TypeDefinitionIndex = 84547;

	class LDGetTheGunScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETTHEGUNSCORE_INVOKE_OFFSET))(this);
		}
	};
}

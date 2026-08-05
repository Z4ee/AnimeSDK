#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DB8C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8CA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BossRushEntityID_TypeDefinitionIndex = 65110;

	class LD_BossRushEntityID : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID_INVOKE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ObjectFunctionNode_1.h"

namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B2E9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2EB90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MonsterCreateData_TypeDefinitionIndex = 69004;

	class LD_MonsterCreateData : public ::MoleMole::FlowCanvas::Nodes::ObjectFunctionNode_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA_REGISTERPORTS_OFFSET))(this);
		}
	};
}

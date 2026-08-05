#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ObjectFunctionNode_1.h"

namespace MoleMole::FlowCanvas::Nodes { class S2TreasureCreateData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149D6710)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x149D6920)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2TreasureCreateData_TypeDefinitionIndex = 81635;

	class LDAbyssS2TreasureCreateData : public ::MoleMole::FlowCanvas::Nodes::ObjectFunctionNode_1<::MoleMole::FlowCanvas::Nodes::S2TreasureCreateData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2TREASURECREATEDATA_REGISTERPORTS_OFFSET))(this);
		}
	};
}

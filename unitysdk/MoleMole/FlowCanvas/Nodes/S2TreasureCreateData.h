#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TreasureCreateData.h"

#define MOLEMOLE_FLOWCANVAS_NODES_S2TREASURECREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14287290)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int S2TreasureCreateData_TypeDefinitionIndex = 82974;

	class S2TreasureCreateData : public ::MoleMole::FlowCanvas::Nodes::TreasureCreateData
	{
	public:
		::System::Int32 areaIndex; // 0x50
		::System::Int32 treasureIndexInArea; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_S2TREASURECREATEDATA__CTOR_OFFSET))(this);
		}
	};
}

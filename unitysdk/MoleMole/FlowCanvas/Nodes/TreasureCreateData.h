#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataBase.h"

#define MOLEMOLE_FLOWCANVAS_NODES_TREASURECREATEDATA_HIDEMONSTERID_OFFSET UNITYSDK_OFFSET(0x18B309C0)
#define MOLEMOLE_FLOWCANVAS_NODES_TREASURECREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B30A00)
#define MOLEMOLE_FLOWCANVAS_NODES_TREASURECREATEDATA___BASE_HIDEMONSTERID_OFFSET UNITYSDK_OFFSET(0x18B30A50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int TreasureCreateData_TypeDefinitionIndex = 42753;

	class TreasureCreateData : public ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase
	{
	public:
		::System::Int32 TreasureID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_TREASURECREATEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean HideMonsterID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_TREASURECREATEDATA_HIDEMONSTERID_OFFSET))(this);
		}

		::System::Boolean __base_HideMonsterID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_TREASURECREATEDATA___BASE_HIDEMONSTERID_OFFSET))(this);
		}
	};
}

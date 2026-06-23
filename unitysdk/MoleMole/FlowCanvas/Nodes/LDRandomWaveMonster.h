#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelZeroWaveMonster.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER_FULLCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x1710BC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1710BBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1710C000)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1710C190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER___BASE_FULLCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x1710C1A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1710C1B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1710C1C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomWaveMonster_TypeDefinitionIndex = 67901;

	class LDRandomWaveMonster : public ::MoleMole::FlowCanvas::Nodes::LDLevelZeroWaveMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* complexRateInput; // 0x1D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void FullCreatedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER_FULLCREATEDLIST_OFFSET))(this);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::System::Void __base_FullCreatedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER___BASE_FULLCREATEDLIST_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTER___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}

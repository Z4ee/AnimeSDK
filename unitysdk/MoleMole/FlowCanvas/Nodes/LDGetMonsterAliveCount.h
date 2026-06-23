#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterPickType.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT_COMPAREMONSTERCAMP_OFFSET UNITYSDK_OFFSET(0x12BB2530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT_GETALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x12BB2740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB23E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB3060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x12BB3130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterAliveCount_TypeDefinitionIndex = 44768;

	class LDGetMonsterAliveCount : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* outPut; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* monstList; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* monsterCampInput; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* input; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* allMonsterInput; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean CompareMonsterCamp(::MoleMole::Battle::Entity* self, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT_COMPAREMONSTERCAMP_OFFSET))(this, self, monster);
		}

		::System::Int32 GetAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT_GETALIVECOUNT_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__5_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERALIVECOUNT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}
	};
}

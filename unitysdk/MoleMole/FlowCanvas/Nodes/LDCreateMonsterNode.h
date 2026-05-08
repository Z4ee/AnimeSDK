#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17801B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x17802650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17802820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x17802840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateMonsterNode_TypeDefinitionIndex = 43166;

	class LDCreateMonsterNode : public ::FlowCanvas::Nodes::CallableFunctionNode_5<::MoleMole::Battle::Entity*, ::System::Int32, ::System::String*, ::MoleMole::Config::CampType, ::MoleMole::FlowCanvas::Nodes::MonsterIDType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::System::Int32 monsterId, ::System::String* spawnPointName, ::MoleMole::Config::CampType camp, ::MoleMole::FlowCanvas::Nodes::MonsterIDType IDType)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Config::CampType, ::MoleMole::FlowCanvas::Nodes::MonsterIDType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_INVOKE_OFFSET))(this, monsterId, spawnPointName, camp, IDType);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}

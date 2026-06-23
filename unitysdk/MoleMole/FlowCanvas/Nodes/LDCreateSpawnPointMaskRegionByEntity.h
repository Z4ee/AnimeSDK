#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGIONBYENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x15111EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGIONBYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x151120E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateSpawnPointMaskRegionByEntity_TypeDefinitionIndex = 59430;

	class LDCreateSpawnPointMaskRegionByEntity : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::SpawnPointMaskRegion>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGIONBYENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* gameObjectName, ::MoleMole::Battle::Entity* entity, ::MoleMole::SpawnPointMaskRegion maskConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::SpawnPointMaskRegion))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGIONBYENTITY_INVOKE_OFFSET))(this, gameObjectName, entity, maskConfig);
		}
	};
}

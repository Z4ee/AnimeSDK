#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_4.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGION_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D6DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x149D7020)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateSpawnPointMaskRegion_TypeDefinitionIndex = 81347;

	class LDCreateSpawnPointMaskRegion : public ::FlowCanvas::Nodes::CallableActionNode_4<::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::SpawnPointMaskRegion>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* gameObjectName, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotationAngle, ::MoleMole::SpawnPointMaskRegion maskConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::SpawnPointMaskRegion))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESPAWNPOINTMASKREGION_INVOKE_OFFSET))(this, gameObjectName, position, rotationAngle, maskConfig);
		}
	};
}

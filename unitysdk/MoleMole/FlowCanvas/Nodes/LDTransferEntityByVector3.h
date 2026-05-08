#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x16044810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x160449F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTransferEntityByVector3_TypeDefinitionIndex = 81895;

	class LDTransferEntityByVector3 : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 targetVector)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3_INVOKE_OFFSET))(this, entity, targetVector);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_DESTROYHOLLOWENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B198D50)
#define MOLEMOLE_FLOWCANVAS_NODES_DESTROYHOLLOWENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B198EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int DestroyHollowEntity_TypeDefinitionIndex = 45133;

	class DestroyHollowEntity : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_DESTROYHOLLOWENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_DESTROYHOLLOWENTITY_INVOKE_OFFSET))(this, entityRuntimeID);
		}
	};
}

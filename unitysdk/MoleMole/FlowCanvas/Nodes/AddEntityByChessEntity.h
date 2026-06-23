#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }

#define MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BAC660)
#define MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAC6D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AddEntityByChessEntity_TypeDefinitionIndex = 71456;

	class AddEntityByChessEntity : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::MoleMole::ChessEntity*, ::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::MoleMole::ChessEntity* entity, ::MoleMole::ChessEntityCollection* entityMap)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY_INVOKE_OFFSET))(this, entity, entityMap);
		}
	};
}

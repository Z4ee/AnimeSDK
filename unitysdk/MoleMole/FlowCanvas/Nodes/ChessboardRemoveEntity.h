#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDREMOVEENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x19119EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDREMOVEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19119F10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardRemoveEntity_TypeDefinitionIndex = 42081;

	class ChessboardRemoveEntity : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDREMOVEENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::MoleMole::ChessEntityCollection* entityMap)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDREMOVEENTITY_INVOKE_OFFSET))(this, chessEntity, entityMap);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_4.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A800F0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x13A80250)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardAddEntity_TypeDefinitionIndex = 76758;

	class ChessboardAddEntity : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_4<::MoleMole::ChessEntity*, ::System::UInt32, ::MoleMole::ChessEntityCollection*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::System::UInt32 id, ::MoleMole::ChessEntityCollection* entityMap, ::System::Boolean skipAddManager)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::UInt32, ::MoleMole::ChessEntityCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY_INVOKE_OFFSET))(this, id, entityMap, skipAddManager);
		}
	};
}

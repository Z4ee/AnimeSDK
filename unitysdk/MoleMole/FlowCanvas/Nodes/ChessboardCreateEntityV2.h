#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_5.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITYV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x125AA9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x125AAB20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCreateEntityV2_TypeDefinitionIndex = 62749;

	class ChessboardCreateEntityV2 : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_5<::MoleMole::ChessEntity*, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::ChessEntityCollection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITYV2__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::System::String* entityKey, ::System::Int32 x, ::System::Int32 y, ::MoleMole::ChessEntityCollection* entityMap)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITYV2_INVOKE_OFFSET))(this, entityKey, x, y, entityMap);
		}
	};
}

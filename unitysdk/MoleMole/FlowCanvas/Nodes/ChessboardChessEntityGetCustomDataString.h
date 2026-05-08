#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x125AA8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x125AA920)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityGetCustomDataString_TypeDefinitionIndex = 72367;

	class ChessboardChessEntityGetCustomDataString : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::String*, ::MoleMole::ChessEntity*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::ChessEntity* chessEntity, ::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING_INVOKE_OFFSET))(this, chessEntity, key);
		}
	};
}

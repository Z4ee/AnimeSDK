#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATASTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DAC0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATASTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAC130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntitySetCustomDataString_TypeDefinitionIndex = 68169;

	class ChessboardChessEntitySetCustomDataString : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::MoleMole::ChessEntity*, ::System::String*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATASTRING__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATASTRING_INVOKE_OFFSET))(this, chessEntity, key, value);
		}
	};
}

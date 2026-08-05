#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATAFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B52BF30)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATAFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52BFB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntitySetCustomDataFloat_TypeDefinitionIndex = 42611;

	class ChessboardChessEntitySetCustomDataFloat : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::MoleMole::ChessEntity*, ::System::String*, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATAFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::System::String* key, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYSETCUSTOMDATAFLOAT_INVOKE_OFFSET))(this, chessEntity, key, value);
		}
	};
}

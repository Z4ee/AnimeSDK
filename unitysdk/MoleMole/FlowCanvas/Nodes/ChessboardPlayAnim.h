#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B0F10)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x118B1060)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPlayAnim_TypeDefinitionIndex = 40510;

	class ChessboardPlayAnim : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* performID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPLAYANIM_INVOKE_OFFSET))(this, performID);
		}
	};
}

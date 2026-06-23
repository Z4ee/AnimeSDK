#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x170FE2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x170FE460)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPiecePlayEffect_TypeDefinitionIndex = 65144;

	class ChessboardPiecePlayEffect : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::String*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* effectPath, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECT_INVOKE_OFFSET))(this, effectPath, index);
		}
	};
}

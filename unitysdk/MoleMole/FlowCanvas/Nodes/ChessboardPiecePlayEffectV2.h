#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x182CE450)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x182CE5E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPiecePlayEffectV2_TypeDefinitionIndex = 80912;

	class ChessboardPiecePlayEffectV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::System::String*, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* effectPath, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYEFFECTV2_INVOKE_OFFSET))(this, effectPath, x, y);
		}
	};
}

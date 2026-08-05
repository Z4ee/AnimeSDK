#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardPlayPostEffect_Config.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x19239140)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x192392D0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardPlayPostEffect_TypeDefinitionIndex = 68136;

	class ChessBoardPlayPostEffect : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config actionConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT_INVOKE_OFFSET))(this, actionConfig);
		}
	};
}

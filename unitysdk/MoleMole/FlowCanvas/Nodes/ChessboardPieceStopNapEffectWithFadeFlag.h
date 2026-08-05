#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1923E180)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1923E230)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPieceStopNapEffectWithFadeFlag_TypeDefinitionIndex = 85920;

	class ChessboardPieceStopNapEffectWithFadeFlag : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::UInt32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 a, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECESTOPNAPEFFECTWITHFADEFLAG_INVOKE_OFFSET))(this, a, b);
		}
	};
}

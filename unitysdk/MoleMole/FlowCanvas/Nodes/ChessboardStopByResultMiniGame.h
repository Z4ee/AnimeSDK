#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"
#include "unitysdk/ProtoScript/EndHollowMiniGameType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPBYRESULTMINIGAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A999D90)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPBYRESULTMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A999F70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardStopByResultMiniGame_TypeDefinitionIndex = 70379;

	class ChessboardStopByResultMiniGame : public ::FlowCanvas::Nodes::CallableActionNode_1<::ProtoScript::EndHollowMiniGameType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPBYRESULTMINIGAME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::ProtoScript::EndHollowMiniGameType result)
		{
			return ((::System::Void(*)(::PVOID, ::ProtoScript::EndHollowMiniGameType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSTOPBYRESULTMINIGAME_INVOKE_OFFSET))(this, result);
		}
	};
}

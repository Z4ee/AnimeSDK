#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B05180)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B05320)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetChessEntityAsPlayer_TypeDefinitionIndex = 59017;

	class HackerGameSetChessEntityAsPlayer : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPLAYER_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}

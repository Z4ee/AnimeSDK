#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C9CC60)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9CCE0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetChessEntityAsPerformEntity_TypeDefinitionIndex = 79702;

	class HackerGameSetChessEntityAsPerformEntity : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETCHESSENTITYASPERFORMENTITY_INVOKE_OFFSET))(this, chessEntity);
		}
	};
}

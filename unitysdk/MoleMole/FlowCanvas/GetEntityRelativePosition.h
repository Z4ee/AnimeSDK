#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Share/GridDir.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_GETENTITYRELATIVEPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A999420)
#define MOLEMOLE_FLOWCANVAS_GETENTITYRELATIVEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A999580)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int GetEntityRelativePosition_TypeDefinitionIndex = 58052;

	class GetEntityRelativePosition : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::ChessEntity*, ::Share::GridDir>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GETENTITYRELATIVEPOSITION__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell Invoke(::MoleMole::ChessEntity* a, ::Share::GridDir b)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::ChessEntity*, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GETENTITYRELATIVEPOSITION_INVOKE_OFFSET))(this, a, b);
		}
	};
}

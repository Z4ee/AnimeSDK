#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_4.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIRV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x12FFE520)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIRV2__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFE870)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessByDirV2_TypeDefinitionIndex = 55235;

	class ChessboardGetChessByDirV2 : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_4<::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::Share::GridDir, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIRV2__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke(::MoleMole::Vector2Int index, ::Share::GridDir dir, ::System::Int32 times)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::MoleMole::Vector2Int, ::Share::GridDir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIRV2_INVOKE_OFFSET))(this, index, dir, times);
		}
	};
}

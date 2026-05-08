#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_3.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYOFFSET_INVOKE_OFFSET UNITYSDK_OFFSET(0x14989650)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x14989750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowGetPositionByOffset_TypeDefinitionIndex = 51298;

	class HollowGetPositionByOffset : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_3<::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYOFFSET__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke(::MoleMole::Vector2Int startIndex, ::MoleMole::Vector2Int offset)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETPOSITIONBYOFFSET_INVOKE_OFFSET))(this, startIndex, offset);
		}
	};
}

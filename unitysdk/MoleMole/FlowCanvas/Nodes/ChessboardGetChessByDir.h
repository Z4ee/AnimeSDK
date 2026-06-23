#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_4.h"
#include "unitysdk/Share/GridDir.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIR_INVOKE_OFFSET UNITYSDK_OFFSET(0x15808EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x15809230)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessByDir_TypeDefinitionIndex = 75966;

	class ChessboardGetChessByDir : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_4<::System::Int32, ::System::Int32, ::Share::GridDir, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIR__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 index, ::Share::GridDir dir, ::System::Int32 times)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Share::GridDir, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSBYDIR_INVOKE_OFFSET))(this, index, dir, times);
		}
	};
}

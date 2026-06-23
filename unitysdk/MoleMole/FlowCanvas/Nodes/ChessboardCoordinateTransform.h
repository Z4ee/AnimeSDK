#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardCoordinateTransform_TransformType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x15808DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x15808E30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCoordinateTransform_TypeDefinitionIndex = 65735;

	class ChessboardCoordinateTransform : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_3<::System::Int32, ::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardCoordinateTransform_TransformType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 sourceIndex, ::MoleMole::FlowCanvas::Nodes::ChessboardCoordinateTransform_TransformType transformType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardCoordinateTransform_TransformType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM_INVOKE_OFFSET))(this, sourceIndex, transformType);
		}
	};
}

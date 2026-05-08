#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCoordinateTransform_TransformType_TypeDefinitionIndex = 54811;

	enum class ChessboardCoordinateTransform_TransformType : ::System::Int32
	{
		RealToLocal = 1,
		LocalToReal = 0,
	};
}

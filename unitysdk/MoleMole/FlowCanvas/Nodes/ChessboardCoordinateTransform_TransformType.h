#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCoordinateTransform_TransformType_TypeDefinitionIndex = 65736;

	enum class ChessboardCoordinateTransform_TransformType : ::System::Int32
	{
		LocalToReal = 0,
		RealToLocal = 1,
	};
}

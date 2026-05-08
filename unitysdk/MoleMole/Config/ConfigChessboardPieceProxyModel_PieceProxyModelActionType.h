#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPieceProxyModel_PieceProxyModelActionType_TypeDefinitionIndex = 42762;

	enum class ConfigChessboardPieceProxyModel_PieceProxyModelActionType : ::System::Int32
	{
		Assign = 2,
		Recycle = 1,
		None = 0,
	};
}

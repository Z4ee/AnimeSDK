#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCalStartIndexNode_CalStartIndexType_TypeDefinitionIndex = 73145;

	enum class ConfigChessboardCalStartIndexNode_CalStartIndexType : ::System::Int32
	{
		PlayerCurIndex = 0,
		NoCustomIndex = 2,
		CustomIndex = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCalStartIndexNode_CalStartIndexType_TypeDefinitionIndex = 71089;

	enum class ConfigChessboardCalStartIndexNode_CalStartIndexType : ::System::Int32
	{
		PlayerCurIndex = 0,
		CustomIndex = 1,
		NoCustomIndex = 2,
	};
}

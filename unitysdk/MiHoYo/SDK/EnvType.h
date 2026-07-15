#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EnvType_TypeDefinitionIndex = 8034;

	enum class EnvType : ::System::Int32
	{
		PROD_CN = 0,
		SANDBOX_CN = 1,
		PROD_OVERSEA = 2,
		SANDBOX_OVERSEA = 3,
		PROD_CN_PRE = 4,
		PROD_OVERSEA_PRE = 5,
		TEST_CN = 6,
		TEST_OVERSEA = 7,
		PET_CN = 8,
		BETA_CN = 9,
		BETA_CN_PRE = 10,
		BETA_OVERSEA = 11,
		PET_OS = 12,
		HOTFIX_CN = 19,
		HOTFIX_OVERSEA = 20,
		AUDIT_CN = 22,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BIGFIXPOINTEXTENSIONS_BIGMUL_OFFSET UNITYSDK_OFFSET(0x179D04B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BigFixPointExtensions_TypeDefinitionIndex = 9393;

	class BigFixPointExtensions : public ::System::Object
	{
	public:
		static ::System::UInt64 BigMul(::System::UInt64 a, ::System::UInt64 b, ::System::UInt64& low)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BIGFIXPOINTEXTENSIONS_BIGMUL_OFFSET))(a, b, low);
		}
	};
}

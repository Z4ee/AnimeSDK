#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_RUBYDEFAULTPARAMS_METHOD_2_3DE3F17C9617DA68_OFFSET UNITYSDK_OFFSET(0x1B926DF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RubyDefaultParams_TypeDefinitionIndex = 41464;

	struct alignas(4) RubyDefaultParams
	{
		// static const ::System::Single DefaultFontScale; // 0x0
		// static const ::System::Single DefaultHeightOffsetRatio; // 0x0
		::System::Single rubyFontScale; // 0x10
		::System::Single rubyHeightOffsetRatio; // 0x14

		static ::MoleMole::Config::RubyDefaultParams Method_2_3DE3F17C9617DA68()
		{
			return ((::MoleMole::Config::RubyDefaultParams(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RUBYDEFAULTPARAMS_METHOD_2_3DE3F17C9617DA68_OFFSET))();
		}
	};
}

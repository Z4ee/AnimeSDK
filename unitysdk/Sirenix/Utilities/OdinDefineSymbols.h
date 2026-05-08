#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_UTILITIES_ODINDEFINESYMBOLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD8710)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int OdinDefineSymbols_TypeDefinitionIndex = 6458;

	class OdinDefineSymbols : public ::System::Object
	{
	public:
		// static const ::System::Boolean SIRENIX_INTERNAL; // 0x0
		// static const ::System::Boolean ODIN_ASSET_STORE; // 0x0
		// static const ::System::Boolean ODIN_TRIAL; // 0x0
		// static const ::System::Boolean ODIN_EDUCATIONAL; // 0x0
		// static const ::System::Boolean ODIN_GAMEJAM; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_ODINDEFINESYMBOLS__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class Assets_ConfigHashSetTrim_TrimCondition; }

#define FOUNDATION_ASSETS_CONFIGHASHSETTRIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA01700)

namespace Foundation
{
	inline static constexpr unsigned int Assets_ConfigHashSetTrim_TypeDefinitionIndex = 8325;

	class Assets_ConfigHashSetTrim : public ::System::Object
	{
	public:
		::System::Boolean enableTrim; // 0x10
		::Foundation::Assets_ConfigHashSetTrim_TrimCondition* trimCountCond; // 0x18
		::Foundation::Assets_ConfigHashSetTrim_TrimCondition* trimRateCond; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONFIGHASHSETTRIM__CTOR_OFFSET))(this);
		}
	};
}

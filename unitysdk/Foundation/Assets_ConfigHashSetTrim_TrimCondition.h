#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Assets_ConfigHashSetTrim_TrimConditionType.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ASSETS_CONFIGHASHSETTRIM_TRIMCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E36FE90)

namespace Foundation
{
	inline static constexpr unsigned int Assets_ConfigHashSetTrim_TrimCondition_TypeDefinitionIndex = 7815;

	class Assets_ConfigHashSetTrim_TrimCondition : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::Foundation::Assets_ConfigHashSetTrim_TrimConditionType conditionType; // 0x14
		::System::Single threshold; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONFIGHASHSETTRIM_TRIMCONDITION__CTOR_OFFSET))(this);
		}
	};
}

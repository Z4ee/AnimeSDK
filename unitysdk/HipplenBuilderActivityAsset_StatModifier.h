#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"

#define HIPPLENBUILDERACTIVITYASSET_STATMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5BE90)

inline static constexpr unsigned int HipplenBuilderActivityAsset_StatModifier_TypeDefinitionIndex = 45431;

class HipplenBuilderActivityAsset_StatModifier : public ::System::Object
{
public:
	::HipplenBuilderStatus_StatType statType; // 0x10
	::System::Int32 increaseAmount; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERACTIVITYASSET_STATMODIFIER__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HIPPLENBUILDERTIMEASSET_TIMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10C29520)

inline static constexpr unsigned int HipplenBuilderTimeAsset_TimeConfig_TypeDefinitionIndex = 38144;

class HipplenBuilderTimeAsset_TimeConfig : public ::System::Object
{
public:
	::System::String* Desc; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTIMEASSET_TIMECONFIG__CTOR_OFFSET))(this);
	}
};

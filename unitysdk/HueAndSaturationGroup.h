#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HueAndSaturation.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HUEANDSATURATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56E560)

inline static constexpr unsigned int HueAndSaturationGroup_TypeDefinitionIndex = 73162;

class HueAndSaturationGroup : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HueAndSaturation>* values; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HUEANDSATURATIONGROUP__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;

#define MONOUITABLESCROLLV2___C__DISPLAYCLASS712_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA8680)
#define MONOUITABLESCROLLV2___C__DISPLAYCLASS712_0__SELECTITEMINNER_B__0_OFFSET UNITYSDK_OFFSET(0x12CA8690)

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass712_0_TypeDefinitionIndex = 69965;

class MonoUITableScrollV2___c__DisplayClass712_0 : public ::System::Object
{
public:
	::MonoUITableScrollV2* __4__this; // 0x10
	::System::Int32 index; // 0x18
	::System::Boolean ignoreClickCb; // 0x1C
	::System::Boolean ignoreSelectCb; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__DISPLAYCLASS712_0__CTOR_OFFSET))(this);
	}

	::System::Void _SelectItemInner_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__DISPLAYCLASS712_0__SELECTITEMINNER_B__0_OFFSET))(this);
	}
};

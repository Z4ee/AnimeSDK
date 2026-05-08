#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;

#define MONOUITABLESCROLLV2___C__DISPLAYCLASS711_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A250B0)
#define MONOUITABLESCROLLV2___C__DISPLAYCLASS711_0__SELECTITEM_B__0_OFFSET UNITYSDK_OFFSET(0x10A250C0)

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass711_0_TypeDefinitionIndex = 54052;

class MonoUITableScrollV2___c__DisplayClass711_0 : public ::System::Object
{
public:
	::MonoUITableScrollV2* __4__this; // 0x10
	::System::Int32 index; // 0x18
	::System::Boolean hasAnim; // 0x1C
	::System::Boolean ignoreClickCb; // 0x1D
	::System::Boolean ignoreSelectCb; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__DISPLAYCLASS711_0__CTOR_OFFSET))(this);
	}

	::System::Void _SelectItem_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__DISPLAYCLASS711_0__SELECTITEM_B__0_OFFSET))(this);
	}
};

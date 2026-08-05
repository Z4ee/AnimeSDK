#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;

#define MONOUITABLESCROLLV2___C__DISPLAYCLASS758_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB7470)
#define MONOUITABLESCROLLV2___C__DISPLAYCLASS758_0__SELECTITEM_B__0_OFFSET UNITYSDK_OFFSET(0x14DB7480)

inline static constexpr unsigned int MonoUITableScrollV2___c__DisplayClass758_0_TypeDefinitionIndex = 75059;

class MonoUITableScrollV2___c__DisplayClass758_0 : public ::System::Object
{
public:
	::MonoUITableScrollV2* __4__this; // 0x10
	::System::Boolean ignoreClickCb; // 0x18
	::System::Boolean hasAnim; // 0x19
	::System::Boolean ignoreSelectCb; // 0x1A
	::System::Int32 index; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__DISPLAYCLASS758_0__CTOR_OFFSET))(this);
	}

	::System::Void _SelectItem_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__DISPLAYCLASS758_0__SELECTITEM_B__0_OFFSET))(this);
	}
};

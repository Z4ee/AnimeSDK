#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/MonoUITableScrollV2_InitScrollViewData_SAlignParam.h"
#include "unitysdk/System/Object.h"

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187C80E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA___C__DISPLAYCLASS2_0__PROCESSALIGNPARAM_B__0_OFFSET UNITYSDK_OFFSET(0x187C80F0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginInitData___c__DisplayClass2_0_TypeDefinitionIndex = 54039;

class MonoUITableScrollV2_TableScrollPluginInitData___c__DisplayClass2_0 : public ::System::Object
{
public:
	::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ProcessAlignParam_b__0(::MonoUITableScrollV2_Data data)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA___C__DISPLAYCLASS2_0__PROCESSALIGNPARAM_B__0_OFFSET))(this, data);
	}
};

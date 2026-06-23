#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_InitScrollViewData_SAlignParam_EMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class Object; }

#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0xFAF2DD0)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_KEEPCUSTOMDATAPOSITION_OFFSET UNITYSDK_OFFSET(0xFAF2CB0)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_KEEPCUSTOMITEMPOSITION_OFFSET UNITYSDK_OFFSET(0xFAF2C10)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_KEEPSELECTEDITEMPOSITION_OFFSET UNITYSDK_OFFSET(0xFAF2B80)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_RESETTOSTART_OFFSET UNITYSDK_OFFSET(0xFAF2D40)

inline static constexpr unsigned int MonoUITableScrollV2_InitScrollViewData_SAlignParam_TypeDefinitionIndex = 69994;

struct alignas(8) MonoUITableScrollV2_InitScrollViewData_SAlignParam
{
	::MonoUITableScrollV2_InitScrollViewData_SAlignParam_EMode Mode; // 0x10
	::System::Object* PivotItemData; // 0x18
	::System::Int32 PivotItemIndex_Old; // 0x20
	::System::Int32 PivotItemIndex_New; // 0x24
	::System::Nullable_1<::UnityEngine::Bounds> PivotItemBounds; // 0x28

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam KeepSelectedItemPosition()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_KEEPSELECTEDITEMPOSITION_OFFSET))();
	}

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam KeepCustomItemPosition(::System::Int32 dataIndex)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_KEEPCUSTOMITEMPOSITION_OFFSET))(dataIndex);
	}

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam KeepCustomDataPosition(::System::Object* pivotItemData)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::System::Object*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_KEEPCUSTOMDATAPOSITION_OFFSET))(pivotItemData);
	}

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam ResetToStart()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_RESETTOSTART_OFFSET))();
	}

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam get_Empty()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SALIGNPARAM_GET_EMPTY_OFFSET))();
	}
};

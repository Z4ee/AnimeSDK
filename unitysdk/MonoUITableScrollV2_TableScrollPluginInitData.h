#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_InitScrollViewData_SAlignParam.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace System::Collections { class IEnumerable; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA_FILLPIVOTBOUNDSBYPIVOT_OFFSET UNITYSDK_OFFSET(0x18E8C660)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA_PROCESSALIGNPARAM_OFFSET UNITYSDK_OFFSET(0x18E8C350)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8C340)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginInitData_TypeDefinitionIndex = 69920;

class MonoUITableScrollV2_TableScrollPluginInitData : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::MonoUITableScrollV2_ScrollParams_AlignParam* AlignParam2; // 0x18
	::MonoUITableScrollV2_InitScrollViewData_SAlignParam AlignParam; // 0x20

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA__CTOR_OFFSET))(this, tableScroll);
	}

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam ProcessAlignParam(::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam, ::System::Collections::IEnumerable* newData, ::MonoUITableScrollV2* scrollView)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::MonoUITableScrollV2_InitScrollViewData_SAlignParam, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA_PROCESSALIGNPARAM_OFFSET))(alignParam, newData, scrollView);
	}

	static ::MonoUITableScrollV2_InitScrollViewData_SAlignParam FillPivotBoundsByPivot(::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam, ::System::Int32 pivotIndex, ::System::Collections::IEnumerable* newData, ::MonoUITableScrollV2* scrollView)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData_SAlignParam(*)(::MonoUITableScrollV2_InitScrollViewData_SAlignParam, ::System::Int32, ::System::Collections::IEnumerable*, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITDATA_FILLPIVOTBOUNDSBYPIVOT_OFFSET))(alignParam, pivotIndex, newData, scrollView);
	}
};

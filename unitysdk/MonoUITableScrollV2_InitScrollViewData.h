#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_InitScrollViewData_SAlignParam.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_GET_PLAYPAGESHOWANIM_OFFSET UNITYSDK_OFFSET(0xEBE2970)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SET_PLAYPAGESHOWANIM_OFFSET UNITYSDK_OFFSET(0xEBE2980)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_WITHALIGNPARAM_OFFSET UNITYSDK_OFFSET(0xEBE28E0)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_WITHPAGESHOWANIM_OFFSET UNITYSDK_OFFSET(0xEBE2890)
#define MONOUITABLESCROLLV2_INITSCROLLVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE26F0)

inline static constexpr unsigned int MonoUITableScrollV2_InitScrollViewData_TypeDefinitionIndex = 54042;

class MonoUITableScrollV2_InitScrollViewData : public ::System::Object
{
public:
	::MonoUITableScrollV2_InitScrollViewData_SAlignParam AlignParam; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* lineSize; // 0x48
	::System::Int32 ScrollToIndex; // 0x50
	::System::Boolean _PlayPageShowAnim_k__BackingField; // 0x54
	::System::Int32 SelectIndex; // 0x58
	::System::Int32 nonEmptyDataCount; // 0x5C

	::System::Void _ctor(::System::Int32 scrollToIndex, ::System::Boolean playPageShowAnim)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA__CTOR_OFFSET))(this, scrollToIndex, playPageShowAnim);
	}

	::MonoUITableScrollV2_InitScrollViewData* WithPageShowAnim(::System::Boolean playPageShowAnim)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_WITHPAGESHOWANIM_OFFSET))(this, playPageShowAnim);
	}

	::MonoUITableScrollV2_InitScrollViewData* WithAlignParam(::MonoUITableScrollV2_InitScrollViewData_SAlignParam alignParam)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID, ::MonoUITableScrollV2_InitScrollViewData_SAlignParam))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_WITHALIGNPARAM_OFFSET))(this, alignParam);
	}

	::System::Boolean get_PlayPageShowAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_GET_PLAYPAGESHOWANIM_OFFSET))(this);
	}

	::System::Void set_PlayPageShowAnim(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_INITSCROLLVIEWDATA_SET_PLAYPAGESHOWANIM_OFFSET))(this, value);
	}
};

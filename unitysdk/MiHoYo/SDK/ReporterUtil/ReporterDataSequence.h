#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/ReporterDataItem_ItemField.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class FulledHandler; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class Analyzer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ADDITEM_OFFSET UNITYSDK_OFFSET(0xB2926E0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ADD_FULLED_OFFSET UNITYSDK_OFFSET(0xB292520)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ANALYZE_OFFSET UNITYSDK_OFFSET(0xB2927F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_BEGIN_OFFSET UNITYSDK_OFFSET(0xB292960)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_CALCULATEAVERAGEVALUE_OFFSET UNITYSDK_OFFSET(0xB292B40)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_CLEARDATAS_OFFSET UNITYSDK_OFFSET(0xB292840)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_END_OFFSET UNITYSDK_OFFSET(0xB290D90)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_ANALYZER_OFFSET UNITYSDK_OFFSET(0xB2921A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_ASCENDINGANALYZE_OFFSET UNITYSDK_OFFSET(0xB292190)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB291170)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_CURRENTITEM_OFFSET UNITYSDK_OFFSET(0xB290F40)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_ITEMDURATIONS_OFFSET UNITYSDK_OFFSET(0xB2921B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB291200)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ITEM_OFFSET UNITYSDK_OFFSET(0xB290EF0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_REMOVE_FULLED_OFFSET UNITYSDK_OFFSET(0xB292580)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_RESETDATA_OFFSET UNITYSDK_OFFSET(0xB2925F0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_SORTITEMS_OFFSET UNITYSDK_OFFSET(0xB292DE0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2925E0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataSequence_TypeDefinitionIndex = 47109;

	class ReporterDataSequence : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultMaxItemsCount = 0x7530; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ReporterUtil::ReporterDataItem*>* items; // 0x10
		::MiHoYo::SDK::ReporterUtil::Analyzer_1<::System::Int64>* analyzer; // 0x18
		::MiHoYo::SDK::ReporterUtil::FulledHandler* onFulled; // 0x20
		::System::Boolean ascendingAnalyze; // 0x28
		::System::Int32 maxItemsCount; // 0x2C

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_AscendingAnalyze()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_ASCENDINGANALYZE_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::Analyzer_1<::System::Int64>* get_Analyzer()
		{
			return ((::MiHoYo::SDK::ReporterUtil::Analyzer_1<::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_ANALYZER_OFFSET))(this);
		}

		::System::Int64 get_TotalMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_TOTALMILLISECONDS_OFFSET))(this);
		}

		::Il2CppArray<::System::Int64>* get_ItemDurations()
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_ITEMDURATIONS_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* get_CurrentItem()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_CURRENTITEM_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_GET_COUNT_OFFSET))(this);
		}

		::System::Void add_Fulled(::MiHoYo::SDK::ReporterUtil::FulledHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::FulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ADD_FULLED_OFFSET))(this, a1);
		}

		::System::Void remove_Fulled(::MiHoYo::SDK::ReporterUtil::FulledHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::FulledHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_REMOVE_FULLED_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Item(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ITEM_OFFSET))(this, a1);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_RESETDATA_OFFSET))(this);
		}

		::System::Void AddItem(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ADDITEM_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Begin(::System::Boolean a1, ::System::Boolean a2, ::System::Nullable_1<::System::DateTime> a3)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_BEGIN_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* End(::System::Nullable_1<::System::DateTime> a1)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_END_OFFSET))(this, a1);
		}

		static ::System::Int32 CalculateAverageValue(::Il2CppArray<::MiHoYo::SDK::ReporterUtil::ReporterDataItem*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::MiHoYo::SDK::ReporterUtil::ReporterDataItem*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_CALCULATEAVERAGEVALUE_OFFSET))(a1, a2, a3);
		}

		::System::Void SortItems(::System::Boolean a1, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_ItemField))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_SORTITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void ClearDatas(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_CLEARDATAS_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* Analyze(::System::Boolean a1)
		{
			return ((::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATASEQUENCE_ANALYZE_OFFSET))(this, a1);
		}
	};
}

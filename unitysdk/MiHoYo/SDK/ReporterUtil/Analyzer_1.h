#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/Analyzer_1_SortAction.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class AvgResult; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int Analyzer_1_TypeDefinitionIndex = 44860;

	template <typename TDataType>
	class Analyzer_1 : public ::System::Object
	{
	public:
		// static const ::System::String* PMin; // 0x0
		// static const ::System::Single PMinV; // 0x0
		// static const ::System::String* PMax; // 0x0
		// static const ::System::Single PMaxV; // 0x0
		// static const ::System::String* P90; // 0x0
		// static const ::System::Single P90V; // 0x0
		// static const ::System::String* P95; // 0x0
		// static const ::System::Single P95V; // 0x0
		// static const ::System::String* P99; // 0x0
		// static const ::System::Single P99V; // 0x0
		// static const ::System::String* Avg99; // 0x0
		// static const ::System::Single Avg99V; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _PX_k__BackingField; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _Avg_k__BackingField; // 0x0
		::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<TDataType>* resultCache; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class AvgResult; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int AnalyzerResult_1_TypeDefinitionIndex = 44865;

	template <typename TDataType>
	class AnalyzerResult_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ReporterUtil::AvgResult*>* _AvgResults_k__BackingField; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, TDataType>* _PxResults_k__BackingField; // 0x0
		::System::Int64 _SamplesCount_k__BackingField; // 0x0
	};
}

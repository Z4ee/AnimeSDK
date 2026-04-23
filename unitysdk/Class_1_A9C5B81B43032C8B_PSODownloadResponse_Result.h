#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class SerializedWarmupPSO;

inline static constexpr unsigned int Class_1_A9C5B81B43032C8B_PSODownloadResponse_Result_TypeDefinitionIndex = 44158;

struct alignas(8) Class_1_A9C5B81B43032C8B_PSODownloadResponse_Result
{
	::Il2CppArray<::SerializedWarmupPSO*>* aggregated_psos_report; // 0x10
	::System::Int32 count; // 0x18
};

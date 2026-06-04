#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class SerializedWarmupPSO;

inline static constexpr unsigned int Class_1_247F37B7AF671735_PSODownloadResponse_Result_TypeDefinitionIndex = 44704;

struct alignas(8) Class_1_247F37B7AF671735_PSODownloadResponse_Result
{
	::Il2CppArray<::SerializedWarmupPSO*>* aggregated_psos_report; // 0x10
	::System::Int32 count; // 0x18
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_0DC8B4C201AFD519.h"
#include "unitysdk/Struct_2_4410677EEF4776E6.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_346961915DAEB39E_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x15A6060)

inline static constexpr unsigned int Struct_2_346961915DAEB39E_TypeDefinitionIndex = 63119;

struct alignas(8) Struct_2_346961915DAEB39E
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::RootMotion::IKJob::IKTransformRef Field_2_2; // 0x18
	::RootMotion::IKJob::IKTransformRef Field_2_3; // 0x28
	::Il2CppArray<::Struct_2_4410677EEF4776E6>* Field_2_4; // 0x38
	::Il2CppArray<::Struct_2_0DC8B4C201AFD519>* Field_2_5; // 0x40

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_346961915DAEB39E_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};

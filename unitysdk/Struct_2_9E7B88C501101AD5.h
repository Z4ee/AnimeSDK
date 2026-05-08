#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define STRUCT_2_9E7B88C501101AD5_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7524A0)
#define STRUCT_2_9E7B88C501101AD5_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7523F0)
#define STRUCT_2_9E7B88C501101AD5_METHOD_2_B0B9835539EEC214_OFFSET UNITYSDK_OFFSET(0x752490)
#define STRUCT_2_9E7B88C501101AD5_METHOD_2_B588007A19E553A3_OFFSET UNITYSDK_OFFSET(0x752520)

inline static constexpr unsigned int Struct_2_9E7B88C501101AD5_TypeDefinitionIndex = 51062;

struct alignas(8) Struct_2_9E7B88C501101AD5
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::Struct_2_E147DFD2A4EE8B0B Field_2_2; // 0x18
	::Struct_2_E147DFD2A4EE8B0B Field_2_3; // 0x30

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_9E7B88C501101AD5_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_B0B9835539EEC214()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E7B88C501101AD5_METHOD_2_B0B9835539EEC214_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E7B88C501101AD5_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_B588007A19E553A3(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_9E7B88C501101AD5_METHOD_2_B588007A19E553A3_OFFSET))(this, a1);
	}
};

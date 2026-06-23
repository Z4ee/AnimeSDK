#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define STRUCT_2_9E7B88C501101AD5_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x86B920)
#define STRUCT_2_9E7B88C501101AD5_METHOD_2_382566E4664B2412_OFFSET UNITYSDK_OFFSET(0x86B910)
#define STRUCT_2_9E7B88C501101AD5_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x86B870)
#define STRUCT_2_9E7B88C501101AD5_METHOD_2_B588007A19E553A3_OFFSET UNITYSDK_OFFSET(0x86B9A0)

inline static constexpr unsigned int Struct_2_9E7B88C501101AD5_TypeDefinitionIndex = 64750;

struct alignas(8) Struct_2_9E7B88C501101AD5
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12
	::Struct_2_174BD6D3EB04B2EE Field_2_3; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_4; // 0x30

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_9E7B88C501101AD5_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_382566E4664B2412()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E7B88C501101AD5_METHOD_2_382566E4664B2412_OFFSET))(this);
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

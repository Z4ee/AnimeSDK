#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define STRUCT_2_B685AD075EE2DFE3_METHOD_2_17BBE0541820B3E2_OFFSET UNITYSDK_OFFSET(0x845A10)
#define STRUCT_2_B685AD075EE2DFE3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x845990)
#define STRUCT_2_B685AD075EE2DFE3_METHOD_2_382566E4664B2412_OFFSET UNITYSDK_OFFSET(0x845980)
#define STRUCT_2_B685AD075EE2DFE3_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x8458E0)

inline static constexpr unsigned int Struct_2_B685AD075EE2DFE3_TypeDefinitionIndex = 82550;

struct alignas(8) Struct_2_B685AD075EE2DFE3
{
	::System::Boolean Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_0; // 0x12
	::Struct_2_174BD6D3EB04B2EE Field_2_7; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_6; // 0x30

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_B685AD075EE2DFE3_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_382566E4664B2412()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B685AD075EE2DFE3_METHOD_2_382566E4664B2412_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B685AD075EE2DFE3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_17BBE0541820B3E2(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_B685AD075EE2DFE3_METHOD_2_17BBE0541820B3E2_OFFSET))(this, a1);
	}
};

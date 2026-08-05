#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1BDCF298D6EFEE00;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_151B8F817F53A5A5_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x872760)
#define STRUCT_2_151B8F817F53A5A5_METHOD_2_A4B564D59107DC5B_OFFSET UNITYSDK_OFFSET(0x872800)
#define STRUCT_2_151B8F817F53A5A5_METHOD_2_F79B3DEC1CAEEE74_OFFSET UNITYSDK_OFFSET(0x872810)

inline static constexpr unsigned int Struct_2_151B8F817F53A5A5_TypeDefinitionIndex = 49114;

struct alignas(8) Struct_2_151B8F817F53A5A5
{
	::System::Int32 Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_0; // 0x20
	::System::Int32 Field_2_7; // 0x38
	::System::Boolean Field_2_6; // 0x3C
	::Class_1_1BDCF298D6EFEE00* Field_2_5; // 0x40

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_151B8F817F53A5A5_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_A4B564D59107DC5B()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_151B8F817F53A5A5_METHOD_2_A4B564D59107DC5B_OFFSET))(this);
	}

	::System::Boolean Method_2_F79B3DEC1CAEEE74(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_151B8F817F53A5A5_METHOD_2_F79B3DEC1CAEEE74_OFFSET))(this, a1);
	}
};

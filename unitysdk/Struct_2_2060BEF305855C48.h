#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1BDCF298D6EFEE00;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_2060BEF305855C48_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x775DA0)
#define STRUCT_2_2060BEF305855C48_METHOD_2_AC3D4F5B260540D8_OFFSET UNITYSDK_OFFSET(0x775E50)
#define STRUCT_2_2060BEF305855C48_METHOD_2_B5086F6C9A8B7182_OFFSET UNITYSDK_OFFSET(0x775E40)

inline static constexpr unsigned int Struct_2_2060BEF305855C48_TypeDefinitionIndex = 83402;

struct alignas(8) Struct_2_2060BEF305855C48
{
	::System::String* Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_1; // 0x20
	::Class_1_1BDCF298D6EFEE00* Field_2_0; // 0x38
	::System::String* Field_2_7; // 0x40
	::System::String* Field_2_6; // 0x48

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_2060BEF305855C48_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_B5086F6C9A8B7182()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2060BEF305855C48_METHOD_2_B5086F6C9A8B7182_OFFSET))(this);
	}

	::System::Boolean Method_2_AC3D4F5B260540D8(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_2060BEF305855C48_METHOD_2_AC3D4F5B260540D8_OFFSET))(this, a1);
	}
};

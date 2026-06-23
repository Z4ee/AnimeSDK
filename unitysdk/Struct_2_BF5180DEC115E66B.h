#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1BDCF298D6EFEE00;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_BF5180DEC115E66B_METHOD_2_95675E121E738E35_OFFSET UNITYSDK_OFFSET(0x764EE0)
#define STRUCT_2_BF5180DEC115E66B_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x764E30)
#define STRUCT_2_BF5180DEC115E66B_METHOD_2_9F910D236502D52E_OFFSET UNITYSDK_OFFSET(0x764ED0)

inline static constexpr unsigned int Struct_2_BF5180DEC115E66B_TypeDefinitionIndex = 69442;

struct alignas(8) Struct_2_BF5180DEC115E66B
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x38
	::System::Boolean Field_2_4; // 0x3C
	::Class_1_1BDCF298D6EFEE00* Field_2_5; // 0x40

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_BF5180DEC115E66B_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_9F910D236502D52E()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BF5180DEC115E66B_METHOD_2_9F910D236502D52E_OFFSET))(this);
	}

	::System::Boolean Method_2_95675E121E738E35(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_BF5180DEC115E66B_METHOD_2_95675E121E738E35_OFFSET))(this, a1);
	}
};

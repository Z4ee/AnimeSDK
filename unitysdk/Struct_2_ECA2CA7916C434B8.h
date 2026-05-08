#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_DDE621197E7DBF92;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_ECA2CA7916C434B8_METHOD_2_5BB6B225FFCDA0BF_OFFSET UNITYSDK_OFFSET(0x7CD460)
#define STRUCT_2_ECA2CA7916C434B8_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7CD3C0)
#define STRUCT_2_ECA2CA7916C434B8_METHOD_2_CA4BE6C7E64D0A7D_OFFSET UNITYSDK_OFFSET(0x7CD470)

inline static constexpr unsigned int Struct_2_ECA2CA7916C434B8_TypeDefinitionIndex = 53547;

struct alignas(8) Struct_2_ECA2CA7916C434B8
{
	::Class_1_DDE621197E7DBF92* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::UnityEngine::Color Field_2_2; // 0x20

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_ECA2CA7916C434B8_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_5BB6B225FFCDA0BF()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ECA2CA7916C434B8_METHOD_2_5BB6B225FFCDA0BF_OFFSET))(this);
	}

	::System::Boolean Method_2_CA4BE6C7E64D0A7D(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_ECA2CA7916C434B8_METHOD_2_CA4BE6C7E64D0A7D_OFFSET))(this, a1);
	}
};

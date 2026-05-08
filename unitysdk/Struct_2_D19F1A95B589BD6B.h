#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_D19F1A95B589BD6B_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7D9BF0)
#define STRUCT_2_D19F1A95B589BD6B_METHOD_2_C14CE3C74061BA70_OFFSET UNITYSDK_OFFSET(0x7D9CA0)
#define STRUCT_2_D19F1A95B589BD6B_METHOD_2_DC80BF2647D4D5F2_OFFSET UNITYSDK_OFFSET(0x7D9C90)

inline static constexpr unsigned int Struct_2_D19F1A95B589BD6B_TypeDefinitionIndex = 43314;

struct alignas(8) Struct_2_D19F1A95B589BD6B
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_D19F1A95B589BD6B_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_DC80BF2647D4D5F2()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D19F1A95B589BD6B_METHOD_2_DC80BF2647D4D5F2_OFFSET))(this);
	}

	::System::Boolean Method_2_C14CE3C74061BA70(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_D19F1A95B589BD6B_METHOD_2_C14CE3C74061BA70_OFFSET))(this, a1);
	}
};

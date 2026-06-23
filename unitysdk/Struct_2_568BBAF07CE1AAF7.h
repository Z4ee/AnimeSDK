#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_568BBAF07CE1AAF7_METHOD_2_70A3CDBA9B3C8E31_OFFSET UNITYSDK_OFFSET(0x7D9530)
#define STRUCT_2_568BBAF07CE1AAF7_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7D9480)
#define STRUCT_2_568BBAF07CE1AAF7_METHOD_2_9FDC8ED350C53037_OFFSET UNITYSDK_OFFSET(0x7D9520)

inline static constexpr unsigned int Struct_2_568BBAF07CE1AAF7_TypeDefinitionIndex = 63888;

struct alignas(8) Struct_2_568BBAF07CE1AAF7
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x38
	::System::Boolean Field_2_4; // 0x3C

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_568BBAF07CE1AAF7_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_9FDC8ED350C53037()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_568BBAF07CE1AAF7_METHOD_2_9FDC8ED350C53037_OFFSET))(this);
	}

	::System::Boolean Method_2_70A3CDBA9B3C8E31(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_568BBAF07CE1AAF7_METHOD_2_70A3CDBA9B3C8E31_OFFSET))(this, a1);
	}
};

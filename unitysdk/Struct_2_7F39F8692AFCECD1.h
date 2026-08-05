#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_7F39F8692AFCECD1_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7FE6A0)
#define STRUCT_2_7F39F8692AFCECD1_METHOD_2_9FDC8ED350C53037_OFFSET UNITYSDK_OFFSET(0x7FE740)
#define STRUCT_2_7F39F8692AFCECD1_METHOD_2_AC3D4F5B260540D8_OFFSET UNITYSDK_OFFSET(0x7FE750)

inline static constexpr unsigned int Struct_2_7F39F8692AFCECD1_TypeDefinitionIndex = 58169;

struct alignas(8) Struct_2_7F39F8692AFCECD1
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::Struct_2_174BD6D3EB04B2EE Field_2_6; // 0x20
	::System::Int32 Field_2_5; // 0x38
	::System::Boolean Field_2_4; // 0x3C

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_7F39F8692AFCECD1_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_9FDC8ED350C53037()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7F39F8692AFCECD1_METHOD_2_9FDC8ED350C53037_OFFSET))(this);
	}

	::System::Boolean Method_2_AC3D4F5B260540D8(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_7F39F8692AFCECD1_METHOD_2_AC3D4F5B260540D8_OFFSET))(this, a1);
	}
};

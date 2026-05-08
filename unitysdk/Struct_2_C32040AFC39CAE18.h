#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE_1.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_C32040AFC39CAE18_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x6CDE00)
#define STRUCT_2_C32040AFC39CAE18_METHOD_2_ACDB83E376AAF997_OFFSET UNITYSDK_OFFSET(0x6CDEB0)
#define STRUCT_2_C32040AFC39CAE18_METHOD_2_DB053779883EFB47_OFFSET UNITYSDK_OFFSET(0x6CDEA0)

inline static constexpr unsigned int Struct_2_C32040AFC39CAE18_TypeDefinitionIndex = 60218;

struct alignas(8) Struct_2_C32040AFC39CAE18
{
	::System::String* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_00CDCC1C68AC93EE>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_00CDCC1C68AC93EE_1>* Field_2_2; // 0x20
	::Struct_2_00CDCC1C68AC93EE Field_2_3; // 0x28
	::Struct_2_00CDCC1C68AC93EE_1 Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_00CDCC1C68AC93EE>* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_00CDCC1C68AC93EE_1>* Field_2_6; // 0x40

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_C32040AFC39CAE18_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_DB053779883EFB47()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C32040AFC39CAE18_METHOD_2_DB053779883EFB47_OFFSET))(this);
	}

	::System::Boolean Method_2_ACDB83E376AAF997(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_C32040AFC39CAE18_METHOD_2_ACDB83E376AAF997_OFFSET))(this, a1);
	}
};

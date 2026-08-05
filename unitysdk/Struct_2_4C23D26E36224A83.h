#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_4C23D26E36224A83_METHOD_2_4E0C664E82C94A31_OFFSET UNITYSDK_OFFSET(0x7D79D0)
#define STRUCT_2_4C23D26E36224A83_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7D7920)
#define STRUCT_2_4C23D26E36224A83_METHOD_2_9F910D236502D52E_OFFSET UNITYSDK_OFFSET(0x7D79C0)

inline static constexpr unsigned int Struct_2_4C23D26E36224A83_TypeDefinitionIndex = 85494;

struct alignas(8) Struct_2_4C23D26E36224A83
{
	::System::Int32 Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::String* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x28

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_4C23D26E36224A83_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_9F910D236502D52E()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4C23D26E36224A83_METHOD_2_9F910D236502D52E_OFFSET))(this);
	}

	::System::Boolean Method_2_4E0C664E82C94A31(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_4C23D26E36224A83_METHOD_2_4E0C664E82C94A31_OFFSET))(this, a1);
	}
};

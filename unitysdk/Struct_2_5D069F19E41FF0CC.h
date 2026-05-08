#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_660F95CEC872AC05.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_5D069F19E41FF0CC_METHOD_2_98F62291C5B80C80_OFFSET UNITYSDK_OFFSET(0x705DF0)
#define STRUCT_2_5D069F19E41FF0CC_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x705D50)
#define STRUCT_2_5D069F19E41FF0CC_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x705E00)
#define STRUCT_2_5D069F19E41FF0CC_METHOD_2_CA4BE6C7E64D0A7D_OFFSET UNITYSDK_OFFSET(0x705E70)

inline static constexpr unsigned int Struct_2_5D069F19E41FF0CC_TypeDefinitionIndex = 42510;

struct alignas(8) Struct_2_5D069F19E41FF0CC
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_660F95CEC872AC05>* Field_2_3; // 0x20

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_5D069F19E41FF0CC_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_98F62291C5B80C80()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D069F19E41FF0CC_METHOD_2_98F62291C5B80C80_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D069F19E41FF0CC_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_CA4BE6C7E64D0A7D(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_5D069F19E41FF0CC_METHOD_2_CA4BE6C7E64D0A7D_OFFSET))(this, a1);
	}
};

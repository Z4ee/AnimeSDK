#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define STRUCT_2_00CDCC1C68AC93EE_1_METHOD_2_20A5465563DAD1F8_OFFSET UNITYSDK_OFFSET(0x770760)
#define STRUCT_2_00CDCC1C68AC93EE_1_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x7706C0)
#define STRUCT_2_00CDCC1C68AC93EE_1_METHOD_2_C14CE3C74061BA70_OFFSET UNITYSDK_OFFSET(0x770770)

inline static constexpr unsigned int Struct_2_00CDCC1C68AC93EE_1_TypeDefinitionIndex = 53152;

struct alignas(4) Struct_2_00CDCC1C68AC93EE_1
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_00CDCC1C68AC93EE_1_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_20A5465563DAD1F8()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_00CDCC1C68AC93EE_1_METHOD_2_20A5465563DAD1F8_OFFSET))(this);
	}

	::System::Boolean Method_2_C14CE3C74061BA70(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_00CDCC1C68AC93EE_1_METHOD_2_C14CE3C74061BA70_OFFSET))(this, a1);
	}
};

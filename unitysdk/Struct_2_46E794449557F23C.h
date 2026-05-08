#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_46E794449557F23C_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define STRUCT_2_46E794449557F23C_METHOD_2_5B1195328D1AC9C9_OFFSET UNITYSDK_OFFSET(0x740C20)
#define STRUCT_2_46E794449557F23C_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define STRUCT_2_46E794449557F23C_METHOD_2_98BF8FC1F4CFC3DE_OFFSET UNITYSDK_OFFSET(0x740BD0)
#define STRUCT_2_46E794449557F23C_METHOD_2_FC0D36A5E41B2651_OFFSET UNITYSDK_OFFSET(0x740BC0)
#define STRUCT_2_46E794449557F23C__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

inline static constexpr unsigned int Struct_2_46E794449557F23C_TypeDefinitionIndex = 70133;

struct alignas(8) Struct_2_46E794449557F23C
{
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_46E794449557F23C__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_46E794449557F23C_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_46E794449557F23C_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FC0D36A5E41B2651(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_46E794449557F23C_METHOD_2_FC0D36A5E41B2651_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_98BF8FC1F4CFC3DE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_46E794449557F23C_METHOD_2_98BF8FC1F4CFC3DE_OFFSET))(this);
	}

	::System::Void Method_2_5B1195328D1AC9C9(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_46E794449557F23C_METHOD_2_5B1195328D1AC9C9_OFFSET))(this, a1);
	}
};

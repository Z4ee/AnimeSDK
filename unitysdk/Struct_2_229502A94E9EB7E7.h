#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_229502A94E9EB7E7_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x9AE6C0)
#define STRUCT_2_229502A94E9EB7E7_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define STRUCT_2_229502A94E9EB7E7_METHOD_2_D63AC6AF97004AA8_OFFSET UNITYSDK_OFFSET(0x9AE710)
#define STRUCT_2_229502A94E9EB7E7_METHOD_2_E2A9F954D386E098_OFFSET UNITYSDK_OFFSET(0x9AE720)

inline static constexpr unsigned int Struct_2_229502A94E9EB7E7_TypeDefinitionIndex = 51471;

struct alignas(8) Struct_2_229502A94E9EB7E7
{
	::Struct_2_174BD6D3EB04B2EE Field_2_0; // 0x10
	::Struct_2_46E794449557F23C Field_2_1; // 0x28

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_229502A94E9EB7E7_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_229502A94E9EB7E7_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D63AC6AF97004AA8(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_229502A94E9EB7E7_METHOD_2_D63AC6AF97004AA8_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_E2A9F954D386E098()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_229502A94E9EB7E7_METHOD_2_E2A9F954D386E098_OFFSET))(this);
	}
};

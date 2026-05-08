#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_229502A94E9EB7E7_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x792C70)
#define STRUCT_2_229502A94E9EB7E7_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x28E6B0)
#define STRUCT_2_229502A94E9EB7E7_METHOD_2_D63AC6AF97004AA8_OFFSET UNITYSDK_OFFSET(0x792CC0)
#define STRUCT_2_229502A94E9EB7E7_METHOD_2_DBA643F68876B17B_OFFSET UNITYSDK_OFFSET(0x792CD0)

inline static constexpr unsigned int Struct_2_229502A94E9EB7E7_TypeDefinitionIndex = 57101;

struct alignas(8) Struct_2_229502A94E9EB7E7
{
	::Struct_2_E147DFD2A4EE8B0B Field_2_0; // 0x10
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

	::SimpleJSON::JSONNode* Method_2_DBA643F68876B17B()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_229502A94E9EB7E7_METHOD_2_DBA643F68876B17B_OFFSET))(this);
	}
};

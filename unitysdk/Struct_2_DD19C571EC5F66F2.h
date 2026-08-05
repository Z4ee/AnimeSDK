#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_DD19C571EC5F66F2_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x7DF7A0)
#define STRUCT_2_DD19C571EC5F66F2_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_DD19C571EC5F66F2_METHOD_2_AAE7C0EE6C94CDF6_OFFSET UNITYSDK_OFFSET(0x7DF810)
#define STRUCT_2_DD19C571EC5F66F2_METHOD_2_B78463CB26497762_OFFSET UNITYSDK_OFFSET(0x7DF800)
#define STRUCT_2_DD19C571EC5F66F2__CTOR_OFFSET UNITYSDK_OFFSET(0x7DF7F0)

inline static constexpr unsigned int Struct_2_DD19C571EC5F66F2_TypeDefinitionIndex = 53043;

struct alignas(8) Struct_2_DD19C571EC5F66F2
{
	::System::Boolean Field_2_1; // 0x10
	::Struct_2_46E794449557F23C Field_2_0; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DD19C571EC5F66F2__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DD19C571EC5F66F2_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DD19C571EC5F66F2_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B78463CB26497762(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_DD19C571EC5F66F2_METHOD_2_B78463CB26497762_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_AAE7C0EE6C94CDF6()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DD19C571EC5F66F2_METHOD_2_AAE7C0EE6C94CDF6_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_51A0658002A5A70C_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x80BA20)
#define STRUCT_2_51A0658002A5A70C_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_51A0658002A5A70C_METHOD_2_6735AEE621FB3C09_OFFSET UNITYSDK_OFFSET(0x80BA80)
#define STRUCT_2_51A0658002A5A70C_METHOD_2_AAE7C0EE6C94CDF6_OFFSET UNITYSDK_OFFSET(0x80BA90)
#define STRUCT_2_51A0658002A5A70C__CTOR_OFFSET UNITYSDK_OFFSET(0x80BA70)

inline static constexpr unsigned int Struct_2_51A0658002A5A70C_TypeDefinitionIndex = 54018;

struct alignas(8) Struct_2_51A0658002A5A70C
{
	::System::Boolean Field_2_0; // 0x10
	::Struct_2_46E794449557F23C Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_51A0658002A5A70C__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_51A0658002A5A70C_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_51A0658002A5A70C_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6735AEE621FB3C09(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_51A0658002A5A70C_METHOD_2_6735AEE621FB3C09_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_AAE7C0EE6C94CDF6()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_51A0658002A5A70C_METHOD_2_AAE7C0EE6C94CDF6_OFFSET))(this);
	}
};

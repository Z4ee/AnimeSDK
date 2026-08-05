#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_268.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_684.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_37C94C86ECA05C77_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19DDD100)
#define CLASS_2_37C94C86ECA05C77__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDD0F0)

inline static constexpr unsigned int Class_2_37C94C86ECA05C77_TypeDefinitionIndex = 12896;

class Class_2_37C94C86ECA05C77 : public ::Class_1_5DA2E7556103D5A3_268
{
public:
	::System::String* Field_2_2; // 0xE0
	::System::Int32 Field_2_0; // 0xE8
	::System::Int32 Field_2_1; // 0xEC

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_684 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_684, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_37C94C86ECA05C77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37C94C86ECA05C77_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};

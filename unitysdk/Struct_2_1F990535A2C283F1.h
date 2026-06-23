#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_91;
class Class_1_64FA72CEAB1AF5ED;

#define STRUCT_2_1F990535A2C283F1_METHOD_2_666DB8F61EB9B288_OFFSET UNITYSDK_OFFSET(0xA64D00)
#define STRUCT_2_1F990535A2C283F1_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0xA64D60)

inline static constexpr unsigned int Struct_2_1F990535A2C283F1_TypeDefinitionIndex = 28992;

struct alignas(8) Struct_2_1F990535A2C283F1
{
	::Class_1_64FA72CEAB1AF5ED* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_91* Field_2_2; // 0x20

	::System::Boolean Method_2_666DB8F61EB9B288(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1F990535A2C283F1_METHOD_2_666DB8F61EB9B288_OFFSET))(this, a1);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1F990535A2C283F1_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}
};

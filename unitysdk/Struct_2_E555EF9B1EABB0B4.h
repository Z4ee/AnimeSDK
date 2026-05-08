#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D7A4383942F4C6E7.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E555EF9B1EABB0B4_METHOD_2_0DF1A33BA5CABE69_1_OFFSET UNITYSDK_OFFSET(0x5DF840)
#define STRUCT_2_E555EF9B1EABB0B4_METHOD_2_0DF1A33BA5CABE69_OFFSET UNITYSDK_OFFSET(0x5DF7A0)

inline static constexpr unsigned int Struct_2_E555EF9B1EABB0B4_TypeDefinitionIndex = 76925;

struct alignas(4) Struct_2_E555EF9B1EABB0B4
{
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::Enum_3_D7A4383942F4C6E7 Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x24

	::System::Void Method_2_0DF1A33BA5CABE69(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::Enum_3_D7A4383942F4C6E7 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::Enum_3_D7A4383942F4C6E7, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E555EF9B1EABB0B4_METHOD_2_0DF1A33BA5CABE69_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0DF1A33BA5CABE69_1(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::Enum_3_D7A4383942F4C6E7 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::Enum_3_D7A4383942F4C6E7, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E555EF9B1EABB0B4_METHOD_2_0DF1A33BA5CABE69_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCD13CF36787C336.h"

class Class_1_2E44A17C1AB85015;
class Class_1_F9AE7AA9DD8A83B5;
class Class_2_A1F69E2229E56CFE;

#define CLASS_2_41B6E20273B4082B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD9FC1B0)
#define CLASS_2_41B6E20273B4082B__CTOR_OFFSET UNITYSDK_OFFSET(0xD9FC260)
#define CLASS_2_41B6E20273B4082B___IFIXBASEPROXY_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD9FC270)

inline static constexpr unsigned int Class_2_41B6E20273B4082B_TypeDefinitionIndex = 50047;

class Class_2_41B6E20273B4082B : public ::Class_1_BCD13CF36787C336
{
public:
	::Il2CppArray<::Class_1_F9AE7AA9DD8A83B5*>* Field_2_0; // 0x20
	::Il2CppArray<::Class_1_2E44A17C1AB85015*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41B6E20273B4082B__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_41B6E20273B4082B_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Execute(::Class_2_A1F69E2229E56CFE* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_2_41B6E20273B4082B___IFIXBASEPROXY_EXECUTE_OFFSET))(this, P0);
	}
};

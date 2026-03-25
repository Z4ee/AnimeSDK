#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_E1DC3D0DDD796244;

#define CLASS_2_EF45EF77E797A450_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167C2780)
#define CLASS_2_EF45EF77E797A450_METHOD_2_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x167C28D0)
#define CLASS_2_EF45EF77E797A450_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x167C3490)
#define CLASS_2_EF45EF77E797A450_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x167C3500)
#define CLASS_2_EF45EF77E797A450_METHOD_2_A913C7AA4DDC5C98_OFFSET UNITYSDK_OFFSET(0x167C3140)
#define CLASS_2_EF45EF77E797A450__CTOR_OFFSET UNITYSDK_OFFSET(0x167C2770)
#define CLASS_2_EF45EF77E797A450___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167C3430)

inline static constexpr unsigned int Class_2_EF45EF77E797A450_TypeDefinitionIndex = 32941;

class Class_2_EF45EF77E797A450 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_E1DC3D0DDD796244* Field_2_2; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450_METHOD_2_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void Method_2_A913C7AA4DDC5C98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450_METHOD_2_A913C7AA4DDC5C98_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF45EF77E797A450_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};

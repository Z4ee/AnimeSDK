#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_C648162BDF7B464B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C10AC0)
#define CLASS_2_C648162BDF7B464B_METHOD_2_3AB4010736FA63A8_OFFSET UNITYSDK_OFFSET(0x18C11880)
#define CLASS_2_C648162BDF7B464B_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18C11F00)
#define CLASS_2_C648162BDF7B464B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18C11EA0)
#define CLASS_2_C648162BDF7B464B_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x18C10B70)
#define CLASS_2_C648162BDF7B464B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C11DE0)
#define CLASS_2_C648162BDF7B464B__CTOR_OFFSET UNITYSDK_OFFSET(0x18C10AB0)
#define CLASS_2_C648162BDF7B464B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C11E40)

inline static constexpr unsigned int Class_2_C648162BDF7B464B_TypeDefinitionIndex = 39493;

class Class_2_C648162BDF7B464B : public ::Class_1_5BE136E515AF9A61_1
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C648162BDF7B464B_TypeDefinitionIndex)->GetStaticField(0xC970);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C648162BDF7B464B_TypeDefinitionIndex)->GetStaticField(0xC974);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C648162BDF7B464B_TypeDefinitionIndex)->GetStaticField(0xC978);
	}
	::Class_2_037EA204E69EBC75* Field_2_3; // 0x18
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_3AB4010736FA63A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_METHOD_2_3AB4010736FA63A8_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C648162BDF7B464B_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};

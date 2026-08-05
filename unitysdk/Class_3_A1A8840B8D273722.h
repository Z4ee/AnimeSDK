#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_0060A69651D32571;

#define CLASS_3_A1A8840B8D273722_METHOD_3_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x178EE2D0)
#define CLASS_3_A1A8840B8D273722_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x178F3960)
#define CLASS_3_A1A8840B8D273722_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x178F39F0)
#define CLASS_3_A1A8840B8D273722_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x178F38D0)
#define CLASS_3_A1A8840B8D273722_METHOD_3_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x178EE240)
#define CLASS_3_A1A8840B8D273722_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x178EDFD0)
#define CLASS_3_A1A8840B8D273722_START_OFFSET UNITYSDK_OFFSET(0x178EDEC0)
#define CLASS_3_A1A8840B8D273722_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x178EE0E0)
#define CLASS_3_A1A8840B8D273722__CCTOR_OFFSET UNITYSDK_OFFSET(0x178F3850)
#define CLASS_3_A1A8840B8D273722__CTOR_OFFSET UNITYSDK_OFFSET(0x178F3800)

inline static constexpr unsigned int Class_3_A1A8840B8D273722_TypeDefinitionIndex = 48960;

class Class_3_A1A8840B8D273722 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_1_0060A69651D32571** StaticGet_Field_3_6()
	{
		return (::Class_1_0060A69651D32571**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A8840B8D273722_TypeDefinitionIndex)->GetStaticField(0x364A0);
	}
	static ::Class_1_0060A69651D32571** StaticGet_Field_3_7()
	{
		return (::Class_1_0060A69651D32571**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A8840B8D273722_TypeDefinitionIndex)->GetStaticField(0x364A8);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A1A8840B8D273722_TypeDefinitionIndex)->GetStaticField(0xCA20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_ONDESTROY_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_METHOD_3_AE80CBC984AADFD5_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_METHOD_3_F730968E2645E14B_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}
};

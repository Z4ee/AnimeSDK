#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"

class Class_1_EA1FEF8121ADE963;

#define CLASS_2_B62C942A2774BBB8_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17930A60)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x179309D0)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17930830)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17930C00)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_A4ADEEB3FB7DBABB_OFFSET UNITYSDK_OFFSET(0x17930A70)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17930C10)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17930B70)
#define CLASS_2_B62C942A2774BBB8_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17930910)
#define CLASS_2_B62C942A2774BBB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17930950)
#define CLASS_2_B62C942A2774BBB8__CTOR_OFFSET UNITYSDK_OFFSET(0x179309C0)

inline static constexpr unsigned int Class_2_B62C942A2774BBB8_TypeDefinitionIndex = 69707;

class Class_2_B62C942A2774BBB8 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_10 = 0x15; // 0x0
	::Class_1_EA1FEF8121ADE963* Field_2_6; // 0x20
	::System::UInt32 Field_2_1; // 0x28
	::MoleMole::Config::AnimatorGroundHitType Field_2_3; // 0x2C
	::System::Boolean Field_2_7; // 0x30
	::System::Boolean Field_2_9; // 0x31
	::System::Boolean Field_2_8; // 0x32
	::System::UInt32 Field_2_2; // 0x34
	::System::UInt32 Field_2_0; // 0x38
	::MoleMole::Config::AnimatorHitEffect Field_2_4; // 0x3C
	::MoleMole::Config::AnimatorAirHitType Field_2_5; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_EA1FEF8121ADE963* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::Class_1_EA1FEF8121ADE963* Method_2_24748FC20F375725()
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_A4ADEEB3FB7DBABB(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_EA1FEF8121ADE963* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_A4ADEEB3FB7DBABB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B62C942A2774BBB8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};

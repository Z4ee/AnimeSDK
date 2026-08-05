#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_BEADE0D60E8972CC.h"

class Class_2_1F102D37972FE675;

#define CLASS_2_D2635BA9D50B0AA7_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x140AFBC0)
#define CLASS_2_D2635BA9D50B0AA7_METHOD_2_A51229C6A1DD3A8F_OFFSET UNITYSDK_OFFSET(0x140AFC50)
#define CLASS_2_D2635BA9D50B0AA7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140AFCE0)
#define CLASS_2_D2635BA9D50B0AA7__CCTOR_OFFSET UNITYSDK_OFFSET(0x140AFB40)
#define CLASS_2_D2635BA9D50B0AA7__CTOR_OFFSET UNITYSDK_OFFSET(0x140AFBB0)

inline static constexpr unsigned int Class_2_D2635BA9D50B0AA7_TypeDefinitionIndex = 50560;

class Class_2_D2635BA9D50B0AA7 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x85; // 0x0
	::Class_2_1F102D37972FE675* Field_2_6; // 0x20
	::Enum_3_BEADE0D60E8972CC Field_2_5; // 0x28
	::System::Single Field_2_7; // 0x2C
	::System::Single Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D2635BA9D50B0AA7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2635BA9D50B0AA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2635BA9D50B0AA7_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_A51229C6A1DD3A8F(::Class_2_1F102D37972FE675* a1, ::System::Single a2, ::System::Single a3, ::Enum_3_BEADE0D60E8972CC a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1F102D37972FE675*, ::System::Single, ::System::Single, ::Enum_3_BEADE0D60E8972CC))((::PBYTE)hIl2Cpp + CLASS_2_D2635BA9D50B0AA7_METHOD_2_A51229C6A1DD3A8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2635BA9D50B0AA7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

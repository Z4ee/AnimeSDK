#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

class Class_1_C7C8DAC9B7F55F6A;

#define CLASS_2_4E92AFC82E302868_METHOD_2_3B276468AEE2CB47_OFFSET UNITYSDK_OFFSET(0x11426490)
#define CLASS_2_4E92AFC82E302868_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11426260)
#define CLASS_2_4E92AFC82E302868_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11426360)
#define CLASS_2_4E92AFC82E302868_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11426500)
#define CLASS_2_4E92AFC82E302868_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114263F0)
#define CLASS_2_4E92AFC82E302868__CCTOR_OFFSET UNITYSDK_OFFSET(0x114262E0)
#define CLASS_2_4E92AFC82E302868__CTOR_OFFSET UNITYSDK_OFFSET(0x11426350)

inline static constexpr unsigned int Class_2_4E92AFC82E302868_TypeDefinitionIndex = 57229;

class Class_2_4E92AFC82E302868 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x50; // 0x0
	::Class_1_C7C8DAC9B7F55F6A* Field_2_0; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::MoleMole::Config::DamageElementType Field_2_1; // 0x2C
	::System::UInt32 Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3B276468AEE2CB47(::System::UInt32 a1, ::System::UInt32 a2, ::MoleMole::Config::DamageElementType a3, ::Class_1_C7C8DAC9B7F55F6A* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::DamageElementType, ::Class_1_C7C8DAC9B7F55F6A*))((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868_METHOD_2_3B276468AEE2CB47_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E92AFC82E302868_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};

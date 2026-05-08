#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_A25A0C2001E5EE26.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x13DC1DB0)
#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0x13DC1D60)
#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13DC1E40)
#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_7931F9D1EF6DDFAB_OFFSET UNITYSDK_OFFSET(0x13DC1ED0)
#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13DC1D20)
#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x13DC1DA0)
#define CLASS_2_1A855E5EED3B1B47_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13DC1F90)
#define CLASS_2_1A855E5EED3B1B47_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DC1DC0)
#define CLASS_2_1A855E5EED3B1B47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC1E30)

inline static constexpr unsigned int Class_2_1A855E5EED3B1B47_1_TypeDefinitionIndex = 64718;

class Class_2_1A855E5EED3B1B47_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x2F; // 0x0
	::System::Int32 Field_2_1; // 0x20
	::System::Boolean Field_2_3; // 0x24
	::System::Int32 Field_2_2; // 0x28
	::Enum_3_A25A0C2001E5EE26 Field_2_5; // 0x2C
	::System::UInt32 Field_2_4; // 0x30
	::MoleMole::Config::BuffGroupName Field_2_0; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_2_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::Enum_3_A25A0C2001E5EE26 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_A25A0C2001E5EE26(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_A25A0C2001E5EE26 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A25A0C2001E5EE26))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_7931F9D1EF6DDFAB(::MoleMole::Config::BuffGroupName a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_7931F9D1EF6DDFAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

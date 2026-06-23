#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

#define CLASS_2_1A855E5EED3B1B47_METHOD_2_41F8B8ACD2DFAAFE_OFFSET UNITYSDK_OFFSET(0x13D8DA90)
#define CLASS_2_1A855E5EED3B1B47_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13D8DB50)
#define CLASS_2_1A855E5EED3B1B47_METHOD_2_7931F9D1EF6DDFAB_OFFSET UNITYSDK_OFFSET(0x13D8DBE0)
#define CLASS_2_1A855E5EED3B1B47_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13D8DA50)
#define CLASS_2_1A855E5EED3B1B47_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D8DCA0)
#define CLASS_2_1A855E5EED3B1B47__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D8DAD0)
#define CLASS_2_1A855E5EED3B1B47__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8DB40)

inline static constexpr unsigned int Class_2_1A855E5EED3B1B47_TypeDefinitionIndex = 51705;

class Class_2_1A855E5EED3B1B47 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_5 = 0x34; // 0x0
	::System::Boolean Field_2_3; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::UInt32 Field_2_4; // 0x28
	::System::Int32 Field_2_1; // 0x2C
	::MoleMole::Config::BuffGroupName Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName Method_2_41F8B8ACD2DFAAFE()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_METHOD_2_41F8B8ACD2DFAAFE_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_7931F9D1EF6DDFAB(::MoleMole::Config::BuffGroupName a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_METHOD_2_7931F9D1EF6DDFAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A855E5EED3B1B47_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

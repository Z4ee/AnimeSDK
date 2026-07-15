#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_C2B49E90129CF714_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x169627C0)
#define CLASS_2_C2B49E90129CF714_METHOD_2_F93FC5F9E2C060FD_OFFSET UNITYSDK_OFFSET(0x16962890)
#define CLASS_2_C2B49E90129CF714__CTOR_OFFSET UNITYSDK_OFFSET(0x169629F0)

inline static constexpr unsigned int Class_2_C2B49E90129CF714_TypeDefinitionIndex = 73153;

class Class_2_C2B49E90129CF714 : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B49E90129CF714__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B49E90129CF714_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_F93FC5F9E2C060FD(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B49E90129CF714_METHOD_2_F93FC5F9E2C060FD_OFFSET))(this, a1);
	}
};

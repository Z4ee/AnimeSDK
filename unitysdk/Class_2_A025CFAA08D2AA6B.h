#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5C63A7A740BFBD0.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_5FA9CCDDD9957726;

#define CLASS_2_A025CFAA08D2AA6B_METHOD_2_170382EE81B6126F_OFFSET UNITYSDK_OFFSET(0xD0B7D90)
#define CLASS_2_A025CFAA08D2AA6B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD0B8180)
#define CLASS_2_A025CFAA08D2AA6B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0B8210)
#define CLASS_2_A025CFAA08D2AA6B__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B8200)

inline static constexpr unsigned int Class_2_A025CFAA08D2AA6B_TypeDefinitionIndex = 80484;

class Class_2_A025CFAA08D2AA6B : public ::Class_1_A5C63A7A740BFBD0
{
public:
	::Class_1_5FA9CCDDD9957726* Field_2_1; // 0x20
	::MoleMole::Config::EntityType Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A025CFAA08D2AA6B__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_170382EE81B6126F()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A025CFAA08D2AA6B_METHOD_2_170382EE81B6126F_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A025CFAA08D2AA6B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A025CFAA08D2AA6B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

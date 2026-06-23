#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38EE0169AA9CE03E;

#define CLASS_1_F0F4CC6B86E3E627_METHOD_1_6F2375DB88761C4E_OFFSET UNITYSDK_OFFSET(0x116E3220)
#define CLASS_1_F0F4CC6B86E3E627_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116E32B0)
#define CLASS_1_F0F4CC6B86E3E627__CTOR_OFFSET UNITYSDK_OFFSET(0x116E3300)

inline static constexpr unsigned int Class_1_F0F4CC6B86E3E627_TypeDefinitionIndex = 85901;

class Class_1_F0F4CC6B86E3E627 : public ::System::Object
{
public:
	::Class_1_38EE0169AA9CE03E* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0F4CC6B86E3E627__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F2375DB88761C4E(::Class_1_38EE0169AA9CE03E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38EE0169AA9CE03E*))((::PBYTE)hIl2Cpp + CLASS_1_F0F4CC6B86E3E627_METHOD_1_6F2375DB88761C4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0F4CC6B86E3E627_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

#define CLASS_3_DE76684CCE25F60D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B07A20)
#define CLASS_3_DE76684CCE25F60D_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x15B077E0)
#define CLASS_3_DE76684CCE25F60D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B079D0)

inline static constexpr unsigned int Class_3_DE76684CCE25F60D_TypeDefinitionIndex = 82680;

class Class_3_DE76684CCE25F60D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE76684CCE25F60D__CTOR_OFFSET))(this);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE76684CCE25F60D_POSTSIMULATIONUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE76684CCE25F60D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

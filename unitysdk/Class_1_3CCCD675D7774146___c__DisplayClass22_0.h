#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C9C40)
#define CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS22_0__GETROLEBYID_B__0_OFFSET UNITYSDK_OFFSET(0xA7CAF10)

inline static constexpr unsigned int Class_1_3CCCD675D7774146___c__DisplayClass22_0_TypeDefinitionIndex = 59536;

class Class_1_3CCCD675D7774146___c__DisplayClass22_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRoleByID_b__0(::Class_2_181F61C600ECA68B* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS22_0__GETROLEBYID_B__0_OFFSET))(this, x);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181F61C600ECA68B;

#define CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C9AA0)
#define CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS21_0__GETRECOMMENDEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0xA7CAEF0)

inline static constexpr unsigned int Class_1_3CCCD675D7774146___c__DisplayClass21_0_TypeDefinitionIndex = 59535;

class Class_1_3CCCD675D7774146___c__DisplayClass21_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetRecommendEquips_b__0(::Class_2_181F61C600ECA68B* role)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + CLASS_1_3CCCD675D7774146___C__DISPLAYCLASS21_0__GETRECOMMENDEQUIPS_B__0_OFFSET))(this, role);
	}
};

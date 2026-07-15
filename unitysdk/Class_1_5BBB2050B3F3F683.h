#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_5BBB2050B3F3F683_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16EA6680)
#define CLASS_1_5BBB2050B3F3F683_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x16EA6670)
#define CLASS_1_5BBB2050B3F3F683_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16EA6470)
#define CLASS_1_5BBB2050B3F3F683_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16EA6600)
#define CLASS_1_5BBB2050B3F3F683_METHOD_1_9D6048502FFC8907_OFFSET UNITYSDK_OFFSET(0x16EA63A0)
#define CLASS_1_5BBB2050B3F3F683_METHOD_1_DC59AEFB5515A284_OFFSET UNITYSDK_OFFSET(0x16EA6660)
#define CLASS_1_5BBB2050B3F3F683_ONINIT_OFFSET UNITYSDK_OFFSET(0x16EA6520)
#define CLASS_1_5BBB2050B3F3F683_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x16EA6560)
#define CLASS_1_5BBB2050B3F3F683_TICK_OFFSET UNITYSDK_OFFSET(0x16EA65A0)
#define CLASS_1_5BBB2050B3F3F683__CTOR_OFFSET UNITYSDK_OFFSET(0x16E92BE0)

inline static constexpr unsigned int Class_1_5BBB2050B3F3F683_TypeDefinitionIndex = 55245;

class Class_1_5BBB2050B3F3F683 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9D6048502FFC8907(::RPG::GameCore::GameWorld* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_METHOD_1_9D6048502FFC8907_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_ONUNINIT_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameWorld* Method_1_DC59AEFB5515A284()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_METHOD_1_DC59AEFB5515A284_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BBB2050B3F3F683_GET_NEEDLATEUPDATE_OFFSET))(this);
	}
};

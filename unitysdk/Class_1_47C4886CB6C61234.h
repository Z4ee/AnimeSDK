#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_47C4886CB6C61234_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD15C340)
#define CLASS_1_47C4886CB6C61234_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xD15C330)
#define CLASS_1_47C4886CB6C61234_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD15C2C0)
#define CLASS_1_47C4886CB6C61234_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD15C180)
#define CLASS_1_47C4886CB6C61234_METHOD_1_DC59AEFB5515A284_OFFSET UNITYSDK_OFFSET(0xD15C320)
#define CLASS_1_47C4886CB6C61234_METHOD_1_FE6555F0C90EBC40_OFFSET UNITYSDK_OFFSET(0xD15C110)
#define CLASS_1_47C4886CB6C61234_ONINIT_OFFSET UNITYSDK_OFFSET(0xD15C1E0)
#define CLASS_1_47C4886CB6C61234_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xD15C220)
#define CLASS_1_47C4886CB6C61234_TICK_OFFSET UNITYSDK_OFFSET(0xD15C260)
#define CLASS_1_47C4886CB6C61234__CTOR_OFFSET UNITYSDK_OFFSET(0xD15C350)

inline static constexpr unsigned int Class_1_47C4886CB6C61234_TypeDefinitionIndex = 46622;

class Class_1_47C4886CB6C61234 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FE6555F0C90EBC40(::RPG::GameCore::GameWorld* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_METHOD_1_FE6555F0C90EBC40_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_ONUNINIT_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameWorld* Method_1_DC59AEFB5515A284()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_METHOD_1_DC59AEFB5515A284_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47C4886CB6C61234_GET_NEEDLATEUPDATE_OFFSET))(this);
	}
};

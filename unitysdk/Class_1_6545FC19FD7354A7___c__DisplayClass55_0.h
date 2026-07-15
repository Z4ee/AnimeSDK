#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6545FC19FD7354A7;
namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }

#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFF650)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS55_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x15E16980)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c__DisplayClass55_0_TypeDefinitionIndex = 58001;

class Class_1_6545FC19FD7354A7___c__DisplayClass55_0 : public ::System::Object
{
public:
	::RPG::GameCore::PerformanceDynamicLoadCharacter* param; // 0x10
	::Class_1_6545FC19FD7354A7* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDynamicLoadStoryCharacter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS55_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET))(this);
	}
};

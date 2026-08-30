#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6545FC19FD7354A7;
namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }

#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134FB2E0)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x134FB2F0)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c__DisplayClass59_0_TypeDefinitionIndex = 60823;

class Class_1_6545FC19FD7354A7___c__DisplayClass59_0 : public ::System::Object
{
public:
	::Class_1_6545FC19FD7354A7* __4__this; // 0x10
	::RPG::GameCore::PerformanceDynamicLoadCharacter* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDynamicLoadStoryCharacter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET))(this);
	}
};

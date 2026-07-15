#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6545FC19FD7354A7;
class Class_1_6545FC19FD7354A7_Class_1_95385AF34FE31713;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E00630)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x15E16A30)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__1_OFFSET UNITYSDK_OFFSET(0x15E16A00)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c__DisplayClass59_0_TypeDefinitionIndex = 58002;

class Class_1_6545FC19FD7354A7___c__DisplayClass59_0 : public ::System::Object
{
public:
	::Class_1_6545FC19FD7354A7* __4__this; // 0x10
	::Class_1_6545FC19FD7354A7_Class_1_95385AF34FE31713* character; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStoryCharacter_b__1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__1_OFFSET))(this, a1);
	}

	::System::Void __CreateStoryCharacter_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6545FC19FD7354A7;
class Class_1_6545FC19FD7354A7_Class_1_95385AF34FE31713;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8E140)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x18C8E180)
#define CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__1_OFFSET UNITYSDK_OFFSET(0x18C8E150)

inline static constexpr unsigned int Class_1_6545FC19FD7354A7___c__DisplayClass63_0_TypeDefinitionIndex = 60824;

class Class_1_6545FC19FD7354A7___c__DisplayClass63_0 : public ::System::Object
{
public:
	::Class_1_6545FC19FD7354A7* __4__this; // 0x10
	::Class_1_6545FC19FD7354A7_Class_1_95385AF34FE31713* character; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStoryCharacter_b__1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__1_OFFSET))(this, a1);
	}

	::System::Void __CreateStoryCharacter_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6545FC19FD7354A7___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__0_OFFSET))(this, a1);
	}
};

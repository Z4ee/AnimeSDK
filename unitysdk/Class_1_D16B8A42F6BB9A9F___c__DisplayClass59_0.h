#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D16B8A42F6BB9A9F;
class Class_1_D16B8A42F6BB9A9F_Class_1_95385AF34FE31713;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111B0AE0)
#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x111C5B70)
#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__1_OFFSET UNITYSDK_OFFSET(0x111C5B40)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F___c__DisplayClass59_0_TypeDefinitionIndex = 49196;

class Class_1_D16B8A42F6BB9A9F___c__DisplayClass59_0 : public ::System::Object
{
public:
	::Class_1_D16B8A42F6BB9A9F* __4__this; // 0x10
	::Class_1_D16B8A42F6BB9A9F_Class_1_95385AF34FE31713* character; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStoryCharacter_b__1(::RPG::GameCore::GameEntity* pEntity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__1_OFFSET))(this, pEntity);
	}

	::System::Void __CreateStoryCharacter_b__0(::RPG::GameCore::GameEntity* pEntity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS59_0___CREATESTORYCHARACTER_B__0_OFFSET))(this, pEntity);
	}
};

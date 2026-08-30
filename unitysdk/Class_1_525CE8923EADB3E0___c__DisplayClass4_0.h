#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_525CE8923EADB3E0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class Action; }

#define CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A30920)
#define CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x17A31170)
#define CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__2_OFFSET UNITYSDK_OFFSET(0x17A311C0)

inline static constexpr unsigned int Class_1_525CE8923EADB3E0___c__DisplayClass4_0_TypeDefinitionIndex = 60859;

class Class_1_525CE8923EADB3E0___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Action* onSwitchFinish; // 0x10
	::RPG::GameCore::StoryCharacterRow* playerRow; // 0x18
	::Class_1_525CE8923EADB3E0* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStoryPlayer_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__0_OFFSET))(this, a1);
	}

	::System::Void __CreateStoryPlayer_b__2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__2_OFFSET))(this, a1);
	}
};

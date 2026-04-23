#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_525CE8923EADB3E0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class Action; }

#define CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B15890)
#define CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x12B161A0)
#define CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__2_OFFSET UNITYSDK_OFFSET(0x12B161F0)

inline static constexpr unsigned int Class_1_525CE8923EADB3E0___c__DisplayClass4_0_TypeDefinitionIndex = 56023;

class Class_1_525CE8923EADB3E0___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::GameCore::StoryCharacterRow* playerRow; // 0x10
	::Class_1_525CE8923EADB3E0* __4__this; // 0x18
	::System::Action* onSwitchFinish; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStoryPlayer_b__0(::RPG::GameCore::GameEntity* gameEntity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__0_OFFSET))(this, gameEntity);
	}

	::System::Void __CreateStoryPlayer_b__2(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__DISPLAYCLASS4_0___CREATESTORYPLAYER_B__2_OFFSET))(this, entity);
	}
};

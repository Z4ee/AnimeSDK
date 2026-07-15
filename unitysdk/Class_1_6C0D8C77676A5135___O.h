#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }

inline static constexpr unsigned int Class_1_6C0D8C77676A5135___O_TypeDefinitionIndex = 58436;

class Class_1_6C0D8C77676A5135___O : public ::System::Object
{
public:
	static ::System::Action** StaticGet__2____ShowBattleToMazeTransit()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C0D8C77676A5135___O_TypeDefinitionIndex)->GetStaticField(0x68A60);
	}
	static ::RPG::Client::NotifyHandler** StaticGet__0____OnTansitionFadeInDone()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C0D8C77676A5135___O_TypeDefinitionIndex)->GetStaticField(0x68A68);
	}
	static ::RPG::Client::NotifyHandler** StaticGet__1____OnBattleToMazeTransit()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C0D8C77676A5135___O_TypeDefinitionIndex)->GetStaticField(0x68A70);
	}
};

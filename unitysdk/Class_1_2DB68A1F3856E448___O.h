#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_1_2DB68A1F3856E448___O_TypeDefinitionIndex = 62199;

class Class_1_2DB68A1F3856E448___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__1___OnAdventureHideLoadingPage()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DB68A1F3856E448___O_TypeDefinitionIndex)->GetStaticField(0x6B6D0);
	}
	static ::RPG::Client::NotifyHandler** StaticGet__0___OnAdventureEntered()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2DB68A1F3856E448___O_TypeDefinitionIndex)->GetStaticField(0x6B6D8);
	}
};

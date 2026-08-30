#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_2_913EDB5071198DA2___O_TypeDefinitionIndex = 74108;

class Class_2_913EDB5071198DA2___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__0___StartGame()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_2_913EDB5071198DA2___O_TypeDefinitionIndex)->GetStaticField(0x28520);
	}
};

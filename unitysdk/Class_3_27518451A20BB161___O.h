#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_3_27518451A20BB161___O_TypeDefinitionIndex = 49978;

class Class_3_27518451A20BB161___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__0____OnAdventurePhaseEnd()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161___O_TypeDefinitionIndex)->GetStaticField(0x5A930);
	}
};

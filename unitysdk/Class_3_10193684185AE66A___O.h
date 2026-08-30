#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_3_10193684185AE66A___O_TypeDefinitionIndex = 53021;

class Class_3_10193684185AE66A___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__0____OnAdventurePhaseEnd()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_3_10193684185AE66A___O_TypeDefinitionIndex)->GetStaticField(0x66F00);
	}
};

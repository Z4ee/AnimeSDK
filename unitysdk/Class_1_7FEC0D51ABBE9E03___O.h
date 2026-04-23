#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_1_7FEC0D51ABBE9E03___O_TypeDefinitionIndex = 64031;

class Class_1_7FEC0D51ABBE9E03___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__0____OnMapCreated()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FEC0D51ABBE9E03___O_TypeDefinitionIndex)->GetStaticField(0x6AE90);
	}
};

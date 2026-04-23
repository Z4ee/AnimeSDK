#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_2_6909BB516E50EA23___O_TypeDefinitionIndex = 68314;

class Class_2_6909BB516E50EA23___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__0___StartGame()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6909BB516E50EA23___O_TypeDefinitionIndex)->GetStaticField(0x5F770);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int Class_1_96C82B73FFE758FB___O_TypeDefinitionIndex = 45727;

class Class_1_96C82B73FFE758FB___O : public ::System::Object
{
public:
	static ::RPG::Client::NotifyHandler** StaticGet__0___SyncAllBlocks()
	{
		return (::RPG::Client::NotifyHandler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB___O_TypeDefinitionIndex)->GetStaticField(0x6A4B0);
	}
};

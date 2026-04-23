#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierConfig; }

#define CLASS_1_141F8AE1B2F8DFFF_METHOD_1_84A5457A12274451_OFFSET UNITYSDK_OFFSET(0x8F645C0)

inline static constexpr unsigned int Class_1_141F8AE1B2F8DFFF_TypeDefinitionIndex = 52080;

class Class_1_141F8AE1B2F8DFFF : public ::System::Object
{
public:
	static ::System::Int32 Method_1_84A5457A12274451(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_141F8AE1B2F8DFFF_METHOD_1_84A5457A12274451_OFFSET))(a1);
	}
};

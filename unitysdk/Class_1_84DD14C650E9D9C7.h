#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierConfig; }

#define CLASS_1_84DD14C650E9D9C7_METHOD_1_EA1FDF2EC889C060_OFFSET UNITYSDK_OFFSET(0x10630250)

inline static constexpr unsigned int Class_1_84DD14C650E9D9C7_TypeDefinitionIndex = 52754;

class Class_1_84DD14C650E9D9C7 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_EA1FDF2EC889C060(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_84DD14C650E9D9C7_METHOD_1_EA1FDF2EC889C060_OFFSET))(a1);
	}
};

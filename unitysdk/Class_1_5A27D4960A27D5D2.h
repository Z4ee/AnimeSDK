#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraAbilityPassive; }

#define CLASS_1_5A27D4960A27D5D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16855A20)

inline static constexpr unsigned int Class_1_5A27D4960A27D5D2_TypeDefinitionIndex = 32260;

class Class_1_5A27D4960A27D5D2 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ChimeraAbilityPassive*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A27D4960A27D5D2__CTOR_OFFSET))(this);
	}
};

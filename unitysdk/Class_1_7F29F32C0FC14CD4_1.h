#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaStyleExpChangeParam; }

#define CLASS_1_7F29F32C0FC14CD4_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x9A39EB0)
#define CLASS_1_7F29F32C0FC14CD4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9A39EA0)

inline static constexpr unsigned int Class_1_7F29F32C0FC14CD4_1_TypeDefinitionIndex = 61751;

class Class_1_7F29F32C0FC14CD4_1 : public ::System::Object
{
public:
	::RPG::Client::RogueTournPersonaStyleExpChangeParam* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::RogueTournPersonaStyleExpChangeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaStyleExpChangeParam*))((::PBYTE)hIl2Cpp + CLASS_1_7F29F32C0FC14CD4_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F29F32C0FC14CD4_1_TRIGGERACTION_OFFSET))(this);
	}
};

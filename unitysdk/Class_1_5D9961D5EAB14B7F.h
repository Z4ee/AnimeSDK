#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaStyle; }

#define CLASS_1_5D9961D5EAB14B7F_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x18F13B20)
#define CLASS_1_5D9961D5EAB14B7F_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x18F13AD0)
#define CLASS_1_5D9961D5EAB14B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x18F13AC0)

inline static constexpr unsigned int Class_1_5D9961D5EAB14B7F_TypeDefinitionIndex = 64044;

class Class_1_5D9961D5EAB14B7F : public ::System::Object
{
public:
	::RPG::Client::IRogueTournPersonaStyle* _Style_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::IRogueTournPersonaStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyle*))((::PBYTE)hIl2Cpp + CLASS_1_5D9961D5EAB14B7F__CTOR_OFFSET))(this, a1);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9961D5EAB14B7F_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueTournPersonaStyle* get_Style()
	{
		return ((::RPG::Client::IRogueTournPersonaStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D9961D5EAB14B7F_GET_STYLE_OFFSET))(this);
	}
};

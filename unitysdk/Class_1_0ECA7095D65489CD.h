#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_7;
namespace RPG::Client { class IRogueTournPersonaModifier; }

#define CLASS_1_0ECA7095D65489CD_METHOD_1_C7F35E4A5A66EDC7_OFFSET UNITYSDK_OFFSET(0xE2D48C0)

inline static constexpr unsigned int Class_1_0ECA7095D65489CD_TypeDefinitionIndex = 67696;

class Class_1_0ECA7095D65489CD : public ::System::Object
{
public:
	static ::RPG::Client::IRogueTournPersonaModifier* Method_1_C7F35E4A5A66EDC7(::Class_1_BB4B99DE4C2501EC_7* a1)
	{
		return ((::RPG::Client::IRogueTournPersonaModifier*(*)(::Class_1_BB4B99DE4C2501EC_7*))((::PBYTE)hIl2Cpp + CLASS_1_0ECA7095D65489CD_METHOD_1_C7F35E4A5A66EDC7_OFFSET))(a1);
	}
};

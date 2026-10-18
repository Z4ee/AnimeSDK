#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7BC7BD156CC39DE;
namespace RPG::Client { class IRogueTournPersonaModifier; }

#define CLASS_1_0ECA7095D65489CD_METHOD_1_C7F35E4A5A66EDC7_OFFSET UNITYSDK_OFFSET(0xE25C070)

inline static constexpr unsigned int Class_1_0ECA7095D65489CD_TypeDefinitionIndex = 67698;

class Class_1_0ECA7095D65489CD : public ::System::Object
{
public:
	static ::RPG::Client::IRogueTournPersonaModifier* Method_1_C7F35E4A5A66EDC7(::Class_1_C7BC7BD156CC39DE* a1)
	{
		return ((::RPG::Client::IRogueTournPersonaModifier*(*)(::Class_1_C7BC7BD156CC39DE*))((::PBYTE)hIl2Cpp + CLASS_1_0ECA7095D65489CD_METHOD_1_C7F35E4A5A66EDC7_OFFSET))(a1);
	}
};

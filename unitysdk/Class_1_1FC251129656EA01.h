#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90116BE96AF7B744;
namespace RPG::Client { class RogueGambleBaseFunc; }

#define CLASS_1_1FC251129656EA01_METHOD_1_589210B8A34C3ED3_OFFSET UNITYSDK_OFFSET(0x15670220)

inline static constexpr unsigned int Class_1_1FC251129656EA01_TypeDefinitionIndex = 67225;

class Class_1_1FC251129656EA01 : public ::System::Object
{
public:
	static ::RPG::Client::RogueGambleBaseFunc* Method_1_589210B8A34C3ED3(::Class_1_90116BE96AF7B744* a1)
	{
		return ((::RPG::Client::RogueGambleBaseFunc*(*)(::Class_1_90116BE96AF7B744*))((::PBYTE)hIl2Cpp + CLASS_1_1FC251129656EA01_METHOD_1_589210B8A34C3ED3_OFFSET))(a1);
	}
};

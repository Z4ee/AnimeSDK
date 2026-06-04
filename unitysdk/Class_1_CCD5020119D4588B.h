#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleySpecialOrderTarget; }

#define CLASS_1_CCD5020119D4588B_METHOD_1_ADAE5D515AC304C0_OFFSET UNITYSDK_OFFSET(0x136AF4C0)

inline static constexpr unsigned int Class_1_CCD5020119D4588B_TypeDefinitionIndex = 58251;

class Class_1_CCD5020119D4588B : public ::System::Object
{
public:
	static ::RPG::Client::AlleySpecialOrderTarget* Method_1_ADAE5D515AC304C0(::System::UInt32 a1)
	{
		return ((::RPG::Client::AlleySpecialOrderTarget*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCD5020119D4588B_METHOD_1_ADAE5D515AC304C0_OFFSET))(a1);
	}
};

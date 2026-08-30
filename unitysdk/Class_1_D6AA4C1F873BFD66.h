#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D6AA4C1F873BFD66__CTOR_OFFSET UNITYSDK_OFFSET(0x198DF3A0)

inline static constexpr unsigned int Class_1_D6AA4C1F873BFD66_TypeDefinitionIndex = 79225;

class Class_1_D6AA4C1F873BFD66 : public ::System::Object
{
public:
	::RPG::Client::TextID GBBGMEMBFJA; // 0x10

	::System::Void _ctor(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_D6AA4C1F873BFD66__CTOR_OFFSET))(this, a1);
	}
};

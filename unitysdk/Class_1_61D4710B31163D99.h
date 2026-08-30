#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_61D4710B31163D99__CTOR_OFFSET UNITYSDK_OFFSET(0x161707A0)

inline static constexpr unsigned int Class_1_61D4710B31163D99_TypeDefinitionIndex = 80725;

class Class_1_61D4710B31163D99 : public ::System::Object
{
public:
	::System::String* CKEFIEOGMFE; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* OFLGPHEHLDH; // 0x20
	::System::Boolean ELJBCBOENEI; // 0x28
	::System::Boolean DEHFDFKNAAI; // 0x29
	::System::Boolean BPDIGKDIJKN; // 0x2A
	::System::Boolean IDMJPIPGBOG; // 0x2B
	::System::Int32 ODHDBHBKKJJ; // 0x2C
	::RPG::GameCore::B51RacingContentType LAOACNPDOLD; // 0x30
	::RPG::Client::TextID KOKDCGOMLEA; // 0x38
	::RPG::Client::TextID JOODIHDMDPK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61D4710B31163D99__CTOR_OFFSET))(this);
	}
};

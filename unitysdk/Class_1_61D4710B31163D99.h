#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_61D4710B31163D99__CTOR_OFFSET UNITYSDK_OFFSET(0x164E3DB0)

inline static constexpr unsigned int Class_1_61D4710B31163D99_TypeDefinitionIndex = 82053;

class Class_1_61D4710B31163D99 : public ::System::Object
{
public:
	::System::String* OFLGPHEHLDH; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* CKEFIEOGMFE; // 0x20
	::System::Int32 ODHDBHBKKJJ; // 0x28
	::RPG::GameCore::B51RacingContentType LAOACNPDOLD; // 0x2C
	::System::Boolean IDMJPIPGBOG; // 0x30
	::System::Boolean DEHFDFKNAAI; // 0x31
	::System::Boolean ELJBCBOENEI; // 0x32
	::System::Boolean BPDIGKDIJKN; // 0x33
	::RPG::Client::TextID JOODIHDMDPK; // 0x38
	::RPG::Client::TextID KOKDCGOMLEA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61D4710B31163D99__CTOR_OFFSET))(this);
	}
};

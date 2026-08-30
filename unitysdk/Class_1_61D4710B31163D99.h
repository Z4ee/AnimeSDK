#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_61D4710B31163D99__CTOR_OFFSET UNITYSDK_OFFSET(0x18370B10)

inline static constexpr unsigned int Class_1_61D4710B31163D99_TypeDefinitionIndex = 80724;

class Class_1_61D4710B31163D99 : public ::System::Object
{
public:
	::System::String* CKEFIEOGMFE; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* OFLGPHEHLDH; // 0x20
	::RPG::Client::TextID KOKDCGOMLEA; // 0x28
	::RPG::Client::TextID JOODIHDMDPK; // 0x38
	::System::Int32 ODHDBHBKKJJ; // 0x48
	::RPG::GameCore::B51RacingContentType LAOACNPDOLD; // 0x4C
	::System::Boolean BPDIGKDIJKN; // 0x50
	::System::Boolean IDMJPIPGBOG; // 0x51
	::System::Boolean ELJBCBOENEI; // 0x52
	::System::Boolean DEHFDFKNAAI; // 0x53

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61D4710B31163D99__CTOR_OFFSET))(this);
	}
};

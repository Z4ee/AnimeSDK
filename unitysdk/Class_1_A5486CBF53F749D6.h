#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A5486CBF53F749D6__CTOR_OFFSET UNITYSDK_OFFSET(0x180CF550)

inline static constexpr unsigned int Class_1_A5486CBF53F749D6_TypeDefinitionIndex = 71338;

class Class_1_A5486CBF53F749D6 : public ::System::Object
{
public:
	::System::String* LAJHJAJNFGC; // 0x10
	::RPG::Client::TextID NMMKDFFHOLL; // 0x18
	::System::Boolean DFKJCMCDMEI; // 0x28
	::System::Boolean HLHLJLDBKOI; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5486CBF53F749D6__CTOR_OFFSET))(this);
	}
};

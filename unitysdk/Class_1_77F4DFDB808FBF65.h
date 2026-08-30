#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_77F4DFDB808FBF65__CTOR_OFFSET UNITYSDK_OFFSET(0x16928760)

inline static constexpr unsigned int Class_1_77F4DFDB808FBF65_TypeDefinitionIndex = 72038;

class Class_1_77F4DFDB808FBF65 : public ::System::Object
{
public:
	::System::String* LAJHJAJNFGC; // 0x10
	::RPG::Client::TextID NMMKDFFHOLL; // 0x18
	::RPG::GameCore::FeverTimeToastType FOCIKDIKBGK; // 0x28
	::System::Boolean HLHLJLDBKOI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F4DFDB808FBF65__CTOR_OFFSET))(this);
	}
};

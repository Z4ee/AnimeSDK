#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0AE208E6C65584F0__CTOR_OFFSET UNITYSDK_OFFSET(0x18222D00)

inline static constexpr unsigned int Class_1_0AE208E6C65584F0_TypeDefinitionIndex = 52437;

class Class_1_0AE208E6C65584F0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AE208E6C65584F0__CTOR_OFFSET))(this);
	}
};

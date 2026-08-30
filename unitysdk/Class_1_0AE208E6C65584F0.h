#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_0AE208E6C65584F0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B485E0)

inline static constexpr unsigned int Class_1_0AE208E6C65584F0_TypeDefinitionIndex = 55133;

class Class_1_0AE208E6C65584F0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GKDKCLMLOME; // 0x10
	::RPG::Client::TextID OELMOCMDEJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AE208E6C65584F0__CTOR_OFFSET))(this);
	}
};

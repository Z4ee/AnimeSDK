#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirProjectileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_3B78F953FF4BF71C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C620970)

inline static constexpr unsigned int Class_1_3B78F953FF4BF71C_TypeDefinitionIndex = 42048;

class Class_1_3B78F953FF4BF71C : public ::System::Object
{
public:
	::System::Action* GKOIKCBJICD; // 0x10
	::System::Int32 FOAIMPPILHN; // 0x18
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x1C
	::System::Single DBFNBLDDIEO; // 0x28
	::RPG::Client::LittleGame::PixAir::PixAirProjectileType ALOOCIOKPNL; // 0x2C
	::System::Int32 KAPFPAKBGOK; // 0x30
	::System::Single FKCDDLPIMEI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B78F953FF4BF71C__CTOR_OFFSET))(this);
	}
};

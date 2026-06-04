#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirProjectileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_3B78F953FF4BF71C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4C170)

inline static constexpr unsigned int Class_1_3B78F953FF4BF71C_TypeDefinitionIndex = 40273;

class Class_1_3B78F953FF4BF71C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_5; // 0x28
	::RPG::Client::LittleGame::PixAir::PixAirProjectileType Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B78F953FF4BF71C__CTOR_OFFSET))(this);
	}
};

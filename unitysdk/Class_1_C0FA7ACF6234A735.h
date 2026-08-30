#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_C0FA7ACF6234A735_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x177BA290)
#define CLASS_1_C0FA7ACF6234A735__CTOR_OFFSET UNITYSDK_OFFSET(0x177BA340)

inline static constexpr unsigned int Class_1_C0FA7ACF6234A735_TypeDefinitionIndex = 69526;

class Class_1_C0FA7ACF6234A735 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraNoiseChange* LBGILPDAFBN; // 0x10
	::RPG::Client::CameraNormalConfigData* GKBIFKOLEJF; // 0x18
	::RPG::GameCore::VCameraConfig* FABCCDICDLO; // 0x20
	::RPG::GameCore::TurnState FFNOGLPGGIO; // 0x28
	::System::Boolean EDNMLBJKFEA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0FA7ACF6234A735__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_C0FA7ACF6234A735* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0FA7ACF6234A735*))((::PBYTE)hIl2Cpp + CLASS_1_C0FA7ACF6234A735_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_C0FA7ACF6234A735_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x165679E0)
#define CLASS_1_C0FA7ACF6234A735__CTOR_OFFSET UNITYSDK_OFFSET(0x16567A90)

inline static constexpr unsigned int Class_1_C0FA7ACF6234A735_TypeDefinitionIndex = 69562;

class Class_1_C0FA7ACF6234A735 : public ::System::Object
{
public:
	::RPG::Client::CameraNormalConfigData* GKBIFKOLEJF; // 0x10
	::RPG::GameCore::VCameraNoiseChange* LBGILPDAFBN; // 0x18
	::RPG::GameCore::VCameraConfig* FABCCDICDLO; // 0x20
	::System::Boolean EDNMLBJKFEA; // 0x28
	::RPG::GameCore::TurnState FFNOGLPGGIO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0FA7ACF6234A735__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_C0FA7ACF6234A735* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0FA7ACF6234A735*))((::PBYTE)hIl2Cpp + CLASS_1_C0FA7ACF6234A735_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};

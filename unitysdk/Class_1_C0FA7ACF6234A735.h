#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_C0FA7ACF6234A735_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xAA91C50)
#define CLASS_1_C0FA7ACF6234A735__CTOR_OFFSET UNITYSDK_OFFSET(0xAA91D00)

inline static constexpr unsigned int Class_1_C0FA7ACF6234A735_TypeDefinitionIndex = 64107;

class Class_1_C0FA7ACF6234A735 : public ::System::Object
{
public:
	::RPG::Client::CameraNormalConfigData* Field_1_0; // 0x10
	::RPG::GameCore::VCameraNoiseChange* Field_1_3; // 0x18
	::RPG::GameCore::VCameraConfig* Field_1_1; // 0x20
	::RPG::GameCore::TurnState Field_1_4; // 0x28
	::System::Boolean Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0FA7ACF6234A735__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_C0FA7ACF6234A735* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C0FA7ACF6234A735*))((::PBYTE)hIl2Cpp + CLASS_1_C0FA7ACF6234A735_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};

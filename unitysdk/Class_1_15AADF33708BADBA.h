#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }

#define CLASS_1_15AADF33708BADBA_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x11916F90)
#define CLASS_1_15AADF33708BADBA__CTOR_OFFSET UNITYSDK_OFFSET(0x11917010)

inline static constexpr unsigned int Class_1_15AADF33708BADBA_TypeDefinitionIndex = 52420;

class Class_1_15AADF33708BADBA : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::ProgressBarTypeConfig* Field_1_7; // 0x18
	::RPG::GameCore::NumBarTypeConfig* Field_1_8; // 0x20
	::RPG::GameCore::DotBarTypeConfig* Field_1_6; // 0x28
	::RPG::GameCore::SummonerEnergyBarType Field_1_2; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_3; // 0x38
	::System::Boolean Field_1_1; // 0x3C
	::System::Int32 Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15AADF33708BADBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_15AADF33708BADBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15AADF33708BADBA*))((::PBYTE)hIl2Cpp + CLASS_1_15AADF33708BADBA_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};

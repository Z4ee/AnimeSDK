#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B683CEF09BDB0F39__CTOR_OFFSET UNITYSDK_OFFSET(0x18D73D30)

inline static constexpr unsigned int Class_1_B683CEF09BDB0F39_TypeDefinitionIndex = 38722;

class Class_1_B683CEF09BDB0F39 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChimeraGameStage Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::RPG::GameCore::ChimeraTurnBasedStage Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B683CEF09BDB0F39__CTOR_OFFSET))(this);
	}
};

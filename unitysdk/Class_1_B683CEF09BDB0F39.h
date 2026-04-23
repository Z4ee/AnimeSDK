#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraGameStage.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B683CEF09BDB0F39__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2A300)

inline static constexpr unsigned int Class_1_B683CEF09BDB0F39_TypeDefinitionIndex = 37985;

class Class_1_B683CEF09BDB0F39 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::RPG::GameCore::ChimeraTurnBasedStage Field_1_5; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::RPG::Client::LittleGame::ChimeraGameStage Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B683CEF09BDB0F39__CTOR_OFFSET))(this);
	}
};

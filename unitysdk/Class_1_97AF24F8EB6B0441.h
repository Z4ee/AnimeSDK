#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SmartObjectState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_97AF24F8EB6B0441__CTOR_OFFSET UNITYSDK_OFFSET(0x17E87CA0)

inline static constexpr unsigned int Class_1_97AF24F8EB6B0441_TypeDefinitionIndex = 38065;

class Class_1_97AF24F8EB6B0441 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityType Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x14
	::UnityEngine::Vector3 Field_1_4; // 0x20
	::RPG::Client::LittleGame::SmartObjectState Field_1_2; // 0x2C
	::RPG::GameCore::LittleGameSmartObjectSlotGroup Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AF24F8EB6B0441__CTOR_OFFSET))(this);
	}
};

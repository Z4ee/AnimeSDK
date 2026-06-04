#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SmartObjectState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_97AF24F8EB6B0441__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCBD50)

inline static constexpr unsigned int Class_1_97AF24F8EB6B0441_TypeDefinitionIndex = 38805;

class Class_1_97AF24F8EB6B0441 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameSmartObjectSlotGroup Field_1_0; // 0x10
	::RPG::Client::LittleGame::SmartObjectState Field_1_1; // 0x14
	::RPG::GameCore::LittleGameEntityType Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_3; // 0x1C
	::UnityEngine::Vector3 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AF24F8EB6B0441__CTOR_OFFSET))(this);
	}
};

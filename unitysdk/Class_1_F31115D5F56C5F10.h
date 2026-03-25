#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_1BEA1E49225DA2AF;

#define CLASS_1_F31115D5F56C5F10_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16A0F7E0)
#define CLASS_1_F31115D5F56C5F10__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F820)

inline static constexpr unsigned int Class_1_F31115D5F56C5F10_TypeDefinitionIndex = 32965;

class Class_1_F31115D5F56C5F10 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell Field_1_1; // 0x10
	::Class_1_1BEA1E49225DA2AF* Field_1_0; // 0x30
	::UnityEngine::Vector3Int Field_1_4; // 0x38
	::System::Single Field_1_6; // 0x44
	::UnityEngine::Vector3Int Field_1_5; // 0x48
	::RPG::Client::LittleGame::ETimelineControlGameLevelRotation Field_1_3; // 0x54
	::UnityEngine::Vector2Int Field_1_7; // 0x58
	::RPG::Client::LittleGame::ETimelineControlGameLevelFloor Field_1_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31115D5F56C5F10__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31115D5F56C5F10_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

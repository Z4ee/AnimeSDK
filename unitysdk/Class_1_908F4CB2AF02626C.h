#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_908F4CB2AF02626C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C13E90)

inline static constexpr unsigned int Class_1_908F4CB2AF02626C_TypeDefinitionIndex = 40319;

class Class_1_908F4CB2AF02626C : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_908F4CB2AF02626C__CTOR_OFFSET))(this);
	}
};

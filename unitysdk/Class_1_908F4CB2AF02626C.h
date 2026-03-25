#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_908F4CB2AF02626C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3EBA0)

inline static constexpr unsigned int Class_1_908F4CB2AF02626C_TypeDefinitionIndex = 33695;

class Class_1_908F4CB2AF02626C : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType Field_1_0; // 0x10
	::System::Single Field_1_3; // 0x14
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_4; // 0x20
	::System::Single Field_1_6; // 0x2C
	::UnityEngine::Vector3 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_908F4CB2AF02626C__CTOR_OFFSET))(this);
	}
};

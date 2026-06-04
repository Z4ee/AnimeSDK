#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B44E7E9CBC9D1A8E__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA4930)

inline static constexpr unsigned int Class_1_B44E7E9CBC9D1A8E_TypeDefinitionIndex = 40333;

class Class_1_B44E7E9CBC9D1A8E : public ::System::Object
{
public:
	::RPG::Client::LittleGame::ChenLing::ChenLingHitType Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::RPG::GameCore::FixPoint Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44E7E9CBC9D1A8E__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimEntityInfoType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2A2B2DC1DA1205FE;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_A27BF87A78CEBB28__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAAE6A70)
#define CLASS_1_A27BF87A78CEBB28__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE6A50)

inline static constexpr unsigned int Class_1_A27BF87A78CEBB28_TypeDefinitionIndex = 56955;

class Class_1_A27BF87A78CEBB28 : public ::System::Object
{
public:
	::Class_1_2A2B2DC1DA1205FE* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::Client::AimEntityInfoType Field_1_2; // 0x20
	::RPG::GameCore::PhotoGraphAimIdentifyType Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_A27BF87A78CEBB28__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_1_2A2B2DC1DA1205FE* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A2B2DC1DA1205FE*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CLASS_1_A27BF87A78CEBB28__CTOR_1_OFFSET))(this, a1, a2);
	}
};

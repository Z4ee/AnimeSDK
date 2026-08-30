#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class RubikCubePuzzleBlockData; }
namespace RPG::Client::Prop { class RubikCubePuzzleBrick; }
namespace RPG::Client::Prop { class RubikCubePuzzleBrickData; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A4376D2CF7ABE708_METHOD_1_52D7734932924FE8_OFFSET UNITYSDK_OFFSET(0x15CFBC00)
#define CLASS_1_A4376D2CF7ABE708_METHOD_1_88A416044A991D7F_OFFSET UNITYSDK_OFFSET(0x15CFBA80)
#define CLASS_1_A4376D2CF7ABE708__CTOR_OFFSET UNITYSDK_OFFSET(0x15CFBD30)

inline static constexpr unsigned int Class_1_A4376D2CF7ABE708_TypeDefinitionIndex = 78361;

class Class_1_A4376D2CF7ABE708 : public ::System::Object
{
public:
	::UnityEngine::GameObject* DECBKALIAHF; // 0x10
	::RPG::Client::Prop::RubikCubePuzzleBrick* IDMPPJCHPAM; // 0x18
	::System::Int32 DBBKDKFEKPP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4376D2CF7ABE708__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_88A416044A991D7F(::UnityEngine::GameObject* a1, ::RPG::Client::Prop::RubikCubePuzzleBlockData* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::Client::Prop::RubikCubePuzzleCube* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Prop::RubikCubePuzzleBlockData*, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + CLASS_1_A4376D2CF7ABE708_METHOD_1_88A416044A991D7F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_52D7734932924FE8(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::RPG::Client::Prop::RubikCubePuzzleBrickData* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Prop::RubikCubePuzzleBrickData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A4376D2CF7ABE708_METHOD_1_52D7734932924FE8_OFFSET))(this, a1, a2, a3, a4);
	}
};

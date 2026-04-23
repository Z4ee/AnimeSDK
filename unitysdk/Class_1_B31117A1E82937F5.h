#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B31117A1E82937F5_CLEAR_OFFSET UNITYSDK_OFFSET(0x127F8B70)
#define CLASS_1_B31117A1E82937F5__CTOR_OFFSET UNITYSDK_OFFSET(0x127F8BD0)

inline static constexpr unsigned int Class_1_B31117A1E82937F5_TypeDefinitionIndex = 52594;

class Class_1_B31117A1E82937F5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_5; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x18
	::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType Field_1_1; // 0x24
	::System::Single Field_1_3; // 0x28
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_4; // 0x2C
	::System::Single Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B31117A1E82937F5_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F15A60)
#define CLASS_1_B31117A1E82937F5__CTOR_OFFSET UNITYSDK_OFFSET(0x17F15AD0)

inline static constexpr unsigned int Class_1_B31117A1E82937F5_TypeDefinitionIndex = 54509;

class Class_1_B31117A1E82937F5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType Field_1_3; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B31117A1E82937F5_CLEAR_OFFSET UNITYSDK_OFFSET(0xEA7E6D0)
#define CLASS_1_B31117A1E82937F5__CTOR_OFFSET UNITYSDK_OFFSET(0xEA7E740)

inline static constexpr unsigned int Class_1_B31117A1E82937F5_TypeDefinitionIndex = 45933;

class Class_1_B31117A1E82937F5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_5; // 0x10
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_4; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x1C
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C
	::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5_CLEAR_OFFSET))(this);
	}
};

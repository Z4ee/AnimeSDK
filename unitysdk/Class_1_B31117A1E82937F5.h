#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B31117A1E82937F5_CLEAR_OFFSET UNITYSDK_OFFSET(0x15416550)
#define CLASS_1_B31117A1E82937F5__CTOR_OFFSET UNITYSDK_OFFSET(0x154165C0)

inline static constexpr unsigned int Class_1_B31117A1E82937F5_TypeDefinitionIndex = 57230;

class Class_1_B31117A1E82937F5 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* FMBKMMFOPIL; // 0x10
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType OGMHHHNEEGI; // 0x18
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x1C
	::System::Single GCJMFBKLGHI; // 0x28
	::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType HPOPKKLENGD; // 0x2C
	::System::Single IEHPFADHJFD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B31117A1E82937F5_CLEAR_OFFSET))(this);
	}
};

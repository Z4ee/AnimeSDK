#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_8F8B7368C48977DE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1285DBD0)
#define CLASS_1_8F8B7368C48977DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1285DC20)

inline static constexpr unsigned int Class_1_8F8B7368C48977DE_TypeDefinitionIndex = 52595;

class Class_1_8F8B7368C48977DE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_3; // 0x28
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F8B7368C48977DE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F8B7368C48977DE_CLEAR_OFFSET))(this);
	}
};

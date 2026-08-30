#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_8F8B7368C48977DE_CLEAR_OFFSET UNITYSDK_OFFSET(0x181700F0)
#define CLASS_1_8F8B7368C48977DE__CTOR_OFFSET UNITYSDK_OFFSET(0x18170140)

inline static constexpr unsigned int Class_1_8F8B7368C48977DE_TypeDefinitionIndex = 57231;

class Class_1_8F8B7368C48977DE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* OICNIIBMFLK; // 0x10
	::RPG::GameCore::GameEntity* FMBKMMFOPIL; // 0x18
	::System::Single GCJMFBKLGHI; // 0x20
	::System::Single JMPPNFDHDPJ; // 0x24
	::System::Single MLINDPFAGFJ; // 0x28
	::RPG::GameCore::AdventureMoveOnNavMeshFaceToType OGMHHHNEEGI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F8B7368C48977DE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F8B7368C48977DE_CLEAR_OFFSET))(this);
	}
};

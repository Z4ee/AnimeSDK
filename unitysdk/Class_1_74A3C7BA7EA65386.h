#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_74A3C7BA7EA65386__CTOR_OFFSET UNITYSDK_OFFSET(0x168203F0)

inline static constexpr unsigned int Class_1_74A3C7BA7EA65386_TypeDefinitionIndex = 33746;

class Class_1_74A3C7BA7EA65386 : public ::System::Object
{
public:
	::UnityEngine::Vector3Int Field_1_1; // 0x10
	::RPG::GameCore::CakeRaceCellType Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74A3C7BA7EA65386__CTOR_OFFSET))(this);
	}
};

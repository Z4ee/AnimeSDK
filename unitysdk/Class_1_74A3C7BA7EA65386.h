#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_74A3C7BA7EA65386__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0B600)

inline static constexpr unsigned int Class_1_74A3C7BA7EA65386_TypeDefinitionIndex = 42145;

class Class_1_74A3C7BA7EA65386 : public ::System::Object
{
public:
	::UnityEngine::Vector3Int GOOAMHHLHPJ; // 0x10
	::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74A3C7BA7EA65386__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_B41B31CCD07D9037__CTOR_OFFSET UNITYSDK_OFFSET(0x167F74C0)

inline static constexpr unsigned int Class_1_B41B31CCD07D9037_TypeDefinitionIndex = 33745;

class Class_1_B41B31CCD07D9037 : public ::System::Object
{
public:
	::System::Object* Field_1_4; // 0x10
	::UnityEngine::Vector3Int Field_1_1; // 0x18
	::RPG::GameCore::CakeRaceCellType Field_1_0; // 0x24
	::System::Int32 Field_1_3; // 0x28
	::RPG::MVector3 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41B31CCD07D9037__CTOR_OFFSET))(this);
	}
};

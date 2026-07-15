#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_B41B31CCD07D9037__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FB310)

inline static constexpr unsigned int Class_1_B41B31CCD07D9037_TypeDefinitionIndex = 41184;

class Class_1_B41B31CCD07D9037 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::RPG::MVector3 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x24
	::UnityEngine::Vector3Int Field_1_3; // 0x28
	::RPG::GameCore::CakeRaceCellType Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41B31CCD07D9037__CTOR_OFFSET))(this);
	}
};

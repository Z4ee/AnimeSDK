#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_935C5C12F308F300__CTOR_OFFSET UNITYSDK_OFFSET(0x1691DB80)

inline static constexpr unsigned int Class_1_935C5C12F308F300_TypeDefinitionIndex = 33227;

class Class_1_935C5C12F308F300 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_0; // 0x10
	::UnityEngine::Quaternion Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935C5C12F308F300__CTOR_OFFSET))(this);
	}
};

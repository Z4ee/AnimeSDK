#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_935C5C12F308F300__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90EB30)

inline static constexpr unsigned int Class_1_935C5C12F308F300_TypeDefinitionIndex = 43172;

class Class_1_935C5C12F308F300 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FNDCAGIKLAJ; // 0x10
	::UnityEngine::Vector3 AIBGEDIGEOO; // 0x28
	::UnityEngine::Quaternion LOLLEGPLMOO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935C5C12F308F300__CTOR_OFFSET))(this);
	}
};

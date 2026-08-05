#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoTerrainSubZone3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOTERRAINCYLINDERZONE3D_METHOD_7_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x16876EA0)
#define MOLEMOLE_MONOTERRAINCYLINDERZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16876F30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainCylinderZone3D_TypeDefinitionIndex = 85309;

	class MonoTerrainCylinderZone3D : public ::MoleMole::MonoTerrainSubZone3D
	{
	public:
		::System::Single Radius; // 0x30
		::System::Single Height; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINCYLINDERZONE3D__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_7_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINCYLINDERZONE3D_METHOD_7_C3FCFEB83374757C_OFFSET))(this, a1);
		}
	};
}

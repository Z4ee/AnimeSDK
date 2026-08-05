#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoTerrainSubZone3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOTERRAINRECTZONE3D_METHOD_7_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x11D59440)
#define MOLEMOLE_MONOTERRAINRECTZONE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x11D594D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainRectZone3D_TypeDefinitionIndex = 49700;

	class MonoTerrainRectZone3D : public ::MoleMole::MonoTerrainSubZone3D
	{
	public:
		::System::Single Length; // 0x30
		::System::Single Width; // 0x34
		::System::Single Height; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINRECTZONE3D__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_7_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINRECTZONE3D_METHOD_7_C3FCFEB83374757C_OFFSET))(this, a1);
		}
	};
}

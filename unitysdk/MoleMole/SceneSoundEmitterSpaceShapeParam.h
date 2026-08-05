#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SceneSoundEmitterSpaceShapeParam_Enum_3_65588CBC858FFB6D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SCENESOUNDEMITTERSPACESHAPEPARAM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1809CFA0)
#define MOLEMOLE_SCENESOUNDEMITTERSPACESHAPEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1809D000)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundEmitterSpaceShapeParam_TypeDefinitionIndex = 52135;

	class SceneSoundEmitterSpaceShapeParam : public ::System::Object
	{
	public:
		::MoleMole::SceneSoundEmitterSpaceShapeParam_Enum_3_65588CBC858FFB6D shape; // 0x10
		::UnityEngine::Vector3 positionOffset; // 0x14
		::UnityEngine::Vector3 eulerAngle; // 0x20
		::UnityEngine::Vector3 boxSize; // 0x2C
		::System::Single radius; // 0x38
		::System::Single height; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDEMITTERSPACESHAPEPARAM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDEMITTERSPACESHAPEPARAM_GET_ROTATION_OFFSET))(this);
		}
	};
}

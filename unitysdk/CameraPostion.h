#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CAMERAPOSTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D51E0)

inline static constexpr unsigned int CameraPostion_TypeDefinitionIndex = 38024;

class CameraPostion : public ::System::Object
{
public:
	::UnityEngine::Vector3 Pos; // 0x10
	::UnityEngine::Vector4 Rotation; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAPOSTION__CTOR_OFFSET))(this);
	}
};

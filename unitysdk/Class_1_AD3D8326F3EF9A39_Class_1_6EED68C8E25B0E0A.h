#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }

#define CLASS_1_AD3D8326F3EF9A39_CLASS_1_6EED68C8E25B0E0A_METHOD_1_5BAD30559FE99B2B_OFFSET UNITYSDK_OFFSET(0x16F54D50)
#define CLASS_1_AD3D8326F3EF9A39_CLASS_1_6EED68C8E25B0E0A_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x16F55110)
#define CLASS_1_AD3D8326F3EF9A39_CLASS_1_6EED68C8E25B0E0A__CTOR_OFFSET UNITYSDK_OFFSET(0x16F54D40)

inline static constexpr unsigned int Class_1_AD3D8326F3EF9A39_Class_1_6EED68C8E25B0E0A_TypeDefinitionIndex = 52847;

class Class_1_AD3D8326F3EF9A39_Class_1_6EED68C8E25B0E0A : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::MoleMole::Cameras::OverShoulderCameraConfig* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD3D8326F3EF9A39_CLASS_1_6EED68C8E25B0E0A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_5BAD30559FE99B2B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD3D8326F3EF9A39_CLASS_1_6EED68C8E25B0E0A_METHOD_1_5BAD30559FE99B2B_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD3D8326F3EF9A39_CLASS_1_6EED68C8E25B0E0A_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}
};

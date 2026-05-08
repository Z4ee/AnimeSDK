#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define NAPSCENEMAP3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF4FC600)

inline static constexpr unsigned int NapSceneMap3DConfig_TypeDefinitionIndex = 47043;

class NapSceneMap3DConfig : public ::System::Object
{
public:
	::System::Single yMultiply; // 0x10
	::System::Single thickness; // 0x14
	::UnityEngine::Material* maskMaterial; // 0x18
	::UnityEngine::Material* bottomMaterial; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEMAP3DCONFIG__CTOR_OFFSET))(this);
	}
};

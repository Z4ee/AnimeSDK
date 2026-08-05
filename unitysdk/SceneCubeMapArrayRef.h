#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class CubemapArray; }

#define SCENECUBEMAPARRAYREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AD490)

inline static constexpr unsigned int SceneCubeMapArrayRef_TypeDefinitionIndex = 27570;

class SceneCubeMapArrayRef : public ::UnityEngine::ScriptableObject
{
public:
	::UnityEngine::CubemapArray* sceneCubeMapArrayRef; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENECUBEMAPARRAYREF__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCSoftAssetPath_1.h"

namespace UnityEngine { class Mesh; }

#define NPCSOFTMESHPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x112C9370)
#define NPCSOFTMESHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x112C9310)

inline static constexpr unsigned int NPCSoftMeshPath_TypeDefinitionIndex = 69322;

class NPCSoftMeshPath : public ::NPCSoftAssetPath_1<::UnityEngine::Mesh*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSOFTMESHPATH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Foundation::AssetPath path)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCSOFTMESHPATH__CTOR_1_OFFSET))(this, path);
	}
};

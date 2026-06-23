#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/NPCSoftAssetPath_1.h"

namespace UnityEngine { class Mesh; }

#define NPCCROWD_NPCSOFTMESHPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12748590)
#define NPCCROWD_NPCSOFTMESHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x12748570)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftMeshPath_TypeDefinitionIndex = 56419;

	class NPCSoftMeshPath : public ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMESHPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMESHPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}

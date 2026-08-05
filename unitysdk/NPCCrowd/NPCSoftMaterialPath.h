#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/NPCSoftAssetPath_1.h"

namespace UnityEngine { class Material; }

#define NPCCROWD_NPCSOFTMATERIALPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10670260)
#define NPCCROWD_NPCSOFTMATERIALPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x10670240)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftMaterialPath_TypeDefinitionIndex = 59533;

	class NPCSoftMaterialPath : public ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Material*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}

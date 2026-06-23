#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/NPCSoftAssetPathList_1.h"

namespace UnityEngine { class Material; }

#define NPCCROWD_NPCSOFTMATERIALPATHLIST_GETPATHS_OFFSET UNITYSDK_OFFSET(0xD443A70)
#define NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD443A60)
#define NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xD4439F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftMaterialPathList_TypeDefinitionIndex = 58537;

	class NPCSoftMaterialPathList : public ::NPCCrowd::NPCSoftAssetPathList_1<::UnityEngine::Material*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::Foundation::AssetPath>* paths)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATHLIST__CTOR_1_OFFSET))(this, paths);
		}

		::Il2CppArray<::Foundation::AssetPath>* GetPaths()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATHLIST_GETPATHS_OFFSET))(this);
		}
	};
}

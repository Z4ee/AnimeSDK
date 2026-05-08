#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCSoftAssetPathList_1.h"

namespace UnityEngine { class Material; }

#define NPCSOFTMATERIALPATHLIST_GETPATHS_OFFSET UNITYSDK_OFFSET(0xFC1B2D0)
#define NPCSOFTMATERIALPATHLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFC1B2C0)
#define NPCSOFTMATERIALPATHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xFC1B250)

inline static constexpr unsigned int NPCSoftMaterialPathList_TypeDefinitionIndex = 44813;

class NPCSoftMaterialPathList : public ::NPCSoftAssetPathList_1<::UnityEngine::Material*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSOFTMATERIALPATHLIST__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::Foundation::AssetPath>* paths)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + NPCSOFTMATERIALPATHLIST__CTOR_1_OFFSET))(this, paths);
	}

	::Il2CppArray<::Foundation::AssetPath>* GetPaths()
	{
		return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSOFTMATERIALPATHLIST_GETPATHS_OFFSET))(this);
	}
};

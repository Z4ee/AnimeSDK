#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define SCENEOPTIMIZELIGHTBUDGETCELL_START_OFFSET UNITYSDK_OFFSET(0xB932BB0)
#define SCENEOPTIMIZELIGHTBUDGETCELL_UPDATE_OFFSET UNITYSDK_OFFSET(0xB932C60)
#define SCENEOPTIMIZELIGHTBUDGETCELL__CTOR_OFFSET UNITYSDK_OFFSET(0xB932CD0)

inline static constexpr unsigned int SceneOptimizeLightBudgetCell_TypeDefinitionIndex = 44151;

class SceneOptimizeLightBudgetCell : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Light*>* IntersectLightList; // 0x18
	::System::Int32 MaxLightCountPerCell; // 0x20
	::UnityEngine::MeshRenderer* Field_5_2; // 0x28
	::UnityEngine::MaterialPropertyBlock* Field_5_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOPTIMIZELIGHTBUDGETCELL__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOPTIMIZELIGHTBUDGETCELL_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOPTIMIZELIGHTBUDGETCELL_UPDATE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class SceneMaterialParameterRewriter_MaterialAnimationOverrideData;

#define SCENEMATERIALPARAMETERREWRITER_APPLY_OFFSET UNITYSDK_OFFSET(0x1CC67AE0)
#define SCENEMATERIALPARAMETERREWRITER_CLEARCONTENT_OFFSET UNITYSDK_OFFSET(0x1CC67BD0)
#define SCENEMATERIALPARAMETERREWRITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC67B80)
#define SCENEMATERIALPARAMETERREWRITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC67A90)
#define SCENEMATERIALPARAMETERREWRITER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC67C70)
#define SCENEMATERIALPARAMETERREWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC67CC0)

inline static constexpr unsigned int SceneMaterialParameterRewriter_TypeDefinitionIndex = 26999;

class SceneMaterialParameterRewriter : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::SceneMaterialParameterRewriter_MaterialAnimationOverrideData*>* animatedRenderItemList; // 0x18
	::System::Boolean needRefrashEveryFrame; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_UPDATE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_APPLY_OFFSET))(this);
	}

	::System::Void ClearContent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_CLEARCONTENT_OFFSET))(this);
	}
};

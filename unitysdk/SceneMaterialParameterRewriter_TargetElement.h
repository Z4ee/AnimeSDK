#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneMaterialParameterRewriter_MaterialAnimationOverrideElement;
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define SCENEMATERIALPARAMETERREWRITER_TARGETELEMENT_APPLY_OFFSET UNITYSDK_OFFSET(0x1A680A00)
#define SCENEMATERIALPARAMETERREWRITER_TARGETELEMENT_CLEARMPB_OFFSET UNITYSDK_OFFSET(0x1A680EA0)
#define SCENEMATERIALPARAMETERREWRITER_TARGETELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A681070)

inline static constexpr unsigned int SceneMaterialParameterRewriter_TargetElement_TypeDefinitionIndex = 29487;

class SceneMaterialParameterRewriter_TargetElement : public ::System::Object
{
public:
	::UnityEngine::Renderer* renderer; // 0x10
	::Il2CppArray<::System::Int32>* subMeshIndex; // 0x18
	::UnityEngine::MaterialPropertyBlock* defaultMPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_TARGETELEMENT__CTOR_OFFSET))(this);
	}

	::System::Void Apply(::Il2CppArray<::SceneMaterialParameterRewriter_MaterialAnimationOverrideElement*>* elements)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::SceneMaterialParameterRewriter_MaterialAnimationOverrideElement*>*))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_TARGETELEMENT_APPLY_OFFSET))(this, elements);
	}

	::System::Void ClearMPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_TARGETELEMENT_CLEARMPB_OFFSET))(this);
	}
};

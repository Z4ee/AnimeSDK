#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement;
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define SCENEMATERIALPARAMETERREWRITERANIMATED_TARGETELEMENT_APPLY_OFFSET UNITYSDK_OFFSET(0x1E65A0C0)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_TARGETELEMENT_CLEARMPB_OFFSET UNITYSDK_OFFSET(0x1E65A410)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_TARGETELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E65A5E0)

inline static constexpr unsigned int SceneMaterialParameterRewriterAnimated_TargetElement_TypeDefinitionIndex = 27344;

class SceneMaterialParameterRewriterAnimated_TargetElement : public ::System::Object
{
public:
	::UnityEngine::Renderer* renderer; // 0x10
	::Il2CppArray<::System::Int32>* subMeshIndex; // 0x18
	::UnityEngine::MaterialPropertyBlock* defaultMPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_TARGETELEMENT__CTOR_OFFSET))(this);
	}

	::System::Void Apply(::Il2CppArray<::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement*>* elements)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement*>*))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_TARGETELEMENT_APPLY_OFFSET))(this, elements);
	}

	::System::Void ClearMPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_TARGETELEMENT_CLEARMPB_OFFSET))(this);
	}
};

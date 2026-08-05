#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define SCENEMATERIALPARAMETERREWRITERANIMATED_MATERIALANIMATIONOVERRIDEELEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x1CB0EA20)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_MATERIALANIMATIONOVERRIDEELEMENT_SETMPB_OFFSET UNITYSDK_OFFSET(0x1CB0EAE0)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_MATERIALANIMATIONOVERRIDEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0EBE0)

inline static constexpr unsigned int SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_TypeDefinitionIndex = 27345;

class SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement : public ::System::Object
{
public:
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type; // 0x10
	::System::String* propertyName; // 0x18
	::UnityEngine::Color colorValue; // 0x20
	::UnityEngine::Vector4 vectorValue; // 0x30
	::System::Single floatValue; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_MATERIALANIMATIONOVERRIDEELEMENT__CTOR_OFFSET))(this);
	}

	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement* Init(::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type t, ::System::String* pn, ::UnityEngine::Color cV, ::UnityEngine::Vector4 vV, ::System::Single fV)
	{
		return ((::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement*(*)(::PVOID, ::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_MATERIALANIMATIONOVERRIDEELEMENT_INIT_OFFSET))(this, t, pn, cV, vV, fV);
	}

	::System::Void SetMPB(::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_MATERIALANIMATIONOVERRIDEELEMENT_SETMPB_OFFSET))(this, mpb);
	}
};

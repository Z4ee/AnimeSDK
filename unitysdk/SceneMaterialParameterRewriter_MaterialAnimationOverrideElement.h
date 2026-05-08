#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SceneMaterialParameterRewriter_MaterialAnimationOverrideElement_Type.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEELEMENT_SETMPB_OFFSET UNITYSDK_OFFSET(0x19F253A0)
#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F254B0)

inline static constexpr unsigned int SceneMaterialParameterRewriter_MaterialAnimationOverrideElement_TypeDefinitionIndex = 29485;

class SceneMaterialParameterRewriter_MaterialAnimationOverrideElement : public ::System::Object
{
public:
	::SceneMaterialParameterRewriter_MaterialAnimationOverrideElement_Type type; // 0x10
	::System::String* propertyName; // 0x18
	::UnityEngine::Color colorValue; // 0x20
	::UnityEngine::Vector4 vectorValue; // 0x30
	::System::Single floatValue; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEELEMENT__CTOR_OFFSET))(this);
	}

	::System::Void SetMPB(::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEELEMENT_SETMPB_OFFSET))(this, mpb);
	}
};

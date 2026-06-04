#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_ED63A28D24649D54;
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define EFFECT_SETMATERIALPROPERTYBYRULES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1357D4C0)
#define EFFECT_SETMATERIALPROPERTYBYRULES__CTOR_OFFSET UNITYSDK_OFFSET(0x1357D530)

inline static constexpr unsigned int Effect_SetMaterialPropertyByRules_TypeDefinitionIndex = 44749;

class Effect_SetMaterialPropertyByRules : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* Render; // 0x18
	::System::String* PropertyName; // 0x20
	::System::Int32 MaterialIndex; // 0x28
	::System::Single Weight; // 0x2C
	::UnityEngine::MaterialPropertyBlock* matBlock; // 0x30
	::System::Single _PrevisData; // 0x38
	::Class_2_ED63A28D24649D54* Field_5_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETMATERIALPROPERTYBYRULES__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_SETMATERIALPROPERTYBYRULES_ONENABLE_OFFSET))(this);
	}
};

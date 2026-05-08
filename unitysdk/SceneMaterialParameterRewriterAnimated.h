#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement;
class SceneMaterialParameterRewriterAnimated_TargetElement;
namespace System { class String; }

#define SCENEMATERIALPARAMETERREWRITERANIMATED_APPLY_OFFSET UNITYSDK_OFFSET(0x1908E270)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_CLEARCONTENT_OFFSET UNITYSDK_OFFSET(0x1908F140)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1908F0F0)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1908E220)
#define SCENEMATERIALPARAMETERREWRITERANIMATED_UPDATE_OFFSET UNITYSDK_OFFSET(0x1908F2B0)
#define SCENEMATERIALPARAMETERREWRITERANIMATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1908F310)

inline static constexpr unsigned int SceneMaterialParameterRewriterAnimated_TypeDefinitionIndex = 29489;

class SceneMaterialParameterRewriterAnimated : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::SceneMaterialParameterRewriterAnimated_TargetElement*>* renderList0; // 0x18
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type00; // 0x20
	::System::String* propertyName00; // 0x28
	::UnityEngine::Color colorValue00; // 0x30
	::UnityEngine::Vector4 vectorValue00; // 0x40
	::System::Single floatValue00; // 0x50
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type01; // 0x54
	::System::String* propertyName01; // 0x58
	::UnityEngine::Color colorValue01; // 0x60
	::UnityEngine::Vector4 vectorValue01; // 0x70
	::System::Single floatValue01; // 0x80
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type02; // 0x84
	::System::String* propertyName02; // 0x88
	::UnityEngine::Color colorValue02; // 0x90
	::UnityEngine::Vector4 vectorValue02; // 0xA0
	::System::Single floatValue02; // 0xB0
	::Il2CppArray<::SceneMaterialParameterRewriterAnimated_TargetElement*>* renderList1; // 0xB8
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type10; // 0xC0
	::System::String* propertyName10; // 0xC8
	::UnityEngine::Color colorValue10; // 0xD0
	::UnityEngine::Vector4 vectorValue10; // 0xE0
	::System::Single floatValue10; // 0xF0
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type11; // 0xF4
	::System::String* propertyName11; // 0xF8
	::UnityEngine::Color colorValue11; // 0x100
	::UnityEngine::Vector4 vectorValue11; // 0x110
	::System::Single floatValue11; // 0x120
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type12; // 0x124
	::System::String* propertyName12; // 0x128
	::UnityEngine::Color colorValue12; // 0x130
	::UnityEngine::Vector4 vectorValue12; // 0x140
	::System::Single floatValue12; // 0x150
	::Il2CppArray<::SceneMaterialParameterRewriterAnimated_TargetElement*>* renderList2; // 0x158
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type20; // 0x160
	::System::String* propertyName20; // 0x168
	::UnityEngine::Color colorValue20; // 0x170
	::UnityEngine::Vector4 vectorValue20; // 0x180
	::System::Single floatValue20; // 0x190
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type21; // 0x194
	::System::String* propertyName21; // 0x198
	::UnityEngine::Color colorValue21; // 0x1A0
	::UnityEngine::Vector4 vectorValue21; // 0x1B0
	::System::Single floatValue21; // 0x1C0
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement_Type type22; // 0x1C4
	::System::String* propertyName22; // 0x1C8
	::UnityEngine::Color colorValue22; // 0x1D0
	::UnityEngine::Vector4 vectorValue22; // 0x1E0
	::System::Single floatValue22; // 0x1F0
	::Il2CppArray<::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement*>* cachedMaterials; // 0x1F8
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement* material00; // 0x200
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement* material01; // 0x208
	::SceneMaterialParameterRewriterAnimated_MaterialAnimationOverrideElement* material02; // 0x210
	::System::Boolean needRefrashEveryFrame; // 0x218

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_UPDATE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_APPLY_OFFSET))(this);
	}

	::System::Void ClearContent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITERANIMATED_CLEARCONTENT_OFFSET))(this);
	}
};

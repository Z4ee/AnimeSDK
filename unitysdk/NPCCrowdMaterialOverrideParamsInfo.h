#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"

#define NPCCROWDMATERIALOVERRIDEPARAMSINFO_GETSHADERPROPERTYFROMINDEX_OFFSET UNITYSDK_OFFSET(0xEA59E30)
#define NPCCROWDMATERIALOVERRIDEPARAMSINFO_PRECOMPUTECOLOR_OFFSET UNITYSDK_OFFSET(0xEA59D40)
#define NPCCROWDMATERIALOVERRIDEPARAMSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xEA5A690)

inline static constexpr unsigned int NPCCrowdMaterialOverrideParamsInfo_TypeDefinitionIndex = 64066;

class NPCCrowdMaterialOverrideParamsInfo : public ::System::Object
{
public:
	// static const ::System::UInt16 overridePropertiesNumber = 0xA; // 0x0
	::System::Int32 id; // 0x10
	::Il2CppArray<::System::Boolean>* overrideColorArray; // 0x18
	::UnityEngine::Color32 rColor; // 0x20
	::UnityEngine::Color32 gColor; // 0x24
	::UnityEngine::Color32 bColor; // 0x28
	::UnityEngine::Color32 aColor; // 0x2C
	::UnityEngine::Color32 specularColor; // 0x30
	::UnityEngine::Color32 outlineColor; // 0x34
	::UnityEngine::Color32 rimGlowLightColor; // 0x38
	::UnityEngine::Color32 rimGlowShadowColor; // 0x3C
	::UnityEngine::Color32 firstLayerShadowColor; // 0x40
	::UnityEngine::Color32 secondLayerShadowColor; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDMATERIALOVERRIDEPARAMSINFO__CTOR_OFFSET))(this);
	}

	::UnityEngine::Color PrecomputeColor(::UnityEngine::Color c)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NPCCROWDMATERIALOVERRIDEPARAMSINFO_PRECOMPUTECOLOR_OFFSET))(this, c);
	}

	::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32> GetShaderPropertyFromIndex(::System::Int32 index)
	{
		return ((::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWDMATERIALOVERRIDEPARAMSINFO_GETSHADERPROPERTYFROMINDEX_OFFSET))(this, index);
	}
};

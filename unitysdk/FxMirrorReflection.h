#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1C3FC500)
#define FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET UNITYSDK_OFFSET(0x1C3FC900)
#define FXMIRRORREFLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3FC330)
#define FXMIRRORREFLECTION_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1C3FC480)
#define FXMIRRORREFLECTION_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1C3FC430)
#define FXMIRRORREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FD0C0)

inline static constexpr unsigned int FxMirrorReflection_TypeDefinitionIndex = 27844;

class FxMirrorReflection : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONENABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void BindPropertyBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONREALENABLE_OFFSET))(this);
	}

	::System::Void GenerateMirrorPart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET))(this);
	}
};

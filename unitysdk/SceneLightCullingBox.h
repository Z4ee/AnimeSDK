#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define SCENELIGHTCULLINGBOX_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C410750)
#define SCENELIGHTCULLINGBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4108B0)

inline static constexpr unsigned int SceneLightCullingBox_TypeDefinitionIndex = 27778;

class SceneLightCullingBox : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 m_PreviewSize; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTCULLINGBOX__CTOR_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTCULLINGBOX_ONVALIDATE_OFFSET))(this);
	}
};

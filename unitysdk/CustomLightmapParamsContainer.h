#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CUSTOMLIGHTMAPPARAMSCONTAINER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11703B90)
#define CUSTOMLIGHTMAPPARAMSCONTAINER_SETUPCUSTOMLIGHTMAPPARAMS_OFFSET UNITYSDK_OFFSET(0x11703BE0)
#define CUSTOMLIGHTMAPPARAMSCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x11703EE0)

inline static constexpr unsigned int CustomLightmapParamsContainer_TypeDefinitionIndex = 39087;

class CustomLightmapParamsContainer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* lightmapScaleOffsets; // 0x20
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x28
	::System::Int32 unity_LightmapST; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMLIGHTMAPPARAMSCONTAINER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMLIGHTMAPPARAMSCONTAINER_ONENABLE_OFFSET))(this);
	}

	::System::Void SetupCustomLightmapParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMLIGHTMAPPARAMSCONTAINER_SETUPCUSTOMLIGHTMAPPARAMS_OFFSET))(this);
	}
};

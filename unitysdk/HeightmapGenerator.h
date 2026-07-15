#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define HEIGHTMAPGENERATOR_GENERATEHEIGHTMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x17A5AD00)
#define HEIGHTMAPGENERATOR_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x17A5B410)
#define HEIGHTMAPGENERATOR_SAVETOEXR_OFFSET UNITYSDK_OFFSET(0x17A5B540)
#define HEIGHTMAPGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5B680)

inline static constexpr unsigned int HeightmapGenerator_TypeDefinitionIndex = 45526;

class HeightmapGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Bounds bounds; // 0x18
	::System::Int32 resolutionX; // 0x30
	::System::Int32 resolutionZ; // 0x34
	::UnityEngine::LayerMask raycastLayers; // 0x38
	::System::Single rayOriginMargin; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIGHTMAPGENERATOR__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture2D* GenerateHeightmapTexture()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIGHTMAPGENERATOR_GENERATEHEIGHTMAPTEXTURE_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIGHTMAPGENERATOR_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	static ::System::Void SaveToExr(::UnityEngine::Texture2D* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Texture2D*, ::System::String*))((::PBYTE)hIl2Cpp + HEIGHTMAPGENERATOR_SAVETOEXR_OFFSET))(a1, a2);
	}
};

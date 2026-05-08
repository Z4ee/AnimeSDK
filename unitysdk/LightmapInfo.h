#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MeshRenderer; }

#define LIGHTMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35FB70)

inline static constexpr unsigned int LightmapInfo_TypeDefinitionIndex = 29548;

class LightmapInfo : public ::System::Object
{
public:
	::UnityEngine::MeshRenderer* render; // 0x10
	::System::Int32 lightmapIndex; // 0x18
	::UnityEngine::Vector4 uvoffset; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTMAPINFO__CTOR_OFFSET))(this);
	}
};

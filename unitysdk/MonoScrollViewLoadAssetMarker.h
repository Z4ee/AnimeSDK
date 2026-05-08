#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCROLLVIEWLOADASSETMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0xD07F960)

inline static constexpr unsigned int MonoScrollViewLoadAssetMarker_TypeDefinitionIndex = 76997;

class MonoScrollViewLoadAssetMarker : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLVIEWLOADASSETMARKER__CTOR_OFFSET))(this);
	}
};

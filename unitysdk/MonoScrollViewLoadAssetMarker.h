#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCROLLVIEWLOADASSETMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1166B060)

inline static constexpr unsigned int MonoScrollViewLoadAssetMarker_TypeDefinitionIndex = 58781;

class MonoScrollViewLoadAssetMarker : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLVIEWLOADASSETMARKER__CTOR_OFFSET))(this);
	}
};

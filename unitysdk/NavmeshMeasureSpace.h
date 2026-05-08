#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NAVMESHMEASURESPACE_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C469CD0)
#define NAVMESHMEASURESPACE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C469EB0)
#define NAVMESHMEASURESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46A0F0)

inline static constexpr unsigned int NavmeshMeasureSpace_TypeDefinitionIndex = 85488;

class NavmeshMeasureSpace : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHMEASURESPACE__CTOR_OFFSET))(this);
	}

	::System::Void DrawCircle(::UnityEngine::Vector3 center, ::System::Single radius, ::UnityEngine::Color color)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NAVMESHMEASURESPACE_DRAWCIRCLE_OFFSET))(this, center, radius, color);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHMEASURESPACE_UPDATE_OFFSET))(this);
	}
};

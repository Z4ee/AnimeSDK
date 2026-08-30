#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CELESTIALBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86BD40)

inline static constexpr unsigned int CelestialBodyData_TypeDefinitionIndex = 47766;

class CelestialBodyData : public ::System::Object
{
public:
	::UnityEngine::Vector3 worldPosition; // 0x10
	::UnityEngine::Vector3 skyDirection; // 0x1C
	::CelestialBodyType bodyType; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELESTIALBODYDATA__CTOR_OFFSET))(this);
	}
};

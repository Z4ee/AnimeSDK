#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ARASAMPLES_ROTATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E21FCE0)
#define ARASAMPLES_ROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E21FDC0)

namespace AraSamples
{
	inline static constexpr unsigned int Rotation_TypeDefinitionIndex = 32919;

	class Rotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single speed; // 0x18
		::UnityEngine::Vector3 axis; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_ROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_ROTATION_UPDATE_OFFSET))(this);
		}
	};
}

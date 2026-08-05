#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ARASAMPLES_OBJECTDRAGGER_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1F643B50)
#define ARASAMPLES_OBJECTDRAGGER_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1F643D70)
#define ARASAMPLES_OBJECTDRAGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643E90)

namespace AraSamples
{
	inline static constexpr unsigned int ObjectDragger_TypeDefinitionIndex = 33553;

	class ObjectDragger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 screenPoint; // 0x18
		::UnityEngine::Vector3 offset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_OBJECTDRAGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_OBJECTDRAGGER_ONMOUSEDOWN_OFFSET))(this);
		}

		::System::Void OnMouseDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_OBJECTDRAGGER_ONMOUSEDRAG_OFFSET))(this);
		}
	};
}

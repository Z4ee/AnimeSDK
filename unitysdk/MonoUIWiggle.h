#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define MONOUIWIGGLE_FRAC_OFFSET UNITYSDK_OFFSET(0x112F8AC0)
#define MONOUIWIGGLE_RAND_OFFSET UNITYSDK_OFFSET(0x112F8B20)
#define MONOUIWIGGLE_START_OFFSET UNITYSDK_OFFSET(0x112F8970)
#define MONOUIWIGGLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x112F8BE0)
#define MONOUIWIGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x112F8D00)

inline static constexpr unsigned int MonoUIWiggle_TypeDefinitionIndex = 43200;

class MonoUIWiggle : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector2 wiggleAmount; // 0x18
	::System::Single wiggleSpeed; // 0x20
	::UnityEngine::RectTransform* rectTransform; // 0x28
	::UnityEngine::Vector3 originalPosition; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIWIGGLE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIWIGGLE_START_OFFSET))(this);
	}

	static ::System::Single Frac(::System::Single x)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MONOUIWIGGLE_FRAC_OFFSET))(x);
	}

	::System::Single Rand(::System::Single co)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIWIGGLE_RAND_OFFSET))(this, co);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIWIGGLE_UPDATE_OFFSET))(this);
	}
};

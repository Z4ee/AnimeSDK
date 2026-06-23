#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MONOUIKEEPFIXED_START_OFFSET UNITYSDK_OFFSET(0xFAF2830)
#define MONOUIKEEPFIXED_UPDATE_OFFSET UNITYSDK_OFFSET(0xFAF2A10)
#define MONOUIKEEPFIXED__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF2B30)

inline static constexpr unsigned int MonoUIKeepFixed_TypeDefinitionIndex = 82971;

class MonoUIKeepFixed : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* uiElements; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* initialPositions; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIKEEPFIXED__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIKEEPFIXED_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIKEEPFIXED_UPDATE_OFFSET))(this);
	}
};

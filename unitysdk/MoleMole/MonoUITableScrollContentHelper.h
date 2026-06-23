#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_EC86C2D7EFDB13CE_OFFSET UNITYSDK_OFFSET(0x173F9300)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x173F9270)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173F92B0)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_REFRESHDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0x173F9490)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x173F94E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITableScrollContentHelper_TypeDefinitionIndex = 44071;

	class MonoUITableScrollContentHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::DrivenRectTransformTracker Field_5_0; // 0x18
		::UnityEngine::RectTransform* Field_5_1; // 0x20
		::UnityEngine::DrivenTransformProperties Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshDrivenRectTransformTracker(::UnityEngine::DrivenTransformProperties a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_REFRESHDRIVENRECTTRANSFORMTRACKER_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* Method_5_EC86C2D7EFDB13CE()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_EC86C2D7EFDB13CE_OFFSET))(this);
		}
	};
}

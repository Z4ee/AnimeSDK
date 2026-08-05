#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x129D62C0)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x129D6340)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_EC86C2D7EFDB13CE_OFFSET UNITYSDK_OFFSET(0x129D6090)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x129D5F60)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x129D5E10)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x129D6050)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x129D5F10)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_REFRESHDRIVENRECTTRANSFORMTRACKER_OFFSET UNITYSDK_OFFSET(0x129D6220)
#define MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x129D6270)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITableScrollContentHelper_TypeDefinitionIndex = 85794;

	class MonoUITableScrollContentHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::DrivenRectTransformTracker Field_5_2; // 0x18
		::UnityEngine::RectTransform* Field_5_1; // 0x20
		::UnityEngine::DrivenTransformProperties Field_5_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void RefreshDrivenRectTransformTracker(::UnityEngine::DrivenTransformProperties a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_REFRESHDRIVENRECTTRANSFORMTRACKER_OFFSET))(this, a1);
		}

		::System::Void Method_5_2439B52C953E2E46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_2439B52C953E2E46_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_5_EC86C2D7EFDB13CE()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_EC86C2D7EFDB13CE_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITABLESCROLLCONTENTHELPER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}

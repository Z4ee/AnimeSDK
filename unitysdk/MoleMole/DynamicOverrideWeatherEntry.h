#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }

#define MOLEMOLE_DYNAMICOVERRIDEWEATHERENTRY_ISVALID_OFFSET UNITYSDK_OFFSET(0x8A9720)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicOverrideWeatherEntry_TypeDefinitionIndex = 68096;

	struct alignas(8) DynamicOverrideWeatherEntry
	{
		::System::String* weatherKey; // 0x10
		::System::String* curveKey; // 0x18
		::System::Single weight; // 0x20
		::System::Int32 priority; // 0x24
		::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject* weatherConfig; // 0x28

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOVERRIDEWEATHERENTRY_ISVALID_OFFSET))(this);
		}
	};
}

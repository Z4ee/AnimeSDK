#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_DYNAMICOVERRIDEWEATHERV2ENTRY_ISVALID_OFFSET UNITYSDK_OFFSET(0x741090)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicOverrideWeatherV2Entry_TypeDefinitionIndex = 77003;

	struct alignas(8) DynamicOverrideWeatherV2Entry
	{
		::System::String* weatherKey; // 0x10
		::System::String* curveKey; // 0x18
		::System::Single weight; // 0x20
		::System::Int32 priority; // 0x24
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x28

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICOVERRIDEWEATHERV2ENTRY_ISVALID_OFFSET))(this);
		}
	};
}

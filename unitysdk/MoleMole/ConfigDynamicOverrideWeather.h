#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x159FE760)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDynamicOverrideWeather_TypeDefinitionIndex = 75200;

	class ConfigDynamicOverrideWeather : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>* settings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>* settingsV2; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/WeatherV1CastV2Entry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGLEVELWEATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47C8F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelWeather_TypeDefinitionIndex = 72281;

	class ConfigLevelWeather : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>* settings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELWEATHER__CTOR_OFFSET))(this);
		}
	};
}

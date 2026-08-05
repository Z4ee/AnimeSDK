#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/IndicatorLightData.h"
#include "unitysdk/MoleMole/Config/IndicatorLightType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_INDICATORLIGHTSPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FE4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightsPreset_TypeDefinitionIndex = 77938;

	class IndicatorLightsPreset : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::IndicatorLightType, ::System::Collections::Generic::List_1<::MoleMole::Config::IndicatorLightData>*>* LightsPresetDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INDICATORLIGHTSPRESET__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AudioRTPCConvert_ConvertType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CONVERT_OFFSET UNITYSDK_OFFSET(0x12413940)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_TESTBUTTON_OFFSET UNITYSDK_OFFSET(0x12413A80)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_TOGGLETESTPANEL_OFFSET UNITYSDK_OFFSET(0x12413A40)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x12413AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_TypeDefinitionIndex = 56421;

	class AudioRTPCConvert : public ::System::Object
	{
	public:
		::System::String* rtpcName; // 0x10
		::System::Single _debugOutputValue; // 0x18
		::System::Single maxValue; // 0x1C
		::System::Single _debugInputValue; // 0x20
		::System::Single minValue; // 0x24
		::MoleMole::Config::AudioRTPCConvert_ConvertType convertType; // 0x28
		::System::Boolean _showDebug; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT__CTOR_OFFSET))(this);
		}

		::System::Single Convert(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CONVERT_OFFSET))(this, value);
		}

		::System::Void ToggleTestPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_TOGGLETESTPANEL_OFFSET))(this);
		}

		::System::Void TestButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_TESTBUTTON_OFFSET))(this);
		}
	};
}

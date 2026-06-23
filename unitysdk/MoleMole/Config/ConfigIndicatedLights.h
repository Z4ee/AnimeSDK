#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigIndicatedLight; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGINDICATEDLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x17D57010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigIndicatedLights_TypeDefinitionIndex = 73693;

	class ConfigIndicatedLights : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigIndicatedLight*>* allIndicatedLights; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINDICATEDLIGHTS__CTOR_OFFSET))(this);
		}
	};
}

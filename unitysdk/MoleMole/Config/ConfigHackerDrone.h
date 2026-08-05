#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HackChargeConfig; }
namespace MoleMole::Config { class HackerDroneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZECHARGECONFIG_OFFSET UNITYSDK_OFFSET(0x11470EE0)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZEDRONECONFIG_OFFSET UNITYSDK_OFFSET(0x11470C40)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11470BF0)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZECHARGECONFIG_OFFSET UNITYSDK_OFFSET(0x11470A20)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZEDRONECONFIG_OFFSET UNITYSDK_OFFSET(0x11470850)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11470800)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE__CTOR_OFFSET UNITYSDK_OFFSET(0x11471180)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x114713A0)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x114713B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHackerDrone_TypeDefinitionIndex = 82281;

	class ConfigHackerDrone : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HackerDroneConfig*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::HackerDroneConfig*>* SerializedData; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HackChargeConfig*>* ChargeMappings; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::HackChargeConfig*>* ChargeSerializedData; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerializeDroneConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZEDRONECONFIG_OFFSET))(this);
		}

		::System::Void OnAfterDeserializeDroneConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZEDRONECONFIG_OFFSET))(this);
		}

		::System::Void OnBeforeSerializeChargeConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZECHARGECONFIG_OFFSET))(this);
		}

		::System::Void OnAfterDeserializeChargeConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZECHARGECONFIG_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}

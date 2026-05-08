#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HackerDroneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1241CD40)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1241CB70)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1241CFE0)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1241D140)
#define MOLEMOLE_CONFIG_CONFIGHACKERDRONE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1241D150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHackerDrone_TypeDefinitionIndex = 63691;

	class ConfigHackerDrone : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HackerDroneConfig*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::HackerDroneConfig*>* SerializedData; // 0x60

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

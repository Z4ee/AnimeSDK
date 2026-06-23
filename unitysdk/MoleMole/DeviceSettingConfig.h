#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DeviceSettingPredicateBase; }
namespace MoleMole { class DeviceSettingProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DEVICESETTINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA67850)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingConfig_TypeDefinitionIndex = 56323;

	class DeviceSettingConfig : public ::System::Object
	{
	public:
		::System::String* DefaultDeviceSettingProfileKey; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DeviceSettingProfile*>* DeviceSettingProfileDict; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::DeviceSettingPredicateBase*>* DeviceSettingPredicateList; // 0x20
		::System::String* EditorDeviceSettingProfileKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGCONFIG__CTOR_OFFSET))(this);
		}
	};
}

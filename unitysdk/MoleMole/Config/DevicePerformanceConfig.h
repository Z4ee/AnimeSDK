#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DeviceSettingConfig; }
namespace MoleMole { class GraphicSettingProfileConfig; }
namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }
namespace MoleMole { class PerformanceSettingProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DEVICEPERFORMANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46A100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DevicePerformanceConfig_TypeDefinitionIndex = 68877;

	class DevicePerformanceConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::PerformanceSettingProfile*>* PerformanceSettingProfileDict; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::PerformanceSettingPostProcessProfileBase*>* PerformanceSettingPostProcessProfileList; // 0x18
		::MoleMole::GraphicSettingProfileConfig* GraphicSettingProfileConfig; // 0x20
		::MoleMole::DeviceSettingConfig* DeviceSettingConfig; // 0x28
		::System::Boolean EditorMutePerformanceSettingPostProcess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEVICEPERFORMANCECONFIG__CTOR_OFFSET))(this);
		}
	};
}

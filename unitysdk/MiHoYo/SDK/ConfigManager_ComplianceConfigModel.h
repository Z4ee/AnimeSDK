#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AbTestConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_COMPLIANCECONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75D690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_ComplianceConfigModel_TypeDefinitionIndex = 8168;

	class ConfigManager_ComplianceConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AbTestConfig*>* abtestOS; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_COMPLIANCECONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}

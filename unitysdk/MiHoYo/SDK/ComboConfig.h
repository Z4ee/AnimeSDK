#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class QRAppIcons; }
namespace MiHoYo::SDK { class QREnabledApps; }
namespace System { class String; }

#define MIHOYO_SDK_COMBOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D494CB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ComboConfig_TypeDefinitionIndex = 20022;

	class ComboConfig : public ::System::Object
	{
	public:
		::System::Boolean protocol; // 0x10
		::System::Boolean qrEnabled; // 0x11
		::System::String* announceURL; // 0x18
		::System::Boolean userCenterEnabled; // 0x20
		::MiHoYo::SDK::QREnabledApps* qrEnabledApps; // 0x28
		::MiHoYo::SDK::QRAppIcons* qrAppIcons; // 0x30
		::System::String* qrAppDisplayName; // 0x38
		::System::String* qrCloudDisplayName; // 0x40

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* json)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMBOCONFIG__CTOR_OFFSET))(this, json);
		}
	};
}

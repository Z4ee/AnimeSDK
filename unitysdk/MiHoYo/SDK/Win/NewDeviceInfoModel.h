#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NEWDEVICEINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17134AE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NewDeviceInfoModel_TypeDefinitionIndex = 9005;

	class NewDeviceInfoModel : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ClientType client; // 0x10
		::System::String* deviceName; // 0x18
		::System::String* deviceModel; // 0x20
		::System::String* deviceId; // 0x28
		::System::Int64 time; // 0x30

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NEWDEVICEINFOMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}

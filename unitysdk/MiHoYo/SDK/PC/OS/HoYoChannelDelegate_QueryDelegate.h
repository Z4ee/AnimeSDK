#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A274ED0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A274F00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A26E700)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A274DE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_QueryDelegate_TypeDefinitionIndex = 8493;

	class HoYoChannelDelegate_QueryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

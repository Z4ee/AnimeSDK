#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A9A1110)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A9A1140)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A9A0BD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A0BB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_QueryDelegate_TypeDefinitionIndex = 20299;

	class HoYoChannelDelegate_QueryDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams* param)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_INVOKE_OFFSET))(this, param);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams* param, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelQueryParams*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, object);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_QUERYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

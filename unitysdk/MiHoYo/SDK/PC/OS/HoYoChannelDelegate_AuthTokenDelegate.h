#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175A4B30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175A4B70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175A45B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175A4590)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_AuthTokenDelegate_TypeDefinitionIndex = 7521;

	class HoYoChannelDelegate_AuthTokenDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_AUTHTOKENDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

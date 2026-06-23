#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CACE0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CAD20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B6CA760)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CA740)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_FriendListDelegate_TypeDefinitionIndex = 20307;

	class HoYoChannelDelegate_FriendListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1ED20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA1ED60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA12300)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1EC30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_FriendListDelegate_TypeDefinitionIndex = 8501;

	class HoYoChannelDelegate_FriendListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_FRIENDLISTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

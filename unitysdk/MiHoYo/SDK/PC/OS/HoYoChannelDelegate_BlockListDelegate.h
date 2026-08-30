#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A273FC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A274000)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A267F20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A273ED0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_BlockListDelegate_TypeDefinitionIndex = 8502;

	class HoYoChannelDelegate_BlockListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

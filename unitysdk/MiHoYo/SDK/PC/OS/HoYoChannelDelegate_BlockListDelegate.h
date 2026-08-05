#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3C19A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3C19E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3C1410)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C13F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_BlockListDelegate_TypeDefinitionIndex = 20655;

	class HoYoChannelDelegate_BlockListDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_BLOCKLISTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

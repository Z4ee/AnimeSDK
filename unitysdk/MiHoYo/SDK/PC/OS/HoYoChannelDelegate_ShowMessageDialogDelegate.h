#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowMessageDialogResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D32B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D32F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7D2D20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D2D00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ShowMessageDialogDelegate_TypeDefinitionIndex = 20652;

	class HoYoChannelDelegate_ShowMessageDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowMessageDialogResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWMESSAGEDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

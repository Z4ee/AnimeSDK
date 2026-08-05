#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD8B40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD8B80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDD85B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD8590)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ShowErrorDialogDelegate_TypeDefinitionIndex = 20653;

	class HoYoChannelDelegate_ShowErrorDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_INVOKE_OFFSET))(this, param, callback);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams* param, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, param, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

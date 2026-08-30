#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelShowErrorDialogResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7F50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7F90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABC7F40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC7E50)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_ShowErrorDialogDelegate_TypeDefinitionIndex = 8500;

	class HoYoChannelDelegate_ShowErrorDialogDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelShowErrorDialogResult*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SHOWERRORDIALOGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

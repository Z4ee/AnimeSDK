#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB110C0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB110F0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB110B0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB11040)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_AsyncAcquireSessionTicketDelegate_TypeDefinitionIndex = 7661;

	class WeGameDelegate_AsyncAcquireSessionTicketDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

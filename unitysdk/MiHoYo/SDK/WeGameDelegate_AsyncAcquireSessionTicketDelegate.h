#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D774830)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D774860)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D774310)
#define MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7742F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_AsyncAcquireSessionTicketDelegate_TypeDefinitionIndex = 19816;

	class WeGameDelegate_AsyncAcquireSessionTicketDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ASYNCACQUIRESESSIONTICKETDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

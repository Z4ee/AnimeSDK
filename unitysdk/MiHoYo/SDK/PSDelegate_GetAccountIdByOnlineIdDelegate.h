#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x175FA190)
#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x175FA1D0)
#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x175D47A0)
#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175FA170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_GetAccountIdByOnlineIdDelegate_TypeDefinitionIndex = 6793;

	class PSDelegate_GetAccountIdByOnlineIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* onlineId, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE_INVOKE_OFFSET))(this, onlineId, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* onlineId, ::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE_BEGININVOKE_OFFSET))(this, onlineId, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDBYONLINEIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

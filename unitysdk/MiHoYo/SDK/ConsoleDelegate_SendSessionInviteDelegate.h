#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93FD90)
#define MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93FDD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93FD80)
#define MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93FD00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_SendSessionInviteDelegate_TypeDefinitionIndex = 7579;

	class ConsoleDelegate_SendSessionInviteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDSESSIONINVITEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

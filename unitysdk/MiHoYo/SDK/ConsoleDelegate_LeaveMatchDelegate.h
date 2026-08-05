#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A6D50)
#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A6D90)
#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4A67C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A67A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_LeaveMatchDelegate_TypeDefinitionIndex = 19762;

	class ConsoleDelegate_LeaveMatchDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* jsonInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE_INVOKE_OFFSET))(this, jsonInfo, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonInfo, ::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE_BEGININVOKE_OFFSET))(this, jsonInfo, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_LEAVEMATCHDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

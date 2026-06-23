#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0D4480)
#define MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0D44C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0D3F00)
#define MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D3EE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CreateMatchDelegate_TypeDefinitionIndex = 19410;

	class ConsoleDelegate_CreateMatchDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* jsonInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE_INVOKE_OFFSET))(this, jsonInfo, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* jsonInfo, ::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE_BEGININVOKE_OFFSET))(this, jsonInfo, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CREATEMATCHDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

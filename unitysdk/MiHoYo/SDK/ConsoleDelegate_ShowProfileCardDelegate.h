#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0D7D30)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0D7D70)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0D77B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D7790)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_ShowProfileCardDelegate_TypeDefinitionIndex = 19433;

	class ConsoleDelegate_ShowProfileCardDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* xuid, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE_INVOKE_OFFSET))(this, xuid, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* xuid, ::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE_BEGININVOKE_OFFSET))(this, xuid, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SHOWPROFILECARDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

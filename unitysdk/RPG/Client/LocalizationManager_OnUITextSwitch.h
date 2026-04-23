#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA6F7890)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA6F78C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH_INVOKE_OFFSET UNITYSDK_OFFSET(0xA6F7340)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F7320)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_OnUITextSwitch_TypeDefinitionIndex = 56579;

	class LocalizationManager_OnUITextSwitch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH_INVOKE_OFFSET))(this, arg);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH_BEGININVOKE_OFFSET))(this, arg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTSWITCH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

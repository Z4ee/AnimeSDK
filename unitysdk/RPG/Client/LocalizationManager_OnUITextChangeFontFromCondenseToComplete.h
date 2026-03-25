#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9A49C40)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9A49C70)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A499A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A49980)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_OnUITextChangeFontFromCondenseToComplete_TypeDefinitionIndex = 49756;

	class LocalizationManager_OnUITextChangeFontFromCondenseToComplete : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

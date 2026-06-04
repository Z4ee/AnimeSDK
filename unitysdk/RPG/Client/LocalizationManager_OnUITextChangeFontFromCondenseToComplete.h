#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE57ED0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE57F00)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE57EC0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE__CTOR_OFFSET UNITYSDK_OFFSET(0xBE57E50)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_OnUITextChangeFontFromCondenseToComplete_TypeDefinitionIndex = 57355;

	class LocalizationManager_OnUITextChangeFontFromCondenseToComplete : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

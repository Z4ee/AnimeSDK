#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9A4A8C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9A4A910)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A4A550)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A4A530)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_OnUIWorldFontChange_TypeDefinitionIndex = 49758;

	class LocalizationManager_OnUIWorldFontChange : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean toWorldFont)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_INVOKE_OFFSET))(this, toWorldFont);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean toWorldFont, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_BEGININVOKE_OFFSET))(this, toWorldFont, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

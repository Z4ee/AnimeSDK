#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LanguageModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEMODEL_OFFSET UNITYSDK_OFFSET(0x19C7C6A0)
#define MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGESTRING_OFFSET UNITYSDK_OFFSET(0x19C7C8E0)
#define MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEVERSION_OFFSET UNITYSDK_OFFSET(0x19C7CBF0)
#define MIHOYO_SDK_LANGUAGEMANAGER_GETSTORAGELANGUAGE_OFFSET UNITYSDK_OFFSET(0x19C7BFE0)
#define MIHOYO_SDK_LANGUAGEMANAGER_ISVALIDREQUEST_OFFSET UNITYSDK_OFFSET(0x19C7D980)
#define MIHOYO_SDK_LANGUAGEMANAGER_LOADLOCALLANGUAGE_OFFSET UNITYSDK_OFFSET(0x19C7C430)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGERESPONSE_OFFSET UNITYSDK_OFFSET(0x19C7DA10)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGETIMEOUT_OFFSET UNITYSDK_OFFSET(0x19C7DDA0)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19C7DA00)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSION_OFFSET UNITYSDK_OFFSET(0x19C7D540)
#define MIHOYO_SDK_LANGUAGEMANAGER_REQUESTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x19C7D9A0)
#define MIHOYO_SDK_LANGUAGEMANAGER_REQUESTVERSION_OFFSET UNITYSDK_OFFSET(0x19C7C880)
#define MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGESTRING_OFFSET UNITYSDK_OFFSET(0x19C7D210)
#define MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGEVERSION_OFFSET UNITYSDK_OFFSET(0x19C7CED0)
#define MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x19C6DE70)
#define MIHOYO_SDK_LANGUAGEMANAGER_UPDATELANGUAGEMODEL_OFFSET UNITYSDK_OFFSET(0x19C7C230)
#define MIHOYO_SDK_LANGUAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C7DDC0)
#define MIHOYO_SDK_LANGUAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7DDB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager_TypeDefinitionIndex = 18937;

	class LanguageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::LanguageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::LanguageManager**)Il2CppClass::FromTypeDefinitionIndex(LanguageManager_TypeDefinitionIndex)->GetStaticField(0xA080);
		}
		// static const ::System::String* LANGUAGE_VERSION; // 0x0
		// static const ::System::String* LANGUAGE_FILE; // 0x0
		// static const ::System::String* LANGUAGE_KEY; // 0x0
		// static const ::System::String* NOTICE_LANGUAGE_KEY; // 0x0
		::System::String* currentLanguage; // 0x10
		::System::Int32 newVersion; // 0x18
		::System::Boolean isRequest; // 0x1C
		::MiHoYo::SDK::EnvType currentEnv; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetLanguage(::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGE_OFFSET))(this, language);
		}

		::System::String* GetStorageLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETSTORAGELANGUAGE_OFFSET))(this);
		}

		::MiHoYo::SDK::LanguageModel* LoadLocalLanguage(::System::String* language)
		{
			return ((::MiHoYo::SDK::LanguageModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_LOADLOCALLANGUAGE_OFFSET))(this, language);
		}

		::System::Void UpdateLanguageModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_UPDATELANGUAGEMODEL_OFFSET))(this);
		}

		::MiHoYo::SDK::LanguageModel* GetLanguageModel(::System::String* language)
		{
			return ((::MiHoYo::SDK::LanguageModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEMODEL_OFFSET))(this, language);
		}

		::System::Int32 GetLanguageVersion(::System::String* language, ::MiHoYo::SDK::EnvType env)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEVERSION_OFFSET))(this, language, env);
		}

		::System::Void SetLanguageVersion(::System::Int32 version, ::MiHoYo::SDK::EnvType env, ::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::EnvType, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGEVERSION_OFFSET))(this, version, env, language);
		}

		::System::String* GetLanguageString(::System::String* language)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGESTRING_OFFSET))(this, language);
		}

		::System::Void SetLanguageString(::System::String* languageText, ::System::String* language, ::MiHoYo::SDK::EnvType env)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGESTRING_OFFSET))(this, languageText, language, env);
		}

		::System::Void OnGetVersion(::System::String* responseString, ::System::String* strRequestLangCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSION_OFFSET))(this, responseString, strRequestLangCode);
		}

		::System::Void OnGetVersionTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSIONTIMEOUT_OFFSET))(this);
		}

		::System::Boolean IsValidRequest(::System::String* strRequestLangCode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ISVALIDREQUEST_OFFSET))(this, strRequestLangCode);
		}

		::System::Void OnGetLanguageResponse(::System::String* responseString, ::System::String* strRequestLangCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGERESPONSE_OFFSET))(this, responseString, strRequestLangCode);
		}

		::System::Void OnGetLanguageTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGETIMEOUT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RequestVersion(::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_REQUESTVERSION_OFFSET))(this, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* RequestLanguage(::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_REQUESTLANGUAGE_OFFSET))(this, callback, timeoutCallback);
		}
	};
}

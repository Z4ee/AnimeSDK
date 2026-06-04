#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LanguageModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEMODEL_OFFSET UNITYSDK_OFFSET(0x18355300)
#define MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGESTRING_OFFSET UNITYSDK_OFFSET(0x183554B0)
#define MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEVERSION_OFFSET UNITYSDK_OFFSET(0x18355700)
#define MIHOYO_SDK_LANGUAGEMANAGER_GETSTORAGELANGUAGE_OFFSET UNITYSDK_OFFSET(0x18354B80)
#define MIHOYO_SDK_LANGUAGEMANAGER_ISVALIDREQUEST_OFFSET UNITYSDK_OFFSET(0x183560F0)
#define MIHOYO_SDK_LANGUAGEMANAGER_LOADLOCALLANGUAGE_OFFSET UNITYSDK_OFFSET(0x18355070)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGERESPONSE_OFFSET UNITYSDK_OFFSET(0x18356160)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGETIMEOUT_OFFSET UNITYSDK_OFFSET(0x18356440)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18356150)
#define MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSION_OFFSET UNITYSDK_OFFSET(0x18355D60)
#define MIHOYO_SDK_LANGUAGEMANAGER_REQUESTLANGUAGE_OFFSET UNITYSDK_OFFSET(0x18356110)
#define MIHOYO_SDK_LANGUAGEMANAGER_REQUESTVERSION_OFFSET UNITYSDK_OFFSET(0x18355470)
#define MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGESTRING_OFFSET UNITYSDK_OFFSET(0x18355B50)
#define MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGEVERSION_OFFSET UNITYSDK_OFFSET(0x18355930)
#define MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0x18353E30)
#define MIHOYO_SDK_LANGUAGEMANAGER_UPDATELANGUAGEMODEL_OFFSET UNITYSDK_OFFSET(0x18354E10)
#define MIHOYO_SDK_LANGUAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18356480)
#define MIHOYO_SDK_LANGUAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18356470)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager_TypeDefinitionIndex = 8014;

	class LanguageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::LanguageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::LanguageManager**)Il2CppClass::FromTypeDefinitionIndex(LanguageManager_TypeDefinitionIndex)->GetStaticField(0x101E0);
		}
		// static const ::System::String* LANGUAGE_VERSION; // 0x0
		// static const ::System::String* LANGUAGE_FILE; // 0x0
		// static const ::System::String* LANGUAGE_KEY; // 0x0
		// static const ::System::String* NOTICE_LANGUAGE_KEY; // 0x0
		::System::String* currentLanguage; // 0x10
		::MiHoYo::SDK::EnvType currentEnv; // 0x18
		::System::Int32 newVersion; // 0x1C
		::System::Boolean isRequest; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGE_OFFSET))(this, a1);
		}

		::System::String* GetStorageLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETSTORAGELANGUAGE_OFFSET))(this);
		}

		::MiHoYo::SDK::LanguageModel* LoadLocalLanguage(::System::String* a1)
		{
			return ((::MiHoYo::SDK::LanguageModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_LOADLOCALLANGUAGE_OFFSET))(this, a1);
		}

		::System::Void UpdateLanguageModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_UPDATELANGUAGEMODEL_OFFSET))(this);
		}

		::MiHoYo::SDK::LanguageModel* GetLanguageModel(::System::String* a1)
		{
			return ((::MiHoYo::SDK::LanguageModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEMODEL_OFFSET))(this, a1);
		}

		::System::Int32 GetLanguageVersion(::System::String* a1, ::MiHoYo::SDK::EnvType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGEVERSION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLanguageVersion(::System::Int32 a1, ::MiHoYo::SDK::EnvType a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::EnvType, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGEVERSION_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetLanguageString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_GETLANGUAGESTRING_OFFSET))(this, a1);
		}

		::System::Void SetLanguageString(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::EnvType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_SETLANGUAGESTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGetVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSION_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetVersionTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETVERSIONTIMEOUT_OFFSET))(this);
		}

		::System::Boolean IsValidRequest(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ISVALIDREQUEST_OFFSET))(this, a1);
		}

		::System::Void OnGetLanguageResponse(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGERESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetLanguageTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_ONGETLANGUAGETIMEOUT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RequestVersion(::System::Action_1<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_REQUESTVERSION_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* RequestLanguage(::System::Action_1<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER_REQUESTLANGUAGE_OFFSET))(this, a1, a2);
		}
	};
}

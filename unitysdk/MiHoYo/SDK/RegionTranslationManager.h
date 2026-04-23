#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETREGIONNAME_OFFSET UNITYSDK_OFFSET(0x17630450)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMASSET_OFFSET UNITYSDK_OFFSET(0x17631050)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMSTORAGE_OFFSET UNITYSDK_OFFSET(0x17630D80)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONVERSIONFROMSTORAGE_OFFSET UNITYSDK_OFFSET(0x176312D0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADLOCALTRANSLATION_OFFSET UNITYSDK_OFFSET(0x176309A0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADREMOTETRANSLATION_OFFSET UNITYSDK_OFFSET(0x17630B50)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x17632150)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x17632420)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x17632140)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSION_OFFSET UNITYSDK_OFFSET(0x17631C10)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_PARSETRANSLATION_OFFSET UNITYSDK_OFFSET(0x176310C0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTETRANSLATION_OFFSET UNITYSDK_OFFSET(0x176320E0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTEVERSION_OFFSET UNITYSDK_OFFSET(0x17631BD0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONSTRINGTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x176318C0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONVERSIONTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x176315D0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_UPDATETRANSLATION_OFFSET UNITYSDK_OFFSET(0x17630900)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17632480)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17632450)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager_TypeDefinitionIndex = 7000;

	class RegionTranslationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RegionTranslationManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::RegionTranslationManager**)Il2CppClass::FromTypeDefinitionIndex(RegionTranslationManager_TypeDefinitionIndex)->GetStaticField(0x19C30);
		}
		// static const ::System::String* REGION_TRANSLATION_VERSION; // 0x0
		// static const ::System::String* REGION_TRANSLATION_FILE; // 0x0
		::MiHoYo::SDK::JSONObject* regionNameTable; // 0x10
		::System::Boolean remoteRequestPending; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__CCTOR_OFFSET))();
		}

		::System::String* GetRegionName(::System::String* code)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETREGIONNAME_OFFSET))(this, code);
		}

		::System::Void UpdateTranslation(::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_UPDATETRANSLATION_OFFSET))(this, language);
		}

		::System::Void LoadLocalTranslation(::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADLOCALTRANSLATION_OFFSET))(this, language);
		}

		::System::Int32 GetTranslationVersionFromStorage(::System::String* language)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONVERSIONFROMSTORAGE_OFFSET))(this, language);
		}

		::System::Void SaveTranslationVersionToStorage(::System::Int32 version, ::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONVERSIONTOSTORAGE_OFFSET))(this, version, language);
		}

		::System::String* GetTranslationStringFromStorage(::System::String* language)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMSTORAGE_OFFSET))(this, language);
		}

		::System::Void SaveTranslationStringToStorage(::System::String* translation, ::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONSTRINGTOSTORAGE_OFFSET))(this, translation, language);
		}

		::System::String* GetTranslationStringFromAsset(::System::String* language)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMASSET_OFFSET))(this, language);
		}

		::System::Void LoadRemoteTranslation(::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADREMOTETRANSLATION_OFFSET))(this, language);
		}

		::System::Void OnGetRemoteVersion(::System::String* responseString, ::System::String* language)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSION_OFFSET))(this, responseString, language);
		}

		::System::Void OnGetRemoteVersionTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSIONTIMEOUT_OFFSET))(this);
		}

		::System::Void OnGetRemoteTranslationResponse(::System::String* responseString, ::System::String* language, ::System::Int32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONRESPONSE_OFFSET))(this, responseString, language, version);
		}

		::System::Void OnGetRemoteTranslationTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONTIMEOUT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RequestRemoteVersion(::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTEVERSION_OFFSET))(this, callback, timeoutCallback);
		}

		::System::Collections::IEnumerator* RequestRemoteTranslation(::System::String* language, ::System::Action_1<::System::String*>* callback, ::System::Action* timeoutCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTETRANSLATION_OFFSET))(this, language, callback, timeoutCallback);
		}

		::MiHoYo::SDK::JSONObject* ParseTranslation(::System::String* translation)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_PARSETRANSLATION_OFFSET))(this, translation);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETREGIONNAME_OFFSET UNITYSDK_OFFSET(0x1BAB5EF0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMASSET_OFFSET UNITYSDK_OFFSET(0x1BAB6AF0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BAB68A0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONVERSIONFROMSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BAB6D20)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADLOCALTRANSLATION_OFFSET UNITYSDK_OFFSET(0x1BAB64D0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADREMOTETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1BAB6610)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x1BAB7A90)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BAB7CB0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSIONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BAB7A80)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSION_OFFSET UNITYSDK_OFFSET(0x1BAB74B0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_PARSETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1BAB6B40)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1BAB7A30)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTEVERSION_OFFSET UNITYSDK_OFFSET(0x1BAB7470)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONSTRINGTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BAB7210)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONVERSIONTOSTORAGE_OFFSET UNITYSDK_OFFSET(0x1BAB6FA0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER_UPDATETRANSLATION_OFFSET UNITYSDK_OFFSET(0x1BAB6430)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAB7D10)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB7CE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager_TypeDefinitionIndex = 7913;

	class RegionTranslationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RegionTranslationManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::RegionTranslationManager**)Il2CppClass::FromTypeDefinitionIndex(RegionTranslationManager_TypeDefinitionIndex)->GetStaticField(0xB8D0);
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

		::System::String* GetRegionName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETREGIONNAME_OFFSET))(this, a1);
		}

		::System::Void UpdateTranslation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_UPDATETRANSLATION_OFFSET))(this, a1);
		}

		::System::Void LoadLocalTranslation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADLOCALTRANSLATION_OFFSET))(this, a1);
		}

		::System::Int32 GetTranslationVersionFromStorage(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONVERSIONFROMSTORAGE_OFFSET))(this, a1);
		}

		::System::Void SaveTranslationVersionToStorage(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONVERSIONTOSTORAGE_OFFSET))(this, a1, a2);
		}

		::System::String* GetTranslationStringFromStorage(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMSTORAGE_OFFSET))(this, a1);
		}

		::System::Void SaveTranslationStringToStorage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_SAVETRANSLATIONSTRINGTOSTORAGE_OFFSET))(this, a1, a2);
		}

		::System::String* GetTranslationStringFromAsset(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_GETTRANSLATIONSTRINGFROMASSET_OFFSET))(this, a1);
		}

		::System::Void LoadRemoteTranslation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_LOADREMOTETRANSLATION_OFFSET))(this, a1);
		}

		::System::Void OnGetRemoteVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSION_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetRemoteVersionTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTEVERSIONTIMEOUT_OFFSET))(this);
		}

		::System::Void OnGetRemoteTranslationResponse(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONRESPONSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGetRemoteTranslationTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_ONGETREMOTETRANSLATIONTIMEOUT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* RequestRemoteVersion(::System::Action_1<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTEVERSION_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* RequestRemoteTranslation(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::System::Action* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_REQUESTREMOTETRANSLATION_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::JSONObject* ParseTranslation(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER_PARSETRANSLATION_OFFSET))(this, a1);
		}
	};
}

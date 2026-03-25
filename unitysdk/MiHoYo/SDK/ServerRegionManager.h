#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { template <typename T> class LazyUtil_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_SERVERREGIONMANAGER_ADDREGIONURLSTOHOSTS_OFFSET UNITYSDK_OFFSET(0x15FFA0C0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONSUPPORTKEY_OFFSET UNITYSDK_OFFSET(0x15FF83C0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONURLSET_OFFSET UNITYSDK_OFFSET(0x15FF9D70)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETSERVERREGIONCOOKIE_OFFSET UNITYSDK_OFFSET(0x15FF9030)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x15FF8120)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_DOMAINREGIONENABLE_OFFSET UNITYSDK_OFFSET(0x15FF83A0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15FF7E70)
#define MIHOYO_SDK_SERVERREGIONMANAGER_LOADCONFIGURL_OFFSET UNITYSDK_OFFSET(0x15FF8640)
#define MIHOYO_SDK_SERVERREGIONMANAGER_NEEDSETREGIONCOOKIE_OFFSET UNITYSDK_OFFSET(0x15FFA3A0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x15FF9820)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSRESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x15FF98A0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSURL_OFFSET UNITYSDK_OFFSET(0x15FF92D0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_SETREGIONBYCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x15FFA430)
#define MIHOYO_SDK_SERVERREGIONMANAGER_SET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x15FF8130)
#define MIHOYO_SDK_SERVERREGIONMANAGER_UPDATEPASSPORTREGION_OFFSET UNITYSDK_OFFSET(0x15FF9BC0)
#define MIHOYO_SDK_SERVERREGIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FFA630)
#define MIHOYO_SDK_SERVERREGIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF7F30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerRegionManager_TypeDefinitionIndex = 6961;

	class ServerRegionManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ServerRegionManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::ServerRegionManager**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13A40);
		}
		static ::System::String** StaticGet_WEB_COOKIE_ENABLE_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13A48);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_webDomainWhiteList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13A50);
		}
		static ::System::String** StaticGet_REQUEST_HEADER_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13A58);
		}
		static ::System::String** StaticGet_WEB_COOKIE_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13A60);
		}
		static ::System::String** StaticGet_RESPONSE_HEADER_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13A68);
		}
		::MiHoYo::SDK::LazyUtil_1<::System::Boolean>* domainRegionEnable; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* serverRegionUrls; // 0x18
		::System::String* _currentRegion; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* supportedUrls; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::ServerRegionManager* get_Instance()
		{
			return ((::MiHoYo::SDK::ServerRegionManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* get_CurrentRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GET_CURRENTREGION_OFFSET))(this);
		}

		::System::Void set_CurrentRegion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_SET_CURRENTREGION_OFFSET))(this, value);
		}

		::System::Boolean get_DomainRegionEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GET_DOMAINREGIONENABLE_OFFSET))(this);
		}

		::System::String* GetRegionSupportKey(::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONSUPPORTKEY_OFFSET))(this, url);
		}

		::System::Void LoadConfigUrl(::MiHoYo::SDK::JSONNode* json)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_LOADCONFIGURL_OFFSET))(this, json);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetServerRegionCookie()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GETSERVERREGIONCOOKIE_OFFSET))(this);
		}

		::System::String* ProcessUrl(::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSURL_OFFSET))(this, url);
		}

		::System::Void ProcessRequestHeaders(::UnityEngine::Networking::UnityWebRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSREQUESTHEADERS_OFFSET))(this, request);
		}

		::System::Void ProcessResponseHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* responseHeaders, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSRESPONSEHEADERS_OFFSET))(this, responseHeaders, url);
		}

		::MiHoYo::SDK::JSONObject* GetRegionUrlSet(::System::String* urlKey, ::System::String* defaultUrl, ::System::String* replaceKey)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONURLSET_OFFSET))(this, urlKey, defaultUrl, replaceKey);
		}

		::System::Void AddRegionUrlsToHosts(::MiHoYo::SDK::JSONObject* hosts, ::System::String* urlKey, ::System::String* replaceKey, ::System::String* defaultUrl)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_ADDREGIONURLSTOHOSTS_OFFSET))(this, hosts, urlKey, replaceKey, defaultUrl);
		}

		static ::System::Boolean NeedSetRegionCookie(::System::String* domain)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_NEEDSETREGIONCOOKIE_OFFSET))(domain);
		}

		::System::Void UpdatePassportRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_UPDATEPASSPORTREGION_OFFSET))(this);
		}

		::System::Void SetRegionByCountryCode(::System::String* country)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_SETREGIONBYCOUNTRYCODE_OFFSET))(this, country);
		}
	};
}

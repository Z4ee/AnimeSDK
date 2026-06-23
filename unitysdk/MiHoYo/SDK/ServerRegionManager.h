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

#define MIHOYO_SDK_SERVERREGIONMANAGER_ADDREGIONURLSTOHOSTS_OFFSET UNITYSDK_OFFSET(0x1BF7D610)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONSUPPORTKEY_OFFSET UNITYSDK_OFFSET(0x1BF7B9F0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONURLSET_OFFSET UNITYSDK_OFFSET(0x1BF7D200)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETSERVERREGIONCOOKIE_OFFSET UNITYSDK_OFFSET(0x1BF7C4E0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x1BF7B840)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_DOMAINREGIONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF7B9D0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BF7B540)
#define MIHOYO_SDK_SERVERREGIONMANAGER_LOADCONFIGURL_OFFSET UNITYSDK_OFFSET(0x1BF7BBE0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_NEEDSETREGIONCOOKIE_OFFSET UNITYSDK_OFFSET(0x1BF7DA40)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x1BF7CC30)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSRESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1BF7CCF0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSURL_OFFSET UNITYSDK_OFFSET(0x1BF7C770)
#define MIHOYO_SDK_SERVERREGIONMANAGER_SETREGIONBYCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1BF7DAD0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_SET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x1BF7B850)
#define MIHOYO_SDK_SERVERREGIONMANAGER_UPDATEPASSPORTREGION_OFFSET UNITYSDK_OFFSET(0x1BF7D050)
#define MIHOYO_SDK_SERVERREGIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF7DC20)
#define MIHOYO_SDK_SERVERREGIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7B630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerRegionManager_TypeDefinitionIndex = 19725;

	class ServerRegionManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_RESPONSE_HEADER_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0xB3D0);
		}
		static ::System::String** StaticGet_WEB_COOKIE_ENABLE_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0xB3D8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_webDomainWhiteList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0xB3E0);
		}
		static ::System::String** StaticGet_WEB_COOKIE_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0xB3E8);
		}
		static ::MiHoYo::SDK::ServerRegionManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::ServerRegionManager**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0xB3F0);
		}
		static ::System::String** StaticGet_REQUEST_HEADER_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0xB3F8);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* supportedUrls; // 0x10
		::System::String* _currentRegion; // 0x18
		::MiHoYo::SDK::LazyUtil_1<::System::Boolean>* domainRegionEnable; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* serverRegionUrls; // 0x28

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

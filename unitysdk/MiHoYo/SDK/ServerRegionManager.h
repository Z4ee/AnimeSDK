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

#define MIHOYO_SDK_SERVERREGIONMANAGER_ADDREGIONURLSTOHOSTS_OFFSET UNITYSDK_OFFSET(0x1BAD4F20)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONSUPPORTKEY_OFFSET UNITYSDK_OFFSET(0x1BAD3010)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONURLSET_OFFSET UNITYSDK_OFFSET(0x1BAD4BD0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GETSERVERREGIONCOOKIE_OFFSET UNITYSDK_OFFSET(0x1BAD3CF0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x1BAD2DC0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_DOMAINREGIONENABLE_OFFSET UNITYSDK_OFFSET(0x1BAD2FF0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BAD2B00)
#define MIHOYO_SDK_SERVERREGIONMANAGER_LOADCONFIGURL_OFFSET UNITYSDK_OFFSET(0x1BAD3320)
#define MIHOYO_SDK_SERVERREGIONMANAGER_NEEDSETREGIONCOOKIE_OFFSET UNITYSDK_OFFSET(0x1BAD5150)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x1BAD4620)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSRESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1BAD46A0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSURL_OFFSET UNITYSDK_OFFSET(0x1BAD4040)
#define MIHOYO_SDK_SERVERREGIONMANAGER_SETREGIONBYCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1BAD51E0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_SET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x1BAD2DD0)
#define MIHOYO_SDK_SERVERREGIONMANAGER_UPDATEPASSPORTREGION_OFFSET UNITYSDK_OFFSET(0x1BAD4A20)
#define MIHOYO_SDK_SERVERREGIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAD5380)
#define MIHOYO_SDK_SERVERREGIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD2BC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ServerRegionManager_TypeDefinitionIndex = 7920;

	class ServerRegionManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_RESPONSE_HEADER_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13BF0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_webDomainWhiteList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13BF8);
		}
		static ::System::String** StaticGet_WEB_COOKIE_ENABLE_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13C00);
		}
		static ::System::String** StaticGet_REQUEST_HEADER_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13C08);
		}
		static ::System::String** StaticGet_WEB_COOKIE_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13C10);
		}
		static ::MiHoYo::SDK::ServerRegionManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::ServerRegionManager**)Il2CppClass::FromTypeDefinitionIndex(ServerRegionManager_TypeDefinitionIndex)->GetStaticField(0x13C18);
		}
		::System::String* _currentRegion; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* supportedUrls; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* serverRegionUrls; // 0x20
		::MiHoYo::SDK::LazyUtil_1<::System::Boolean>* domainRegionEnable; // 0x28

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

		::System::Void set_CurrentRegion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_SET_CURRENTREGION_OFFSET))(this, a1);
		}

		::System::Boolean get_DomainRegionEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GET_DOMAINREGIONENABLE_OFFSET))(this);
		}

		::System::String* GetRegionSupportKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONSUPPORTKEY_OFFSET))(this, a1);
		}

		::System::Void LoadConfigUrl(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_LOADCONFIGURL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetServerRegionCookie()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GETSERVERREGIONCOOKIE_OFFSET))(this);
		}

		::System::String* ProcessUrl(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSURL_OFFSET))(this, a1);
		}

		::System::Void ProcessRequestHeaders(::UnityEngine::Networking::UnityWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSREQUESTHEADERS_OFFSET))(this, a1);
		}

		::System::Void ProcessResponseHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_PROCESSRESPONSEHEADERS_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONObject* GetRegionUrlSet(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_GETREGIONURLSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddRegionUrlsToHosts(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_ADDREGIONURLSTOHOSTS_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean NeedSetRegionCookie(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_NEEDSETREGIONCOOKIE_OFFSET))(a1);
		}

		::System::Void UpdatePassportRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_UPDATEPASSPORTREGION_OFFSET))(this);
		}

		::System::Void SetRegionByCountryCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_SETREGIONBYCOUNTRYCODE_OFFSET))(this, a1);
		}
	};
}

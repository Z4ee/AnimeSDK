#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x175F4640)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x175F4890)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x175CF3A0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x175CD740)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x175CC190)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET UNITYSDK_OFFSET(0x175CC130)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET UNITYSDK_OFFSET(0x175CC440)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x175F4D50)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x175F4A10)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x175CD450)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x175F4920)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x175F4E50)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x175F4E40)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 7681;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x1D520);
		}
		::MiHoYo::SDK::JSONNode* _latestProtocolInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::JSONNode* get_LatestProtocolInfo()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET))(this);
		}

		::System::Void GetServerProtocolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementAcceptedLocally(::System::String* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET))(this, account);
		}

		::System::Boolean IsUserAgreementUpdated(::System::String* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET))(this, account);
		}

		::System::Void SaveLatestProtocolInfo(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET))(this, account);
		}

		::System::Void OnGetLatestProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET))(this, response);
		}

		::MiHoYo::SDK::JSONNode* GetLocalProtocolInfo(::System::String* account)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET))(this, account);
		}

		::System::String* GetProtocolVersionKey(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, accountKey);
		}

		::System::Boolean SaveProtocolInfoData(::System::String* key, ::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET))(this, key, data);
		}

		::System::String* LoadProtocolInfoData(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET))(this, key);
		}
	};
}

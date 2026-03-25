#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x15EAF470)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x15EB0070)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x15EAED90)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x15EAED80)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x15EAF1C0)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET UNITYSDK_OFFSET(0x15EAF160)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET UNITYSDK_OFFSET(0x15EAF6B0)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x15EB0530)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x15EB01F0)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x15EAFD80)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x15EB0100)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EB0630)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB0620)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 7608;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x106B0);
		}
		::MiHoYo::SDK::JSONNode* _latestProtocolInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::JSONNode* get_LatestProtocolInfo()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET))(this);
		}

		::System::Void GetServerProtocolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementAcceptedLocally(::System::String* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET))(this, account);
		}

		::System::Boolean IsUserAgreementUpdated(::System::String* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET))(this, account);
		}

		::System::Void SaveLatestProtocolInfo(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET))(this, account);
		}

		::System::Void OnGetLatestProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET))(this, response);
		}

		::MiHoYo::SDK::JSONNode* GetLocalProtocolInfo(::System::String* account)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET))(this, account);
		}

		::System::String* GetProtocolVersionKey(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, accountKey);
		}

		::System::Boolean SaveProtocolInfoData(::System::String* key, ::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET))(this, key, data);
		}

		::System::String* LoadProtocolInfoData(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET))(this, key);
		}
	};
}

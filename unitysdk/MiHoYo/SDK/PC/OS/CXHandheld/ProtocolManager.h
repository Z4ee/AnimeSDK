#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1B3360D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x1B3367F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1B3358F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1B3358E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x1B335EC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET UNITYSDK_OFFSET(0x1B335E30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET UNITYSDK_OFFSET(0x1B3361D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x1B336C90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B336A30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1B3365E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x1B3368B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B336DC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B336DB0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 20520;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x9BF0);
		}
		::MiHoYo::SDK::JSONNode* _latestProtocolInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::JSONNode* get_LatestProtocolInfo()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET))(this);
		}

		::System::Void GetServerProtocolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementAcceptedLocally(::System::String* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET))(this, account);
		}

		::System::Boolean IsUserAgreementUpdated(::System::String* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET))(this, account);
		}

		::System::Void SaveLatestProtocolInfo(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET))(this, account);
		}

		::System::Void OnGetLatestProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET))(this, response);
		}

		::MiHoYo::SDK::JSONNode* GetLocalProtocolInfo(::System::String* account)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET))(this, account);
		}

		::System::String* GetProtocolVersionKey(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, accountKey);
		}

		::System::Boolean SaveProtocolInfoData(::System::String* key, ::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET))(this, key, data);
		}

		::System::String* LoadProtocolInfoData(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET))(this, key);
		}
	};
}

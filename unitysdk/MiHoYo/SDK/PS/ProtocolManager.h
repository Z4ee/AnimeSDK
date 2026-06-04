#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x183CD990)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x183CDBE0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x183B23D0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x183B08A0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x183AF410)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET UNITYSDK_OFFSET(0x183AF3B0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET UNITYSDK_OFFSET(0x183AF6B0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x183CE040)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x183CDD60)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x183B0620)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x183CDC70)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183CE140)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x183CE130)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 8584;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x187C0);
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

		::System::Boolean IsUserAgreementAcceptedLocally(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET))(this, a1);
		}

		::System::Boolean IsUserAgreementUpdated(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET))(this, a1);
		}

		::System::Void SaveLatestProtocolInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET))(this, a1);
		}

		::System::Void OnGetLatestProtocol(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetLocalProtocolInfo(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET))(this, a1);
		}

		::System::String* GetProtocolVersionKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, a1);
		}

		::System::Boolean SaveProtocolInfoData(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET))(this, a1, a2);
		}

		::System::String* LoadProtocolInfoData(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET))(this, a1);
		}
	};
}

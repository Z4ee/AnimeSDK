#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/LoginManagerHandheld.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1B52AFF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETPROTOCOLCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B529B50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETUSERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B52AF70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1B52B370)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1B52B400)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ONHANDHELDLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B529B60)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_OPENURL_OFFSET UNITYSDK_OFFSET(0x1B52B170)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B529AA0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerCXHandheld_TypeDefinitionIndex = 20504;

	class LoginManagerCXHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld
	{
	public:
		// static const ::System::String* CX; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* cachedFriendList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD__CTOR_OFFSET))(this);
		}

		::System::Int32 GetProtocolChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETPROTOCOLCHANNEL_OFFSET))(this);
		}

		::System::Void OnHandheldLoginCallback(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ONHANDHELDLOGINCALLBACK_OFFSET))(this, response);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::String* GetUserUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETUSERUNIQUEID_OFFSET))(this);
		}

		::System::Void OpenURL(::System::String* url, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_OPENURL_OFFSET))(this, url, closeCallback);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_LOGREPORT_OFFSET))(this, msg, code);
		}
	};
}

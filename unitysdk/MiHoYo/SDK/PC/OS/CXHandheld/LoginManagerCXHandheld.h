#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/LoginManagerHandheld.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1B9FAE70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETPROTOCOLCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B9F9080)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETUSERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B9FC3D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1B9FA760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1B9FF8F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ONHANDHELDLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B9FCE50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_OPENURL_OFFSET UNITYSDK_OFFSET(0x1B9F9090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F8600)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerCXHandheld_TypeDefinitionIndex = 8698;

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

		::System::Void OnHandheldLoginCallback(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ONHANDHELDLOGINCALLBACK_OFFSET))(this, a1);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::String* GetUserUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_GETUSERUNIQUEID_OFFSET))(this);
		}

		::System::Void OpenURL(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_OPENURL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD_LOGREPORT_OFFSET))(this, a1, a2);
		}
	};
}

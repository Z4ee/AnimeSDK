#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/BindManagerHandheld.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1DD429B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1DD42ED0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1DD42B30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1DD43330)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD42870)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerCXHandheld_TypeDefinitionIndex = 20834;

	class BindManagerCXHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerHandheld
	{
	public:
		// static const ::System::String* PlatformTag; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD_REACTIVATEACCOUNT_OFFSET))(this);
		}
	};
}

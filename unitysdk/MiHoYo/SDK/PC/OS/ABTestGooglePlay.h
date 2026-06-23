#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GooglePlayAbTestConfig; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ENTERGOOGLENATIVE_OFFSET UNITYSDK_OFFSET(0x1C3943A0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_GETGOOGLEPLAYABTESTREQUESTMODEL_OFFSET UNITYSDK_OFFSET(0x1C393540)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ONGOOGLEABTESTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C3945B0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_PULLABTEST_OFFSET UNITYSDK_OFFSET(0x1C3932B0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_REQUESTABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C3936D0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C394B30)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3945A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestGooglePlay_TypeDefinitionIndex = 20460;

	class ABTestGooglePlay : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::ABTestGooglePlay** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestGooglePlay**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay_TypeDefinitionIndex)->GetStaticField(0xA8F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CCTOR_OFFSET))();
		}

		::System::Void PullABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_PULLABTEST_OFFSET))(this);
		}

		::System::Boolean EnterGoogleNative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ENTERGOOGLENATIVE_OFFSET))(this);
		}

		::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam* GetGooglePlayABTestRequestModel(::MiHoYo::SDK::GooglePlayAbTestConfig* abTestConfig)
		{
			return ((::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam*(*)(::PVOID, ::MiHoYo::SDK::GooglePlayAbTestConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_GETGOOGLEPLAYABTESTREQUESTMODEL_OFFSET))(this, abTestConfig);
		}

		::System::Void OnGoogleABTestResponse(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ONGOOGLEABTESTRESPONSE_OFFSET))(this, response);
		}

		::System::Void RequestABTestConfig(::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam* param, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_REQUESTABTESTCONFIG_OFFSET))(this, param, paramDict, callback);
		}
	};
}

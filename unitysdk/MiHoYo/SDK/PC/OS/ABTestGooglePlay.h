#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GooglePlayAbTestConfig; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ENTERGOOGLENATIVE_OFFSET UNITYSDK_OFFSET(0x17598A30)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_GETGOOGLEPLAYABTESTREQUESTMODEL_OFFSET UNITYSDK_OFFSET(0x17597EC0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ONGOOGLEABTESTRESPONSE_OFFSET UNITYSDK_OFFSET(0x17598E10)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_PULLABTEST_OFFSET UNITYSDK_OFFSET(0x17597B90)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_REQUESTABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x17598010)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17599450)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x17598DE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestGooglePlay_TypeDefinitionIndex = 7579;

	class ABTestGooglePlay : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::ABTestGooglePlay** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestGooglePlay**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay_TypeDefinitionIndex)->GetStaticField(0x17AB0);
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

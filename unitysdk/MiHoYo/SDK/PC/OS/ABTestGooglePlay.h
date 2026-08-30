#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GooglePlayAbTestConfig; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ENTERGOOGLENATIVE_OFFSET UNITYSDK_OFFSET(0x1B9BDB10)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_GETGOOGLEPLAYABTESTREQUESTMODEL_OFFSET UNITYSDK_OFFSET(0x1B9BCEC0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ONGOOGLEABTESTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B9BDE80)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_PULLABTEST_OFFSET UNITYSDK_OFFSET(0x1B9BCB40)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_REQUESTABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1B9BD0C0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9BE740)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BDE70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestGooglePlay_TypeDefinitionIndex = 8654;

	class ABTestGooglePlay : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::ABTestGooglePlay** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestGooglePlay**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay_TypeDefinitionIndex)->GetStaticField(0x6C90);
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

		::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam* GetGooglePlayABTestRequestModel(::MiHoYo::SDK::GooglePlayAbTestConfig* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam*(*)(::PVOID, ::MiHoYo::SDK::GooglePlayAbTestConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_GETGOOGLEPLAYABTESTREQUESTMODEL_OFFSET))(this, a1);
		}

		::System::Void OnGoogleABTestResponse(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_ONGOOGLEABTESTRESPONSE_OFFSET))(this, a1);
		}

		::System::Void RequestABTestConfig(::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayABTestRequestParam*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY_REQUESTABTESTCONFIG_OFFSET))(this, a1, a2, a3);
		}
	};
}

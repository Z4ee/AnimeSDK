#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ABTestManager_ABTestKind.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Base::ABTestPlatform::Const { class ABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET UNITYSDK_OFFSET(0x1DA0D9A0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTREQUESTPARAM_OFFSET UNITYSDK_OFFSET(0x1DA0C3A0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETCOMPLIANCEABMODEL_OFFSET UNITYSDK_OFFSET(0x1DA0B5A0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETHOYOPASSABMODEL_OFFSET UNITYSDK_OFFSET(0x1DA0B240)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETRENDERMETHODABMODEL_OFFSET UNITYSDK_OFFSET(0x1DA0B8C0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_LOADALLABTESTRESULT_OFFSET UNITYSDK_OFFSET(0x1DA0DEB0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_LOADCOMPLIANCEABTESTRESULT_OFFSET UNITYSDK_OFFSET(0x1DA0D780)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITFAILED_OFFSET UNITYSDK_OFFSET(0x1DA0CE40)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITSUCCESS_OFFSET UNITYSDK_OFFSET(0x1DA0DB10)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTALLACCOUNTABTEST_OFFSET UNITYSDK_OFFSET(0x1DA0C410)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTCOMPLIANCEABTEST_OFFSET UNITYSDK_OFFSET(0x1DA0D0D0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTLEGACYABTEST_OFFSET UNITYSDK_OFFSET(0x1DA0BE70)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1DA0BF30)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA0DED0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0DEC0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__REQUESTCOMPLIANCEABTEST_B__12_0_OFFSET UNITYSDK_OFFSET(0x1DA0DF10)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1DA0E5B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestManager_TypeDefinitionIndex = 20597;

	class ABTestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::ABTestManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestManager**)Il2CppClass::FromTypeDefinitionIndex(ABTestManager_TypeDefinitionIndex)->GetStaticField(0xA320);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* HOYOPASS_ENABLE; // 0x0
		// static const ::System::String* COMPLIANCE_ENABLE; // 0x0
		// static const ::System::String* COMPLIANCE_ENABLE_CONFIG_KEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetHoYoPassABModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETHOYOPASSABMODEL_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetComplianceABModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETCOMPLIANCEABMODEL_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetRenderMethodABModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETRENDERMETHODABMODEL_OFFSET))(this);
		}

		::System::Void RequestLegacyABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTLEGACYABTEST_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetABTestRequestParam(::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind abtestKind)
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTREQUESTPARAM_OFFSET))(this, abtestKind);
		}

		::System::Void RequestAllAccountABTest(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind>* testList, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTALLACCOUNTABTEST_OFFSET))(this, testList, callback);
		}

		::System::Void RequestComplianceABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTCOMPLIANCEABTEST_OFFSET))(this);
		}

		::System::Void LoadComplianceABTestResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_LOADCOMPLIANCEABTESTRESULT_OFFSET))(this);
		}

		::System::Void OnComboInitSuccess(::System::Action_1<::System::String*>* callback, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITSUCCESS_OFFSET))(this, callback, message);
		}

		::System::Void OnComboInitFailed(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITFAILED_OFFSET))(this, callback);
		}

		::System::Void RequestWebViewRenderMethodABTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_OFFSET))(this);
		}

		::System::Void LoadAllABTestResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_LOADALLABTESTRESULT_OFFSET))(this);
		}

		::System::String* GetABTestKey(::System::String* storageKey, ::System::String* accountId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET))(this, storageKey, accountId);
		}

		::System::Void _RequestComplianceABTest_b__12_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__REQUESTCOMPLIANCEABTEST_B__12_0_OFFSET))(this, response);
		}

		::System::Void _RequestWebViewRenderMethodABTestConfig_b__16_0(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__16_0_OFFSET))(this, responseModel);
		}
	};
}

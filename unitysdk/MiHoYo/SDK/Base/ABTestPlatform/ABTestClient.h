#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT_REQUESTABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C55EA90)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55F6F0)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55EA80)

namespace MiHoYo::SDK::Base::ABTestPlatform
{
	inline static constexpr unsigned int ABTestClient_TypeDefinitionIndex = 20600;

	class ABTestClient : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient_TypeDefinitionIndex)->GetStaticField(0xA3E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CCTOR_OFFSET))();
		}

		::System::Void RequestABTestConfig(::System::String* requestUrl, ::System::String* appId, ::System::String* appKey, ::System::String* uid, ::System::Collections::Generic::List_1<::System::String*>* sceneIdList, ::System::Collections::Generic::List_1<::System::String*>* experimentIdList, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT_REQUESTABTESTCONFIG_OFFSET))(this, requestUrl, appId, appKey, uid, sceneIdList, experimentIdList, paramDict, callback);
		}
	};
}

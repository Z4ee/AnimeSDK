#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT_REQUESTABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x181E51D0)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x181E5B30)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x181E51C0)

namespace MiHoYo::SDK::Base::ABTestPlatform
{
	inline static constexpr unsigned int ABTestClient_TypeDefinitionIndex = 8515;

	class ABTestClient : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient_TypeDefinitionIndex)->GetStaticField(0x800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT__CCTOR_OFFSET))();
		}

		::System::Void RequestABTestConfig(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::System::Collections::Generic::List_1<::System::String*>* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT_REQUESTABTESTCONFIG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}

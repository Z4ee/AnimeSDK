#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class AgeGateRegionPolicy; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GETCUSTOMDATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B94CDB0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GETPOLICY_OFFSET UNITYSDK_OFFSET(0x1B94A860)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B94A7E0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_TRYGETCUSTOMDATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B94BC60)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94C990)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateRegionPolicyProvider_TypeDefinitionIndex = 8228;

	class AgeGateRegionPolicyProvider : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider_TypeDefinitionIndex)->GetStaticField(0x118B0);
		}
		// static const ::System::String* CHINESE_DATETIME_FORMAT; // 0x0
		// static const ::System::String* SPANISH_DATETIME_FORMAT; // 0x0
		// static const ::System::String* ITALIAN_DATETIME_FORMAT; // 0x0
		// static const ::System::String* VIETNAMESE_DATETIME_FORMAT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>*>* m_dicPolicyFactories; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GET_INSTANCE_OFFSET))();
		}

		::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy* GetPolicy(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GETPOLICY_OFFSET))(this, a1);
		}

		static ::System::Boolean TryGetCustomDateTimeFormat(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_TRYGETCUSTOMDATETIMEFORMAT_OFFSET))(a1, a2);
		}

		static ::System::String* GetCustomDateTimeFormat(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GETCUSTOMDATETIMEFORMAT_OFFSET))(a1);
		}
	};
}

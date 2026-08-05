#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class AgeGateRegionPolicy; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GETPOLICY_OFFSET UNITYSDK_OFFSET(0x1DA06FA0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DA06C00)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA06C80)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateRegionPolicyProvider_TypeDefinitionIndex = 20381;

	class AgeGateRegionPolicyProvider : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider_TypeDefinitionIndex)->GetStaticField(0xB5C0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>*>* m_dicPolicyFactories; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider* get_Instance()
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GET_INSTANCE_OFFSET))();
		}

		::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy* GetPolicy(::System::String* strRegion)
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER_GETPOLICY_OFFSET))(this, strRegion);
		}
	};
}

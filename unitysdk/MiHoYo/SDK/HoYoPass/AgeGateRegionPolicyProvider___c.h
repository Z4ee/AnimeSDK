#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class AgeGateRegionPolicy; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3FC920)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FC960)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A3FC970)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A3FCAF0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_2_OFFSET UNITYSDK_OFFSET(0x1A3FCA60)
#define MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_3_OFFSET UNITYSDK_OFFSET(0x1A3FCBE0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateRegionPolicyProvider___c_TypeDefinitionIndex = 19135;

	class AgeGateRegionPolicyProvider___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__3_2()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0xAAD0);
		}
		static ::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>** StaticGet___9__3_1()
		{
			return (::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0xAAD8);
		}
		static ::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>** StaticGet___9__3_0()
		{
			return (::System::Func_1<::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0xAAE0);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__3_3()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0xAAE8);
		}
		static ::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicyProvider___c**)Il2CppClass::FromTypeDefinitionIndex(AgeGateRegionPolicyProvider___c_TypeDefinitionIndex)->GetStaticField(0xAAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy* __ctor_b__3_0()
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_0_OFFSET))(this);
		}

		::System::String* __ctor_b__3_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_2_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy* __ctor_b__3_1()
		{
			return ((::MiHoYo::SDK::HoYoPass::AgeGateRegionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_1_OFFSET))(this);
		}

		::System::String* __ctor_b__3_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEREGIONPOLICYPROVIDER___C___CTOR_B__3_3_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A19B3F0)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19B430)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A19B440)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_1_OFFSET UNITYSDK_OFFSET(0x1A19B450)

namespace MiHoYo::SDK::Base::ABTestPlatform
{
	inline static constexpr unsigned int ABTestClient___c_TypeDefinitionIndex = 8795;

	class ABTestClient___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient___c_TypeDefinitionIndex)->GetStaticField(0x3CE0);
		}
		static ::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient___c**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient___c_TypeDefinitionIndex)->GetStaticField(0x3CE8);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient___c_TypeDefinitionIndex)->GetStaticField(0x3CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CTOR_OFFSET))(this);
		}

		::System::String* _RequestABTestConfig_b__2_0(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_0_OFFSET))(this, a1);
		}

		::System::String* _RequestABTestConfig_b__2_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_1_OFFSET))(this, a1);
		}
	};
}

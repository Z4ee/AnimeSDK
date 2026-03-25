#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DDF600)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDF640)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_0_OFFSET UNITYSDK_OFFSET(0x15DDF650)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_1_OFFSET UNITYSDK_OFFSET(0x15DDF660)

namespace MiHoYo::SDK::Base::ABTestPlatform
{
	inline static constexpr unsigned int ABTestClient___c_TypeDefinitionIndex = 7472;

	class ABTestClient___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient___c_TypeDefinitionIndex)->GetStaticField(0xFE60);
		}
		static ::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Base::ABTestPlatform::ABTestClient___c**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient___c_TypeDefinitionIndex)->GetStaticField(0xFE68);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestClient___c_TypeDefinitionIndex)->GetStaticField(0xFE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__CTOR_OFFSET))(this);
		}

		::System::String* _RequestABTestConfig_b__2_0(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_0_OFFSET))(this, x);
		}

		::System::String* _RequestABTestConfig_b__2_1(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_1_OFFSET))(this, x);
		}
	};
}

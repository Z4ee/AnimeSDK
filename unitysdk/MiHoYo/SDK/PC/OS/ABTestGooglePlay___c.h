#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18381690)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183816D0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_0_OFFSET UNITYSDK_OFFSET(0x183816E0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_1_OFFSET UNITYSDK_OFFSET(0x183816F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestGooglePlay___c_TypeDefinitionIndex = 8483;

	class ABTestGooglePlay___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::ABTestGooglePlay___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestGooglePlay___c**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x16850);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x16858);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x16860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CTOR_OFFSET))(this);
		}

		::System::String* _RequestABTestConfig_b__6_0(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_0_OFFSET))(this, a1);
		}

		::System::String* _RequestABTestConfig_b__6_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_1_OFFSET))(this, a1);
		}
	};
}

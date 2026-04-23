#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17599480)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175994C0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_0_OFFSET UNITYSDK_OFFSET(0x175994D0)
#define MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_1_OFFSET UNITYSDK_OFFSET(0x175994E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestGooglePlay___c_TypeDefinitionIndex = 7580;

	class ABTestGooglePlay___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x1B9D0);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x1B9D8);
		}
		static ::MiHoYo::SDK::PC::OS::ABTestGooglePlay___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestGooglePlay___c**)Il2CppClass::FromTypeDefinitionIndex(ABTestGooglePlay___c_TypeDefinitionIndex)->GetStaticField(0x1B9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__CTOR_OFFSET))(this);
		}

		::System::String* _RequestABTestConfig_b__6_0(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_0_OFFSET))(this, x);
		}

		::System::String* _RequestABTestConfig_b__6_1(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTGOOGLEPLAY___C__REQUESTABTESTCONFIG_B__6_1_OFFSET))(this, x);
		}
	};
}

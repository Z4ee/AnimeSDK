#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE929AF0)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE929B30)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE929B40)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE929B60)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageControl___c_TypeDefinitionIndex = 50127;

	class TabHeaderImageControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_398*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_398*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(TabHeaderImageControl___c_TypeDefinitionIndex)->GetStaticField(0x459D0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_398*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_398*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(TabHeaderImageControl___c_TypeDefinitionIndex)->GetStaticField(0x459D8);
		}
		static ::Sofa::Runtime::TabHeaderImageControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::TabHeaderImageControl___c**)Il2CppClass::FromTypeDefinitionIndex(TabHeaderImageControl___c_TypeDefinitionIndex)->GetStaticField(0x459E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_0(::Class_0_16E4307DCC419505_398* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_1(::Class_0_16E4307DCC419505_398* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}
	};
}

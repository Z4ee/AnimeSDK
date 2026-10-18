#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_481;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE981300)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE981340)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE981350)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE981460)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextControl___c_TypeDefinitionIndex = 49737;

	class TabHeaderTextControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_481*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_481*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(TabHeaderTextControl___c_TypeDefinitionIndex)->GetStaticField(0xD540);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_481*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_481*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(TabHeaderTextControl___c_TypeDefinitionIndex)->GetStaticField(0xD548);
		}
		static ::Sofa::Runtime::TabHeaderTextControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::TabHeaderTextControl___c**)Il2CppClass::FromTypeDefinitionIndex(TabHeaderTextControl___c_TypeDefinitionIndex)->GetStaticField(0xD550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __Binding_b__2_0(::Class_0_16E4307DCC419505_481* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_0_16E4307DCC419505_481*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_1(::Class_0_16E4307DCC419505_481* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_481*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}
	};
}

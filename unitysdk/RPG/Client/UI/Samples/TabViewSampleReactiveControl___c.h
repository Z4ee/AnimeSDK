#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1299;
class Class_1_AAA19EA40697FDA1;
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE406900)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE406940)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE406950)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE406970)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleReactiveControl___c_TypeDefinitionIndex = 73464;

	class TabViewSampleReactiveControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_1299*, ::R3::ReactiveProperty_1<::System::Int32>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1299*, ::R3::ReactiveProperty_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(TabViewSampleReactiveControl___c_TypeDefinitionIndex)->GetStaticField(0x37240);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1299*, ::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1299*, ::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>*>**)Il2CppClass::FromTypeDefinitionIndex(TabViewSampleReactiveControl___c_TypeDefinitionIndex)->GetStaticField(0x37248);
		}
		static ::RPG::Client::Ui::Samples::TabViewSampleReactiveControl___c** StaticGet___9()
		{
			return (::RPG::Client::Ui::Samples::TabViewSampleReactiveControl___c**)Il2CppClass::FromTypeDefinitionIndex(TabViewSampleReactiveControl___c_TypeDefinitionIndex)->GetStaticField(0x37250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* __Binding_b__2_0(::Class_0_16E4307DCC419505_1299* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1299*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>* __Binding_b__2_1(::Class_0_16E4307DCC419505_1299* a1)
		{
			return ((::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1299*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}
	};
}

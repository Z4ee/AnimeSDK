#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9FE8AEA7686E2A0B;
class Class_1_AAA19EA40697FDA1;
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC1010)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC1050)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DDC1060)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0x1DDC1080)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleReactiveControl___c_TypeDefinitionIndex = 73360;

	class TabViewSampleReactiveControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_9FE8AEA7686E2A0B*, ::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::Class_1_9FE8AEA7686E2A0B*, ::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>*>**)Il2CppClass::FromTypeDefinitionIndex(TabViewSampleReactiveControl___c_TypeDefinitionIndex)->GetStaticField(0x638B0);
		}
		static ::System::Func_2<::Class_1_9FE8AEA7686E2A0B*, ::R3::ReactiveProperty_1<::System::Int32>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_1_9FE8AEA7686E2A0B*, ::R3::ReactiveProperty_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(TabViewSampleReactiveControl___c_TypeDefinitionIndex)->GetStaticField(0x638B8);
		}
		static ::RPG::Client::Ui::Samples::TabViewSampleReactiveControl___c** StaticGet___9()
		{
			return (::RPG::Client::Ui::Samples::TabViewSampleReactiveControl___c**)Il2CppClass::FromTypeDefinitionIndex(TabViewSampleReactiveControl___c_TypeDefinitionIndex)->GetStaticField(0x638C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* __Binding_b__2_0(::Class_1_9FE8AEA7686E2A0B* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID, ::Class_1_9FE8AEA7686E2A0B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>* __Binding_b__2_1(::Class_1_9FE8AEA7686E2A0B* a1)
		{
			return ((::ObservableCollections::IObservableCollection_1<::Class_1_AAA19EA40697FDA1*>*(*)(::PVOID, ::Class_1_9FE8AEA7686E2A0B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}
	};
}

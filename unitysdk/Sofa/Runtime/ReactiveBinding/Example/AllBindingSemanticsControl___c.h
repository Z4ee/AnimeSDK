#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_318;
class Class_1_3D9596FA876C6647;
class Class_1_7C973A0AE523EBAC;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class AnimatorButton; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE924890)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE9248D0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_0_OFFSET UNITYSDK_OFFSET(0xE9248E0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_10_OFFSET UNITYSDK_OFFSET(0xE924C20)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_11_OFFSET UNITYSDK_OFFSET(0xE924C40)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_12_OFFSET UNITYSDK_OFFSET(0xE924C60)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_13_OFFSET UNITYSDK_OFFSET(0xE924C80)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_15_OFFSET UNITYSDK_OFFSET(0xE925EA0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_16_OFFSET UNITYSDK_OFFSET(0xE925EC0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_17_OFFSET UNITYSDK_OFFSET(0xE925EE0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_18_OFFSET UNITYSDK_OFFSET(0xE925F00)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_19_OFFSET UNITYSDK_OFFSET(0xE925F20)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_1_OFFSET UNITYSDK_OFFSET(0xE924900)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_20_OFFSET UNITYSDK_OFFSET(0xE924C00)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_21_OFFSET UNITYSDK_OFFSET(0xE925D00)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_22_OFFSET UNITYSDK_OFFSET(0xE925D20)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_23_OFFSET UNITYSDK_OFFSET(0xE925D40)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_24_OFFSET UNITYSDK_OFFSET(0xE925D60)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_25_OFFSET UNITYSDK_OFFSET(0xE925D80)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_26_OFFSET UNITYSDK_OFFSET(0xE925DA0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_27_OFFSET UNITYSDK_OFFSET(0xE925DC0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_28_OFFSET UNITYSDK_OFFSET(0xE925DE0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_29_OFFSET UNITYSDK_OFFSET(0xE925E00)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_2_OFFSET UNITYSDK_OFFSET(0xE9249A0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_30_OFFSET UNITYSDK_OFFSET(0xE925E20)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_31_OFFSET UNITYSDK_OFFSET(0xE925E40)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_32_OFFSET UNITYSDK_OFFSET(0xE925E60)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_33_OFFSET UNITYSDK_OFFSET(0xE925E80)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_3_OFFSET UNITYSDK_OFFSET(0xE9249C0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_4_OFFSET UNITYSDK_OFFSET(0xE9249E0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_5_OFFSET UNITYSDK_OFFSET(0xE924A00)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_6_OFFSET UNITYSDK_OFFSET(0xE924A20)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_7_OFFSET UNITYSDK_OFFSET(0xE924A40)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_8_OFFSET UNITYSDK_OFFSET(0xE924A60)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_9_OFFSET UNITYSDK_OFFSET(0xE924A80)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0xE925F40)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_10_OFFSET UNITYSDK_OFFSET(0xE925FE0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_1_OFFSET UNITYSDK_OFFSET(0xE925F50)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_2_OFFSET UNITYSDK_OFFSET(0xE925F60)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_3_OFFSET UNITYSDK_OFFSET(0xE925F70)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_4_OFFSET UNITYSDK_OFFSET(0xE925F80)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_5_OFFSET UNITYSDK_OFFSET(0xE925F90)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_6_OFFSET UNITYSDK_OFFSET(0xE925FA0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_7_OFFSET UNITYSDK_OFFSET(0xE925FB0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_8_OFFSET UNITYSDK_OFFSET(0xE925FC0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_9_OFFSET UNITYSDK_OFFSET(0xE925FD0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int AllBindingSemanticsControl___c_TypeDefinitionIndex = 50355;

	class AllBindingSemanticsControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__36_19()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DA0);
		}
		static ::System::Action** StaticGet___9__38_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DA8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_1_7C973A0AE523EBAC*>** StaticGet___9__36_18()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_1_7C973A0AE523EBAC*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DB0);
		}
		static ::System::Action_2<::UnityEngine::UI::Image*, ::System::Single>** StaticGet___9__36_1()
		{
			return (::System::Action_2<::UnityEngine::UI::Image*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DB8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::Il2CppArray<::System::Object*>*>*>** StaticGet___9__36_8()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DC0);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::ReactiveProperty_1<::System::Single>*>** StaticGet___9__36_16()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::ReactiveProperty_1<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DC8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_25()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DD0);
		}
		static ::System::Action** StaticGet___9__38_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DD8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__36_11()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DE0);
		}
		static ::System::Action_1<::UnityEngine::GameObject*>** StaticGet___9__38_9()
		{
			return (::System::Action_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DE8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__36_23()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DF0);
		}
		static ::System::Action_1<::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::RPG::Client::AnimatorButton*>>** StaticGet___9__36_13()
		{
			return (::System::Action_1<::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::RPG::Client::AnimatorButton*>>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44DF8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_28()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E00);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_29()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E08);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_24()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E10);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::ReactiveProperty_1<::System::String*>*>** StaticGet___9__36_17()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::ReactiveProperty_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E18);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::UInt32>*>** StaticGet___9__36_5()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E20);
		}
		static ::System::Action_1<::System::Single>** StaticGet___9__38_8()
		{
			return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E28);
		}
		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E30);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__36_20()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E38);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_30()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E40);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__36_3()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E48);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__36_2()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E50);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_320<::System::Single>*>** StaticGet___9__36_31()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_320<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E58);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__36_6()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::RPG::Client::TextID>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E60);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_27()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E68);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_21()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E70);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>** StaticGet___9__36_26()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_318*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E78);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*>** StaticGet___9__36_32()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E80);
		}
		static ::System::Action** StaticGet___9__38_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E88);
		}
		static ::System::Action_1<::UnityEngine::GameObject*>** StaticGet___9__38_10()
		{
			return (::System::Action_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E90);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__36_10()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44E98);
		}
		static ::Sofa::Runtime::ReactiveBinding::Example::AllBindingSemanticsControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::ReactiveBinding::Example::AllBindingSemanticsControl___c**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EA0);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::ReactiveProperty_1<::System::Boolean>*>** StaticGet___9__36_15()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::ReactiveProperty_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EA8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Single>*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EB0);
		}
		static ::System::Action** StaticGet___9__38_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EB8);
		}
		static ::System::Action** StaticGet___9__38_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EC0);
		}
		static ::System::Action_1<::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::UnityEngine::Transform*>>** StaticGet___9__36_9()
		{
			return (::System::Action_1<::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::UnityEngine::Transform*>>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EC8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__36_12()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44ED0);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*>** StaticGet___9__36_33()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44ED8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>*>** StaticGet___9__36_7()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EE0);
		}
		static ::System::Action** StaticGet___9__38_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EE8);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__36_22()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EF0);
		}
		static ::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__36_4()
		{
			return (::System::Func_2<::Class_1_3D9596FA876C6647*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44EF8);
		}
		static ::System::Action** StaticGet___9__38_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AllBindingSemanticsControl___c_TypeDefinitionIndex)->GetStaticField(0x44F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Single>* __Binding_b__36_0(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_0_OFFSET))(this, a1);
		}

		::System::Void __Binding_b__36_1(::UnityEngine::UI::Image* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Single))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_1_OFFSET))(this, a1, a2);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__36_2(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __Binding_b__36_3(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__36_4(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::UInt32>* __Binding_b__36_5(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::UInt32>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __Binding_b__36_6(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>* __Binding_b__36_7(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::ValueTuple_2<::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*>>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_7_OFFSET))(this, a1);
		}

		::R3::Observable_1<::Il2CppArray<::System::Object*>*>* __Binding_b__36_8(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::Il2CppArray<::System::Object*>*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_8_OFFSET))(this, a1);
		}

		::System::Void __Binding_b__36_9(::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::UnityEngine::Transform*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::UnityEngine::Transform*>))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_9_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__36_20(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_20_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__36_10(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_10_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__36_11(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_11_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__36_12(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_12_OFFSET))(this, a1);
		}

		::System::Void __Binding_b__36_13(::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::RPG::Client::AnimatorButton*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_62DA72730C4B8385<::Class_1_3D9596FA876C6647*, ::RPG::Client::AnimatorButton*>))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_13_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_21(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_21_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__36_22(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_22_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__36_23(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_23_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_24(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_24_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_25(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_25_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_26(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_26_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_27(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_27_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_28(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_28_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_29(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_29_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* __Binding_b__36_30(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_30_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_320<::System::Single>* __Binding_b__36_31(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_320<::System::Single>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_31_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* __Binding_b__36_32(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_32_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>* __Binding_b__36_33(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_0_16E4307DCC419505_320<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_33_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* __Binding_b__36_15(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_15_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Single>* __Binding_b__36_16(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Single>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_16_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::String*>* __Binding_b__36_17(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_17_OFFSET))(this, a1);
		}

		::Class_1_7C973A0AE523EBAC* __Binding_b__36_18(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::Class_1_7C973A0AE523EBAC*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_18_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__36_19(::Class_1_3D9596FA876C6647* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_1_3D9596FA876C6647*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___BINDING_B__36_19_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_0_OFFSET))(this);
		}

		::System::Void __ctor_b__38_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_1_OFFSET))(this);
		}

		::System::Void __ctor_b__38_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_2_OFFSET))(this);
		}

		::System::Void __ctor_b__38_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_3_OFFSET))(this);
		}

		::System::Void __ctor_b__38_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_4_OFFSET))(this);
		}

		::System::Void __ctor_b__38_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_5_OFFSET))(this);
		}

		::System::Void __ctor_b__38_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_6_OFFSET))(this);
		}

		::System::Void __ctor_b__38_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_7_OFFSET))(this);
		}

		::System::Void __ctor_b__38_8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_8_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__38_9(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_9_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__38_10(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCONTROL___C___CTOR_B__38_10_OFFSET))(this, a1);
		}
	};
}

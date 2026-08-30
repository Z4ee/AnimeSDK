#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_17EDF3520C9FC3DE;
class Class_2_4706D3AD6019CD01;
class Class_2_5436AF4270279182;
class Class_2_B8E38BF47138A2E5;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_FD51057495DB654F;
namespace Entitas { class IComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C50E4E0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x1C50E8C0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x1C50E970)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x1C50E9C0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x1C50EA10)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x1C50EA60)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_15_OFFSET UNITYSDK_OFFSET(0x1C50EAB0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C50E530)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x1C50E5B0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x1C50E600)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x1C50E650)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x1C50E6A0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x1C50E720)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x1C50E770)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x1C50E7C0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x1C50E840)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C50EB00)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C50EB80)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x1C50EBD0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x1C50EC20)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C50EC70)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_1_OFFSET UNITYSDK_OFFSET(0x1C50ECE0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_2_OFFSET UNITYSDK_OFFSET(0x1C50ED50)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_3_OFFSET UNITYSDK_OFFSET(0x1C50EDC0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_4_OFFSET UNITYSDK_OFFSET(0x1C50EE30)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_5_OFFSET UNITYSDK_OFFSET(0x1C50EEA0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_6_OFFSET UNITYSDK_OFFSET(0x1C50EF10)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_7_OFFSET UNITYSDK_OFFSET(0x1C50EF80)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C50EFF0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C50F040)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C50F090)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x1C50F100)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C50F150)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C50F1F0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_2_OFFSET UNITYSDK_OFFSET(0x1C50F260)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_3_OFFSET UNITYSDK_OFFSET(0x1C50F2D0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_4_OFFSET UNITYSDK_OFFSET(0x1C50F340)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_5_OFFSET UNITYSDK_OFFSET(0x1C50F3B0)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_6_OFFSET UNITYSDK_OFFSET(0x1C50F420)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_7_OFFSET UNITYSDK_OFFSET(0x1C50F490)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_8_OFFSET UNITYSDK_OFFSET(0x1C50F500)
#define CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_9_OFFSET UNITYSDK_OFFSET(0x1C50F570)
#define CLASS_1_4617E032B3D384D9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C50E4A0)
#define CLASS_1_4617E032B3D384D9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50E4D0)

inline static constexpr unsigned int Class_1_4617E032B3D384D9___c_TypeDefinitionIndex = 40628;

class Class_1_4617E032B3D384D9___c : public ::System::Object
{
public:
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35630);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_5()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35638);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_8()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35640);
	}
	static ::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__4_1()
	{
		return (::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35648);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35650);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_4()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35658);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_2()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35660);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_2()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35668);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35670);
	}
	static ::Class_1_4617E032B3D384D9___c** StaticGet___9()
	{
		return (::Class_1_4617E032B3D384D9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35678);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35680);
	}
	static ::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35688);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_0()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35690);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_9()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35698);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_11()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356A0);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_3()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356A8);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_6()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356B0);
	}
	static ::System::Func_3<::Class_2_5436AF4270279182*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_3<::Class_2_5436AF4270279182*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356B8);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356C0);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__1_2()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356C8);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_7()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356D0);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356D8);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_7()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356E0);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356E8);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_9()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356F0);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_3()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x356F8);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_6()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35700);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35708);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35710);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35718);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__1_0()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35720);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_15()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35728);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35730);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_10()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35738);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35740);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35748);
	}
	static ::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__4_2()
	{
		return (::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35750);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35758);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_5()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35760);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35768);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35770);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_4()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35778);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_1()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4617E032B3D384D9___c_TypeDefinitionIndex)->GetStaticField(0x35780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _AddEntityIndices_b__0_0(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__0_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FiveDim::CustomPropMoveType _AddEntityIndices_b__0_2(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::Client::LittleGame::FiveDim::CustomPropMoveType(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_3(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FiveDim::EntityTag _AddEntityIndices_b__0_4(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::Client::LittleGame::FiveDim::EntityTag(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_4_OFFSET))(this, a1, a2);
	}

	::System::String* _AddEntityIndices_b__0_5(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_6(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_6_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__0_7(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_7_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__0_8(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_8_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__0_9(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_9_OFFSET))(this, a1, a2);
	}

	::System::String* _AddEntityIndices_b__0_10(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_10_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__0_11(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_11_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_12(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_12_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_13(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_13_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_14(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_14_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_15(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__0_15_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__1_0(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__1_1(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__1_2(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__1_3(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__1_3_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_0(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_1(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_1_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_2(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_3(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_3_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_4(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_4_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_5(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_5_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_6(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_7(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__2_7_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__3_0(::Class_2_5436AF4270279182* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_5436AF4270279182*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__3_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__4_0(::Class_2_FD51057495DB654F* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__4_0_OFFSET))(this, a1, a2);
	}

	::System::UInt16 _AddEntityIndices_b__4_1(::Class_2_FD51057495DB654F* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt16(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__4_1_OFFSET))(this, a1, a2);
	}

	::System::String* _AddEntityIndices_b__4_2(::Class_2_FD51057495DB654F* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__4_2_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_0(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__5_1(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_1_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__5_2(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_2_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_3(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_3_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_4(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_4_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_5(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_5_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_6(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__5_7(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_7_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_8(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_8_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_9(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_4617E032B3D384D9___C__ADDENTITYINDICES_B__5_9_OFFSET))(this, a1, a2);
	}
};

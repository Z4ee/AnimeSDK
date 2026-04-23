#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_536CC4186B095618;
class Class_2_921296CE04546AF9;
class Class_2_9850514C0F89B91A;
class Class_2_9DD8A46984F1AFFD;
namespace Entitas { class IComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x17E8D3E0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x17E8D7C0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x17E8D860)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x17E8D8B0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x17E8D900)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x17E8D950)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_15_OFFSET UNITYSDK_OFFSET(0x17E8D9A0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x17E8D430)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x17E8D4B0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x17E8D500)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x17E8D550)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x17E8D5A0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x17E8D620)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x17E8D670)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x17E8D6C0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x17E8D740)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x17E8D9F0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x17E8DA70)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x17E8DAC0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x17E8DB10)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x17E8DB60)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_1_OFFSET UNITYSDK_OFFSET(0x17E8DBD0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_2_OFFSET UNITYSDK_OFFSET(0x17E8DC40)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_3_OFFSET UNITYSDK_OFFSET(0x17E8DCB0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_4_OFFSET UNITYSDK_OFFSET(0x17E8DD20)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_5_OFFSET UNITYSDK_OFFSET(0x17E8DD90)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_6_OFFSET UNITYSDK_OFFSET(0x17E8DE00)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_7_OFFSET UNITYSDK_OFFSET(0x17E8DE70)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E8DEE0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_1_OFFSET UNITYSDK_OFFSET(0x17E8DF30)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_2_OFFSET UNITYSDK_OFFSET(0x17E8DFA0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x17E8DFF0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x17E8E090)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x17E8E100)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_3_OFFSET UNITYSDK_OFFSET(0x17E8E170)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_4_OFFSET UNITYSDK_OFFSET(0x17E8E1E0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_5_OFFSET UNITYSDK_OFFSET(0x17E8E250)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_6_OFFSET UNITYSDK_OFFSET(0x17E8E2C0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_7_OFFSET UNITYSDK_OFFSET(0x17E8E330)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_8_OFFSET UNITYSDK_OFFSET(0x17E8E3A0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_9_OFFSET UNITYSDK_OFFSET(0x17E8E410)
#define CLASS_1_8D171498275755D1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E8D3A0)
#define CLASS_1_8D171498275755D1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8D3D0)

inline static constexpr unsigned int Class_1_8D171498275755D1___c_TypeDefinitionIndex = 38194;

class Class_1_8D171498275755D1___c : public ::System::Object
{
public:
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_6()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A10);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_2()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A18);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_8()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A20);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A28);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A30);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A38);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A40);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A48);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_6()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A50);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_5()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A58);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_1()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A60);
	}
	static ::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
	{
		return (::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A68);
	}
	static ::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__1_2()
	{
		return (::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A70);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A78);
	}
	static ::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__3_2()
	{
		return (::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A80);
	}
	static ::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__1_0()
	{
		return (::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A88);
	}
	static ::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__3_1()
	{
		return (::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A90);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18A98);
	}
	static ::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AA0);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AA8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_15()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AB0);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_1()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AB8);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_7()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AC0);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_4()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AC8);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_2()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AD0);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_7()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AD8);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_3()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AE0);
	}
	static ::Class_1_8D171498275755D1___c** StaticGet___9()
	{
		return (::Class_1_8D171498275755D1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AE8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_11()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AF0);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18AF8);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_3()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B00);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B08);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_0()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B10);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_9()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B18);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B20);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B28);
	}
	static ::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
	{
		return (::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B30);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B38);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_10()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B40);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_4()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B48);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_9()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B50);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_5()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x18B58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _AddEntityIndices_b__0_0(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_0_OFFSET))(this, e, c);
	}

	::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__0_1(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_1_OFFSET))(this, e, c);
	}

	::RPG::Client::LittleGame::FiveDim::CustomPropMoveType _AddEntityIndices_b__0_2(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::RPG::Client::LittleGame::FiveDim::CustomPropMoveType(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_2_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_3(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_3_OFFSET))(this, e, c);
	}

	::RPG::Client::LittleGame::FiveDim::EntityTag _AddEntityIndices_b__0_4(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::RPG::Client::LittleGame::FiveDim::EntityTag(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_4_OFFSET))(this, e, c);
	}

	::System::String* _AddEntityIndices_b__0_5(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_5_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_6(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_6_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__0_7(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_7_OFFSET))(this, e, c);
	}

	::System::Int32 _AddEntityIndices_b__0_8(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_8_OFFSET))(this, e, c);
	}

	::System::Int32 _AddEntityIndices_b__0_9(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_9_OFFSET))(this, e, c);
	}

	::System::String* _AddEntityIndices_b__0_10(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_10_OFFSET))(this, e, c);
	}

	::System::Int32 _AddEntityIndices_b__0_11(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_11_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_12(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_12_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_13(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_13_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_14(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_14_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_15(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_15_OFFSET))(this, e, c);
	}

	::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__1_0(::Class_2_0C58AD91B0F4D809* e, ::Entitas::IComponent* c)
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_0_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_1(::Class_2_0C58AD91B0F4D809* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_1_OFFSET))(this, e, c);
	}

	::System::Int32 _AddEntityIndices_b__1_2(::Class_2_0C58AD91B0F4D809* e, ::Entitas::IComponent* c)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_2_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_3(::Class_2_0C58AD91B0F4D809* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_3_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_0(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_0_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_1(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_1_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_2(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_2_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_3(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_3_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_4(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_4_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_5(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_5_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_6(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_6_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_7(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_7_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__3_0(::Class_2_9850514C0F89B91A* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_0_OFFSET))(this, e, c);
	}

	::System::UInt16 _AddEntityIndices_b__3_1(::Class_2_9850514C0F89B91A* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt16(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_1_OFFSET))(this, e, c);
	}

	::System::String* _AddEntityIndices_b__3_2(::Class_2_9850514C0F89B91A* e, ::Entitas::IComponent* c)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_2_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_0(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_0_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__4_1(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_1_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__4_2(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_2_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_3(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_3_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_4(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_4_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_5(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_5_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_6(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_6_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__4_7(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_7_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_8(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_8_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__4_9(::Class_2_536CC4186B095618* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_9_OFFSET))(this, e, c);
	}
};

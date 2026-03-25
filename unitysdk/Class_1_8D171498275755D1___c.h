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

#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x16959BF0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x16959FF0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x1695A040)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x1695A090)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x1695A0E0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x1695A130)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x16959C40)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x16959CC0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x16959D10)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x16959D60)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x16959DB0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x16959E30)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x16959E80)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x16959ED0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x16959F50)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x1695A180)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x1695A1F0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x1695A260)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x1695A2D0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_4_OFFSET UNITYSDK_OFFSET(0x1695A340)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_5_OFFSET UNITYSDK_OFFSET(0x1695A3B0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_6_OFFSET UNITYSDK_OFFSET(0x1695A420)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_7_OFFSET UNITYSDK_OFFSET(0x1695A490)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x1695A500)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1695A550)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_1_OFFSET UNITYSDK_OFFSET(0x1695A5A0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__3_2_OFFSET UNITYSDK_OFFSET(0x1695A610)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x1695A660)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x1695A700)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x1695A770)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_3_OFFSET UNITYSDK_OFFSET(0x1695A7E0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_4_OFFSET UNITYSDK_OFFSET(0x1695A850)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_5_OFFSET UNITYSDK_OFFSET(0x1695A8C0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_6_OFFSET UNITYSDK_OFFSET(0x1695A930)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_7_OFFSET UNITYSDK_OFFSET(0x1695A9A0)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_8_OFFSET UNITYSDK_OFFSET(0x1695AA10)
#define CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__4_9_OFFSET UNITYSDK_OFFSET(0x1695AA80)
#define CLASS_1_8D171498275755D1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16959BB0)
#define CLASS_1_8D171498275755D1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16959BE0)

inline static constexpr unsigned int Class_1_8D171498275755D1___c_TypeDefinitionIndex = 32462;

class Class_1_8D171498275755D1___c : public ::System::Object
{
public:
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_0()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170A0);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_7()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170A8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170B0);
	}
	static ::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_3<::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170B8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_9()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170C0);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170C8);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_0()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170D0);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_3()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170D8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170E0);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_8()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170E8);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_9()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170F0);
	}
	static ::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__3_1()
	{
		return (::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x170F8);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_2()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17100);
	}
	static ::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__3_2()
	{
		return (::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17108);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_10()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17110);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17118);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17120);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__1_5()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17128);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_4()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17130);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_4()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17138);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_2()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17140);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__1_6()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17148);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_7()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17150);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_11()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17158);
	}
	static ::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_3<::Class_2_9850514C0F89B91A*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17160);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17168);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_1()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17170);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17178);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17180);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17188);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17190);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_5()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x17198);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x171A0);
	}
	static ::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__4_6()
	{
		return (::System::Func_3<::Class_2_536CC4186B095618*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x171A8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x171B0);
	}
	static ::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
	{
		return (::System::Func_3<::Class_2_921296CE04546AF9*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x171B8);
	}
	static ::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
	{
		return (::System::Func_3<::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x171C0);
	}
	static ::Class_1_8D171498275755D1___c** StaticGet___9()
	{
		return (::Class_1_8D171498275755D1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D171498275755D1___c_TypeDefinitionIndex)->GetStaticField(0x171C8);
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

	::System::String* _AddEntityIndices_b__0_9(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_9_OFFSET))(this, e, c);
	}

	::System::Int32 _AddEntityIndices_b__0_10(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_10_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__0_11(::Class_2_9DD8A46984F1AFFD* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__0_11_OFFSET))(this, e, c);
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

	::System::UInt32 _AddEntityIndices_b__1_0(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_0_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_1(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_1_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_2(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_2_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_3(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_3_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_4(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_4_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__1_5(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_5_OFFSET))(this, e, c);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__1_6(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_6_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__1_7(::Class_2_921296CE04546AF9* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__1_7_OFFSET))(this, e, c);
	}

	::System::UInt32 _AddEntityIndices_b__2_0(::Class_2_0C58AD91B0F4D809* e, ::Entitas::IComponent* c)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_8D171498275755D1___C__ADDENTITYINDICES_B__2_0_OFFSET))(this, e, c);
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

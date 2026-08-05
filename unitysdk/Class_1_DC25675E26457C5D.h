#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_B9D5951434CC70FD;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC25675E26457C5D_METHOD_1_0CA3867717700DFB_OFFSET UNITYSDK_OFFSET(0x18D8DA80)
#define CLASS_1_DC25675E26457C5D_METHOD_1_13E8B1F3F0042AA5_OFFSET UNITYSDK_OFFSET(0x18D8D3E0)
#define CLASS_1_DC25675E26457C5D_METHOD_1_46DFD2FE5F6141AD_OFFSET UNITYSDK_OFFSET(0x18D8AD60)
#define CLASS_1_DC25675E26457C5D_METHOD_1_51D9391761974C4F_OFFSET UNITYSDK_OFFSET(0x18D8D920)
#define CLASS_1_DC25675E26457C5D_METHOD_1_5DC57945BC15E0F7_OFFSET UNITYSDK_OFFSET(0x18D8CA40)
#define CLASS_1_DC25675E26457C5D_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x18D8AC10)
#define CLASS_1_DC25675E26457C5D_METHOD_1_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x18D8C380)
#define CLASS_1_DC25675E26457C5D_METHOD_1_8D1786B4310FEE80_OFFSET UNITYSDK_OFFSET(0x18D8CF70)
#define CLASS_1_DC25675E26457C5D_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x18D8C830)
#define CLASS_1_DC25675E26457C5D_METHOD_1_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x18D8AC90)
#define CLASS_1_DC25675E26457C5D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1A7DE280)
#define CLASS_1_DC25675E26457C5D_METHOD_1_F038101F30CBD47E_OFFSET UNITYSDK_OFFSET(0x18D8C0D0)
#define CLASS_1_DC25675E26457C5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7DDEB0)
#define CLASS_1_DC25675E26457C5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DDEA0)

inline static constexpr unsigned int Class_1_DC25675E26457C5D_TypeDefinitionIndex = 65712;

class Class_1_DC25675E26457C5D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_707412604A129938*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_707412604A129938*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_F33F9DC5F4112336*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_F33F9DC5F4112336*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B9D5951434CC70FD*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B9D5951434CC70FD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>** StaticGet_Field_1_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_C93CC3D2C2AC4067*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355D0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_3B42BC0680587011*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_3B42BC0680587011*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0x355E0);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_11()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0xC650);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0xC658);
	}
	static ::System::Boolean* StaticGet_Field_1_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0xC65C);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC25675E26457C5D_TypeDefinitionIndex)->GetStaticField(0xC65D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_B078C58C2CD24B5E_OFFSET))();
	}

	static ::System::Void Method_1_46DFD2FE5F6141AD(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_46DFD2FE5F6141AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_6BA7BB45F0BA72F4_OFFSET))();
	}

	static ::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_907E24F785836BA0_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_5DC57945BC15E0F7(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_5DC57945BC15E0F7_OFFSET))(a1);
	}

	static ::System::Void Method_1_8D1786B4310FEE80(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_8D1786B4310FEE80_OFFSET))(a1);
	}

	static ::System::Void Method_1_13E8B1F3F0042AA5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_13E8B1F3F0042AA5_OFFSET))(a1);
	}

	static ::System::Void Method_1_0CA3867717700DFB(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_0CA3867717700DFB_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* Method_1_51D9391761974C4F(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_51D9391761974C4F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_F038101F30CBD47E(::Class_3_B9D5951434CC70FD* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Class_3_B9D5951434CC70FD*))((::PBYTE)hIl2Cpp + CLASS_1_DC25675E26457C5D_METHOD_1_F038101F30CBD47E_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_E785D9AD4AB6559B_Struct_2_E336E167650DB7F4.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_916778923E38503B;
class Class_1_B7E341C5F1A6F199;
class Class_1_C3C91849E993F765;
class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
class Class_3_C93CC3D2C2AC4067;
class Class_3_FFD0045B4597F294;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class Material; }

#define CLASS_3_E785D9AD4AB6559B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1818BCF0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_00DC8BCDD9497DF0_OFFSET UNITYSDK_OFFSET(0x180D4720)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_05252F136A7884FE_OFFSET UNITYSDK_OFFSET(0x180D5090)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_0856B51EB6007C56_OFFSET UNITYSDK_OFFSET(0x180D72D0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_105598925A011EDE_OFFSET UNITYSDK_OFFSET(0x180D9A00)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_118605AEEB740CFF_OFFSET UNITYSDK_OFFSET(0x180DA820)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x1818C5A0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x1818C3C0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_16E6A7C6F0155EDD_OFFSET UNITYSDK_OFFSET(0x180D7190)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x180D1AD0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_182BA737D561CA10_OFFSET UNITYSDK_OFFSET(0x180D5720)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_1ABE634E489C2299_OFFSET UNITYSDK_OFFSET(0x180D2A80)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x180D8FB0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_20FD8965F00EA2BF_OFFSET UNITYSDK_OFFSET(0x180D7D90)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_27772C8D18543B8A_OFFSET UNITYSDK_OFFSET(0x180D9050)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_304A7B3593080D5E_OFFSET UNITYSDK_OFFSET(0x180D47B0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x180D5620)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_3471E4B75FF87485_OFFSET UNITYSDK_OFFSET(0x180DAC30)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_36094BFB41CBC198_OFFSET UNITYSDK_OFFSET(0x180DA530)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_39DE361C56E0B031_OFFSET UNITYSDK_OFFSET(0x180D9500)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_3A05A9279CFC3D38_OFFSET UNITYSDK_OFFSET(0x180D9870)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0x180D7EB0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_3E0CF88A50D88B11_OFFSET UNITYSDK_OFFSET(0x180D34E0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_4691854E32F3C2F6_OFFSET UNITYSDK_OFFSET(0x180D2CA0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_54A73EE71975CF96_OFFSET UNITYSDK_OFFSET(0x180D3AE0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_5E4534F85F5E24C1_OFFSET UNITYSDK_OFFSET(0x180D8990)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_63DF1B20A479DA8A_OFFSET UNITYSDK_OFFSET(0x180D6D30)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_64E54667189E0E82_OFFSET UNITYSDK_OFFSET(0x180DA3B0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_810AFEBC6572BD55_OFFSET UNITYSDK_OFFSET(0x180D32D0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_8143730A4029238B_OFFSET UNITYSDK_OFFSET(0x180D7800)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_8891C4A56F6DD8A4_OFFSET UNITYSDK_OFFSET(0x180D4DE0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x180D7C00)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x180D7750)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_9B5AFE93C62EC0D9_OFFSET UNITYSDK_OFFSET(0x180D5910)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x180D5D60)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x180D1BE0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_AF0467DAE60EFAC6_OFFSET UNITYSDK_OFFSET(0x180D2F60)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_B0B53819A998853A_OFFSET UNITYSDK_OFFSET(0x1818C4C0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x180D8F20)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_BE77BDBA11F12421_OFFSET UNITYSDK_OFFSET(0x180D2BB0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x180D8B90)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x180D8C20)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1818C430)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x180DAF30)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_D40AEACBF23D3511_OFFSET UNITYSDK_OFFSET(0x180D8880)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_D46478B237B9BCD5_OFFSET UNITYSDK_OFFSET(0x180D8CB0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_D81C471D09A768ED_OFFSET UNITYSDK_OFFSET(0x180D6B80)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_DB3F5543F1452268_OFFSET UNITYSDK_OFFSET(0x180D8110)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_DC7CACACDFFB2659_OFFSET UNITYSDK_OFFSET(0x180D9E90)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_E025DDB78E38AF0D_OFFSET UNITYSDK_OFFSET(0x180D67E0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_E9F85D670420BBAB_OFFSET UNITYSDK_OFFSET(0x180D87C0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_EB0522F074049B45_OFFSET UNITYSDK_OFFSET(0x180D2D70)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_EB8BD7BE57734D47_OFFSET UNITYSDK_OFFSET(0x180D42E0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_EE3A4115437F2968_OFFSET UNITYSDK_OFFSET(0x180D88E0)
#define CLASS_3_E785D9AD4AB6559B_METHOD_3_EEE12406B97122F4_OFFSET UNITYSDK_OFFSET(0x180D9F60)
#define CLASS_3_E785D9AD4AB6559B_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1818BBF0)
#define CLASS_3_E785D9AD4AB6559B_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1818C0B0)
#define CLASS_3_E785D9AD4AB6559B_START_OFFSET UNITYSDK_OFFSET(0x1818BB30)
#define CLASS_3_E785D9AD4AB6559B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818C300)
#define CLASS_3_E785D9AD4AB6559B__CTOR_OFFSET UNITYSDK_OFFSET(0x1818C150)

inline static constexpr unsigned int Class_3_E785D9AD4AB6559B_TypeDefinitionIndex = 72650;

class Class_3_E785D9AD4AB6559B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_18()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E785D9AD4AB6559B_TypeDefinitionIndex)->GetStaticField(0x34490);
	}
	static ::Class_3_E785D9AD4AB6559B** StaticGet_Field_3_1()
	{
		return (::Class_3_E785D9AD4AB6559B**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E785D9AD4AB6559B_TypeDefinitionIndex)->GetStaticField(0x34498);
	}
	static ::System::String** StaticGet_Field_3_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E785D9AD4AB6559B_TypeDefinitionIndex)->GetStaticField(0x344A0);
	}
	static ::System::Boolean* StaticGet_Field_3_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_E785D9AD4AB6559B_TypeDefinitionIndex)->GetStaticField(0xC270);
	}
	static ::System::Boolean* StaticGet_Field_3_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_E785D9AD4AB6559B_TypeDefinitionIndex)->GetStaticField(0xC271);
	}
	::Unity::Collections::ManagedBlockQueue_1<::System::Int32>* Field_3_9; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_12; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>* Field_3_6; // 0x30
	::System::Collections::Generic::List_1<::Class_1_C3C91849E993F765*>* Field_3_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_7; // 0x40
	::UnityEngine::Vector3 Field_3_15; // 0x48
	::System::Single Field_3_14; // 0x54
	::Unity::Jobs::JobHandle Field_3_11; // 0x58
	::System::Single Field_3_8; // 0x68
	::Class_3_E785D9AD4AB6559B_Struct_2_E336E167650DB7F4 Field_3_10; // 0x6C
	::System::Boolean Field_3_5; // 0x6D
	::System::Boolean Field_3_13; // 0x6E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_B0B53819A998853A(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_B0B53819A998853A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_C3C91849E993F765* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_1_C3C91849E993F765*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	static ::System::Void Method_3_4691854E32F3C2F6(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_4691854E32F3C2F6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_54A73EE71975CF96(::System::Single a1, ::Class_3_C93CC3D2C2AC4067* a2, ::Class_3_FFD0045B4597F294* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_54A73EE71975CF96_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_3_00DC8BCDD9497DF0(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::String*(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_00DC8BCDD9497DF0_OFFSET))(a1);
	}

	static ::System::Void Method_3_304A7B3593080D5E(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_304A7B3593080D5E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_8891C4A56F6DD8A4(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_8891C4A56F6DD8A4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_05252F136A7884FE(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_05252F136A7884FE_OFFSET))(a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	static ::System::Boolean Method_3_9B5AFE93C62EC0D9(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_9B5AFE93C62EC0D9_OFFSET))(a1);
	}

	static ::System::Void Method_3_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_9EF64292D3DA5796_OFFSET))(a1);
	}

	static ::System::Void Method_3_E025DDB78E38AF0D(::System::Int32 a1, ::Class_1_C3C91849E993F765* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_1_C3C91849E993F765*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_E025DDB78E38AF0D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_810AFEBC6572BD55(::System::Single a1, ::Class_3_C93CC3D2C2AC4067* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_810AFEBC6572BD55_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0856B51EB6007C56(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_0856B51EB6007C56_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_8143730A4029238B(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_8143730A4029238B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_AF0467DAE60EFAC6(::System::Single a1, ::Class_3_C93CC3D2C2AC4067* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_AF0467DAE60EFAC6_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_8A8F4D8840527053()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_8A8F4D8840527053_OFFSET))(this);
	}

	static ::System::Void Method_3_63DF1B20A479DA8A(::Class_1_C3C91849E993F765* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_1_C3C91849E993F765*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_63DF1B20A479DA8A_OFFSET))(a1, a2);
	}

	static ::Class_1_916778923E38503B* Method_3_20FD8965F00EA2BF(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::System::UInt32>* a4, ::System::Action* a5, ::System::UInt32 a6)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::String*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_20FD8965F00EA2BF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_182BA737D561CA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_182BA737D561CA10_OFFSET))(this);
	}

	static ::System::Void Method_3_E9F85D670420BBAB(::Class_3_FFD0045B4597F294* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_E9F85D670420BBAB_OFFSET))(a1, a2);
	}

	static ::Class_3_E785D9AD4AB6559B* Method_3_D40AEACBF23D3511()
	{
		return ((::Class_3_E785D9AD4AB6559B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_D40AEACBF23D3511_OFFSET))();
	}

	static ::System::Void Method_3_EE3A4115437F2968(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_EE3A4115437F2968_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_D46478B237B9BCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_D46478B237B9BCD5_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_1B9BAFE25893B138_OFFSET))(this);
	}

	static ::System::Void Method_3_3E0CF88A50D88B11(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_3E0CF88A50D88B11_OFFSET))(a1);
	}

	::System::Void Method_3_3A08FD6F6C9BA32C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_3A08FD6F6C9BA32C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_27772C8D18543B8A(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action_1<::System::UInt32>* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action_1<::System::UInt32>*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_27772C8D18543B8A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_39DE361C56E0B031(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_39DE361C56E0B031_OFFSET))(a1);
	}

	static ::System::Single Method_3_3A05A9279CFC3D38(::UnityEngine::Vector3 a1, ::Class_3_C93CC3D2C2AC4067* a2, ::Class_3_FFD0045B4597F294* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_3A05A9279CFC3D38_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_105598925A011EDE(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_105598925A011EDE_OFFSET))(a1);
	}

	::System::Void Method_3_EEE12406B97122F4(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_EEE12406B97122F4_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DC7CACACDFFB2659(::Class_3_FFD0045B4597F294* a1, ::MoleMole::CharacterCameraDitheringData a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::CharacterCameraDitheringData))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_DC7CACACDFFB2659_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_16E6A7C6F0155EDD(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_FFD0045B4597F294* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_16E6A7C6F0155EDD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_64E54667189E0E82(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_64E54667189E0E82_OFFSET))(a1);
	}

	static ::System::Void Method_3_36094BFB41CBC198(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_36094BFB41CBC198_OFFSET))(a1);
	}

	static ::System::Void Method_3_5E4534F85F5E24C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_5E4534F85F5E24C1_OFFSET))(a1);
	}

	::System::Void Method_3_DB3F5543F1452268(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_DB3F5543F1452268_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_EB8BD7BE57734D47(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_FFD0045B4597F294* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_EB8BD7BE57734D47_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_118605AEEB740CFF(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::String* a5, ::System::UInt32 a6)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_118605AEEB740CFF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_3_D81C471D09A768ED(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Class_3_FFD0045B4597F294* a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_D81C471D09A768ED_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_1ABE634E489C2299(::Class_1_C3C91849E993F765* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3C91849E993F765*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_1ABE634E489C2299_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_3471E4B75FF87485(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_3471E4B75FF87485_OFFSET))(a1);
	}

	static ::System::Void Method_3_EB0522F074049B45(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_EB0522F074049B45_OFFSET))(a1);
	}

	static ::System::Void Method_3_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_CE944E12A64032F6_OFFSET))(a1);
	}

	static ::Class_1_916778923E38503B* Method_3_BE77BDBA11F12421(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E785D9AD4AB6559B_METHOD_3_BE77BDBA11F12421_OFFSET))(a1, a2, a3, a4);
	}
};

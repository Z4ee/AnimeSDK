#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_4D3FA2DF8EFA3BF8;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_410879606CD43FEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14EAFED0)
#define CLASS_2_410879606CD43FEC_METHOD_2_04BC075DB55C2D99_OFFSET UNITYSDK_OFFSET(0x14EB0B60)
#define CLASS_2_410879606CD43FEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14EB1C30)
#define CLASS_2_410879606CD43FEC_METHOD_2_64E5F20693684FCA_OFFSET UNITYSDK_OFFSET(0x14EB0480)
#define CLASS_2_410879606CD43FEC_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x14EB0D70)
#define CLASS_2_410879606CD43FEC_METHOD_2_7849ABF593A803AF_OFFSET UNITYSDK_OFFSET(0x14EB0640)
#define CLASS_2_410879606CD43FEC_METHOD_2_7B9C1A29E0EF2641_OFFSET UNITYSDK_OFFSET(0x14EB1DF0)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14EB02E0)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14EB0E40)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x14EB1D70)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x14EB1DB0)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EB02A0)
#define CLASS_2_410879606CD43FEC_METHOD_2_D000AFCB3190F6D3_OFFSET UNITYSDK_OFFSET(0x14EB1820)
#define CLASS_2_410879606CD43FEC_METHOD_2_EF0CA657D4060B18_OFFSET UNITYSDK_OFFSET(0x14EB0E80)
#define CLASS_2_410879606CD43FEC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14EB1810)
#define CLASS_2_410879606CD43FEC_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14EAFF10)
#define CLASS_2_410879606CD43FEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EB0460)
#define CLASS_2_410879606CD43FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x14EB0320)

inline static constexpr unsigned int Class_2_410879606CD43FEC_TypeDefinitionIndex = 90019;

class Class_2_410879606CD43FEC : public ::Foundation::SingletonDisposable_1<::Class_2_410879606CD43FEC*>
{
public:
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0x11820);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0x11824);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0x11828);
	}
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0x1182C);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0x11830);
	}
	::Il2CppArray<::System::Collections::Generic::HashSet_1<::Class_1_4D3FA2DF8EFA3BF8*>*>* Field_2_9; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4D3FA2DF8EFA3BF8*>* Field_2_10; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_4D3FA2DF8EFA3BF8*>* Field_2_8; // 0x20
	::System::Boolean Field_2_1; // 0x28
	::System::Single Field_2_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_64E5F20693684FCA(::System::Collections::Generic::HashSet_1<::Class_1_4D3FA2DF8EFA3BF8*>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_4D3FA2DF8EFA3BF8*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_64E5F20693684FCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7849ABF593A803AF(::Class_1_4D3FA2DF8EFA3BF8* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D3FA2DF8EFA3BF8*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_7849ABF593A803AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04BC075DB55C2D99(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_04BC075DB55C2D99_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_EF0CA657D4060B18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_EF0CA657D4060B18_OFFSET))(this, a1);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_4D3FA2DF8EFA3BF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D3FA2DF8EFA3BF8*))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_D000AFCB3190F6D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_D000AFCB3190F6D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_7B9C1A29E0EF2641(::UnityEngine::Animator* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_7B9C1A29E0EF2641_OFFSET))(this, a1, a2);
	}
};

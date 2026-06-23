#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F63E423D13AAADE3_Struct_2_71D0ED892BE52B50.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_14.h"
#include "unitysdk/Struct_2_70BE6188FFE939AE.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
class NapLodControllerGroup;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F63E423D13AAADE3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151B76D0)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_0120539054A2AC4D_OFFSET UNITYSDK_OFFSET(0x151B8610)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x151B8AF0)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x151B9590)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x151B7A20)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_695C442400A258C7_OFFSET UNITYSDK_OFFSET(0x151B8F80)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_AF0217B75A766CB5_OFFSET UNITYSDK_OFFSET(0x151B8E80)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x151B88B0)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_C74A04C9C8AF08B6_1_OFFSET UNITYSDK_OFFSET(0x151B9690)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_C74A04C9C8AF08B6_OFFSET UNITYSDK_OFFSET(0x151B8E00)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x151B9540)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_D30EFF756CC2B61E_OFFSET UNITYSDK_OFFSET(0x151B91A0)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_D6E8EB3826B5841C_OFFSET UNITYSDK_OFFSET(0x151B7DE0)
#define CLASS_2_F63E423D13AAADE3_METHOD_2_EB0720640B4D9CCA_OFFSET UNITYSDK_OFFSET(0x151B83C0)
#define CLASS_2_F63E423D13AAADE3_ONCREATE_OFFSET UNITYSDK_OFFSET(0x151B74E0)
#define CLASS_2_F63E423D13AAADE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x151B7A10)
#define CLASS_2_F63E423D13AAADE3__CTOR_OFFSET UNITYSDK_OFFSET(0x151B7A00)

inline static constexpr unsigned int Class_2_F63E423D13AAADE3_TypeDefinitionIndex = 52514;

class Class_2_F63E423D13AAADE3 : public ::Foundation::SingletonDisposable_1<::Class_2_F63E423D13AAADE3*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F63E423D13AAADE3_TypeDefinitionIndex)->GetStaticField(0xEF20);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F63E423D13AAADE3_TypeDefinitionIndex)->GetStaticField(0xEF21);
	}
	::System::Collections::Generic::Dictionary_2<::NapLodControllerGroup*, ::System::Int32>* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::NapLodControllerGroup*>* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_70BE6188FFE939AE>* Field_2_1; // 0x20
	::Unity::Collections::NativeQueue_1<::Struct_2_4C8453486C91E3A1_14> Field_2_5; // 0x28
	::System::Boolean Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x41
	::Unity::Jobs::JobHandle Field_2_6; // 0x48
	::Unity::Collections::NativeList_1<::Struct_2_A725E4562D03EA4E> Field_2_3; // 0x58
	::Class_2_F63E423D13AAADE3_Struct_2_71D0ED892BE52B50 Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_56E8ED155DF34A44_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_C74A04C9C8AF08B6(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_C74A04C9C8AF08B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF0217B75A766CB5(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_AF0217B75A766CB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	static ::System::Void Method_2_D30EFF756CC2B61E(::System::Int32 a1, ::Struct_2_A725E4562D03EA4E& a2, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4C8453486C91E3A1_14> a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::System::Int32, ::Struct_2_A725E4562D03EA4E&, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4C8453486C91E3A1_14>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_D30EFF756CC2B61E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_0120539054A2AC4D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_0120539054A2AC4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_695C442400A258C7(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_695C442400A258C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB0720640B4D9CCA(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_EB0720640B4D9CCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_C74A04C9C8AF08B6_1(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_C74A04C9C8AF08B6_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6E8EB3826B5841C(::NapLodControllerGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodControllerGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_D6E8EB3826B5841C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F63E423D13AAADE3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

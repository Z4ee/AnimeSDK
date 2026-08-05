#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0E25FA0468812A32_Struct_2_DF619D170D00BE18.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/Struct_2_4A663F55BC7468E2.h"
#include "unitysdk/Struct_2_A926347304CD9897.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_11C904B1A60FB3D5;
class Class_1_A38BF3E778FA910E;
class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_0E25FA0468812A32_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA52A60)
#define CLASS_2_0E25FA0468812A32_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1BA53120)
#define CLASS_2_0E25FA0468812A32_METHOD_2_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x1BA55B90)
#define CLASS_2_0E25FA0468812A32_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x1BA551C0)
#define CLASS_2_0E25FA0468812A32_METHOD_2_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0x1BA54400)
#define CLASS_2_0E25FA0468812A32_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1BA550B0)
#define CLASS_2_0E25FA0468812A32_METHOD_2_4F9A1D0839768227_OFFSET UNITYSDK_OFFSET(0x1BA53820)
#define CLASS_2_0E25FA0468812A32_METHOD_2_6B5A6AD44185433D_OFFSET UNITYSDK_OFFSET(0x1BA53F50)
#define CLASS_2_0E25FA0468812A32_METHOD_2_76D5BDC564508CD8_OFFSET UNITYSDK_OFFSET(0x1BA55230)
#define CLASS_2_0E25FA0468812A32_METHOD_2_8856EAF4107B25FF_OFFSET UNITYSDK_OFFSET(0x1BA543A0)
#define CLASS_2_0E25FA0468812A32_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x1BA533F0)
#define CLASS_2_0E25FA0468812A32_METHOD_2_AF0217B75A766CB5_OFFSET UNITYSDK_OFFSET(0x1BA55C00)
#define CLASS_2_0E25FA0468812A32_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1BA531A0)
#define CLASS_2_0E25FA0468812A32_METHOD_2_D683046A6B8F91F3_OFFSET UNITYSDK_OFFSET(0x1BA55020)
#define CLASS_2_0E25FA0468812A32_METHOD_2_E8A21FBDBCFA441F_OFFSET UNITYSDK_OFFSET(0x1BA55550)
#define CLASS_2_0E25FA0468812A32_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BA52810)
#define CLASS_2_0E25FA0468812A32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA530F0)
#define CLASS_2_0E25FA0468812A32__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA530E0)

inline static constexpr unsigned int Class_2_0E25FA0468812A32_TypeDefinitionIndex = 57870;

class Class_2_0E25FA0468812A32 : public ::Foundation::SingletonDisposable_1<::Class_2_0E25FA0468812A32*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E25FA0468812A32_TypeDefinitionIndex)->GetStaticField(0xDE50);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E25FA0468812A32_TypeDefinitionIndex)->GetStaticField(0xDE51);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E25FA0468812A32_TypeDefinitionIndex)->GetStaticField(0xDE52);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E25FA0468812A32_TypeDefinitionIndex)->GetStaticField(0xDE53);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E25FA0468812A32_TypeDefinitionIndex)->GetStaticField(0xDE54);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E25FA0468812A32_TypeDefinitionIndex)->GetStaticField(0xDE58);
	}
	::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* Field_2_11; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_11C904B1A60FB3D5*, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Animator*>* Field_2_14; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_8; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_A926347304CD9897>* Field_2_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_15; // 0x38
	::System::Collections::Generic::List_1<::Class_1_A38BF3E778FA910E*>* Field_2_13; // 0x40
	::Unity::Collections::NativeQueue_1<::Struct_2_4A663F55BC7468E2> Field_2_12; // 0x48
	::Class_2_0E25FA0468812A32_Struct_2_DF619D170D00BE18 Field_2_16; // 0x60
	::System::Boolean Field_2_18; // 0x88
	::Unity::Jobs::JobHandle Field_2_19; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_11C904B1A60FB3D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11C904B1A60FB3D5*))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_4F9A1D0839768227(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_4F9A1D0839768227_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CAADC051AEB67F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_2CAADC051AEB67F9_OFFSET))(this);
	}

	::System::Void Method_2_D683046A6B8F91F3(::Class_1_11C904B1A60FB3D5* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11C904B1A60FB3D5*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_D683046A6B8F91F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B5A6AD44185433D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_6B5A6AD44185433D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_8856EAF4107B25FF(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_8856EAF4107B25FF_OFFSET))(a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_76D5BDC564508CD8(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_76D5BDC564508CD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	static ::System::Void Method_2_E8A21FBDBCFA441F(::Class_1_A38BF3E778FA910E* a1, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2> a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Class_1_A38BF3E778FA910E*, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_E8A21FBDBCFA441F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF0217B75A766CB5(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_0E25FA0468812A32_METHOD_2_AF0217B75A766CB5_OFFSET))(this, a1);
	}
};

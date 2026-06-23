#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1EAE010B7EB1219D_Struct_2_30DF3D284DFCA95D.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Struct_2_34C03801479AC814_1.h"
#include "unitysdk/Struct_2_4A663F55BC7468E2.h"
#include "unitysdk/Struct_2_A926347304CD9897.h"
#include "unitysdk/Struct_2_FC1AAE928068554C.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1_ParallelWriter.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_06EBE0E98D90D5E7;
class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_1EAE010B7EB1219D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DC2460)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x14DC3090)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x14DC4D30)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x14DC3110)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_266D1F003F946A40_OFFSET UNITYSDK_OFFSET(0x14DC3C00)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0x14DC4150)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14DC4040)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_4F9A1D0839768227_OFFSET UNITYSDK_OFFSET(0x14DC3630)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_76D5BDC564508CD8_OFFSET UNITYSDK_OFFSET(0x14DC3210)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_8856EAF4107B25FF_OFFSET UNITYSDK_OFFSET(0x14DC3030)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x14DC2C00)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_AF0217B75A766CB5_OFFSET UNITYSDK_OFFSET(0x14DC3530)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_B0807654076B9AE7_OFFSET UNITYSDK_OFFSET(0x14DC4DA0)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x14DC29C0)
#define CLASS_2_1EAE010B7EB1219D_METHOD_2_D683046A6B8F91F3_OFFSET UNITYSDK_OFFSET(0x14DC3180)
#define CLASS_2_1EAE010B7EB1219D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14DC2200)
#define CLASS_2_1EAE010B7EB1219D__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DC29A0)
#define CLASS_2_1EAE010B7EB1219D__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC2990)

inline static constexpr unsigned int Class_2_1EAE010B7EB1219D_TypeDefinitionIndex = 59051;

class Class_2_1EAE010B7EB1219D : public ::Foundation::SingletonDisposable_1<::Class_2_1EAE010B7EB1219D*>
{
public:
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1EAE010B7EB1219D_TypeDefinitionIndex)->GetStaticField(0xF2B0);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1EAE010B7EB1219D_TypeDefinitionIndex)->GetStaticField(0xF2B4);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1EAE010B7EB1219D_TypeDefinitionIndex)->GetStaticField(0xF2B5);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Animator*>* Field_2_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_1_06EBE0E98D90D5E7*, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_A926347304CD9897>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_34C03801479AC814_1>* Field_2_2; // 0x38
	::Class_2_1EAE010B7EB1219D_Struct_2_30DF3D284DFCA95D Field_2_13; // 0x40
	::Unity::Jobs::JobHandle Field_2_10; // 0x78
	::System::Boolean Field_2_11; // 0x88
	::Unity::Collections::NativeQueue_1<::Struct_2_4A663F55BC7468E2> Field_2_9; // 0x90
	::Unity::Collections::NativeList_1<::Struct_2_FC1AAE928068554C> Field_2_8; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	static ::System::Boolean Method_2_8856EAF4107B25FF(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_8856EAF4107B25FF_OFFSET))(a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_06EBE0E98D90D5E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06EBE0E98D90D5E7*))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D683046A6B8F91F3(::Class_1_06EBE0E98D90D5E7* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06EBE0E98D90D5E7*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_D683046A6B8F91F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_76D5BDC564508CD8(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_76D5BDC564508CD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_AF0217B75A766CB5(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_AF0217B75A766CB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F9A1D0839768227(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_4F9A1D0839768227_OFFSET))(this, a1);
	}

	::System::Void Method_2_266D1F003F946A40(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_266D1F003F946A40_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_B0807654076B9AE7(::Struct_2_FC1AAE928068554C& a1, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2> a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Struct_2_FC1AAE928068554C&, ::Unity::Collections::NativeQueue_1_ParallelWriter<::Struct_2_4A663F55BC7468E2>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_B0807654076B9AE7_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_2CAADC051AEB67F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EAE010B7EB1219D_METHOD_2_2CAADC051AEB67F9_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"

class Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DF80F278B6BDF72___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EF8FA0)
#define CLASS_1_3DF80F278B6BDF72___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF8FE0)
#define CLASS_1_3DF80F278B6BDF72___C__WARMUPPSOSONEBYONE_B__13_0_OFFSET UNITYSDK_OFFSET(0x11EF8FF0)
#define CLASS_1_3DF80F278B6BDF72___C__WARMUPPSOSONEBYONE_B__13_1_OFFSET UNITYSDK_OFFSET(0x11EF9120)
#define CLASS_1_3DF80F278B6BDF72___C__WRITEWARMUPINFOS_B__23_0_OFFSET UNITYSDK_OFFSET(0x11EF9150)

inline static constexpr unsigned int Class_1_3DF80F278B6BDF72___c_TypeDefinitionIndex = 47885;

class Class_1_3DF80F278B6BDF72___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF80F278B6BDF72___c_TypeDefinitionIndex)->GetStaticField(0x42D80);
	}
	static ::Class_1_3DF80F278B6BDF72___c** StaticGet___9()
	{
		return (::Class_1_3DF80F278B6BDF72___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF80F278B6BDF72___c_TypeDefinitionIndex)->GetStaticField(0x42D88);
	}
	static ::System::Comparison_1<::WarmupQualitySet>** StaticGet___9__23_0()
	{
		return (::System::Comparison_1<::WarmupQualitySet>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF80F278B6BDF72___c_TypeDefinitionIndex)->GetStaticField(0x42D90);
	}
	static ::System::Func_2<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*, ::System::Int32>** StaticGet___9__13_1()
	{
		return (::System::Func_2<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DF80F278B6BDF72___c_TypeDefinitionIndex)->GetStaticField(0x42D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _WarmupPSOsOneByOne_b__13_0(::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72___C__WARMUPPSOSONEBYONE_B__13_0_OFFSET))(this, a1);
	}

	::System::Int32 _WarmupPSOsOneByOne_b__13_1(::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3DF80F278B6BDF72_Class_1_2B73F33514AAF796*))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72___C__WARMUPPSOSONEBYONE_B__13_1_OFFSET))(this, a1);
	}

	::System::Int32 _WriteWarmupInfos_b__23_0(::WarmupQualitySet a1, ::WarmupQualitySet a2)
	{
		return ((::System::Int32(*)(::PVOID, ::WarmupQualitySet, ::WarmupQualitySet))((::PBYTE)hIl2Cpp + CLASS_1_3DF80F278B6BDF72___C__WRITEWARMUPINFOS_B__23_0_OFFSET))(this, a1, a2);
	}
};

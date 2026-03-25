#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"

class Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2FD7A51524ECE2E7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114CBF90)
#define CLASS_1_2FD7A51524ECE2E7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114CBFD0)
#define CLASS_1_2FD7A51524ECE2E7___C__WARMUPPSOSONEBYONE_B__14_0_OFFSET UNITYSDK_OFFSET(0x114CBFE0)
#define CLASS_1_2FD7A51524ECE2E7___C__WARMUPPSOSONEBYONE_B__14_1_OFFSET UNITYSDK_OFFSET(0x114CC0E0)
#define CLASS_1_2FD7A51524ECE2E7___C__WRITEWARMUPINFOS_B__24_0_OFFSET UNITYSDK_OFFSET(0x114CC110)

inline static constexpr unsigned int Class_1_2FD7A51524ECE2E7___c_TypeDefinitionIndex = 38289;

class Class_1_2FD7A51524ECE2E7___c : public ::System::Object
{
public:
	static ::Class_1_2FD7A51524ECE2E7___c** StaticGet___9()
	{
		return (::Class_1_2FD7A51524ECE2E7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FD7A51524ECE2E7___c_TypeDefinitionIndex)->GetStaticField(0x36ED0);
	}
	static ::System::Func_2<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*, ::System::Int32>** StaticGet___9__14_1()
	{
		return (::System::Func_2<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FD7A51524ECE2E7___c_TypeDefinitionIndex)->GetStaticField(0x36ED8);
	}
	static ::System::Comparison_1<::WarmupQualitySet>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::WarmupQualitySet>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FD7A51524ECE2E7___c_TypeDefinitionIndex)->GetStaticField(0x36EE0);
	}
	static ::System::Func_2<::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FD7A51524ECE2E7___c_TypeDefinitionIndex)->GetStaticField(0x36EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _WarmupPSOsOneByOne_b__14_0(::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>* qualityData)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*>*))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7___C__WARMUPPSOSONEBYONE_B__14_0_OFFSET))(this, qualityData);
	}

	::System::Int32 _WarmupPSOsOneByOne_b__14_1(::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796* shaderPSOs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_2FD7A51524ECE2E7_Class_1_2B73F33514AAF796*))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7___C__WARMUPPSOSONEBYONE_B__14_1_OFFSET))(this, shaderPSOs);
	}

	::System::Int32 _WriteWarmupInfos_b__24_0(::WarmupQualitySet lhs, ::WarmupQualitySet rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::WarmupQualitySet, ::WarmupQualitySet))((::PBYTE)hIl2Cpp + CLASS_1_2FD7A51524ECE2E7___C__WRITEWARMUPINFOS_B__24_0_OFFSET))(this, lhs, rhs);
	}
};

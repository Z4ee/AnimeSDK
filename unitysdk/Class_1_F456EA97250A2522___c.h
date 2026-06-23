#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_AC1B1CB16C488BEC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F456EA97250A2522___C_METHOD_1_71D5E10C4D500F85_OFFSET UNITYSDK_OFFSET(0x11DCF6F0)
#define CLASS_1_F456EA97250A2522___C_METHOD_1_A40522FA0B9F304D_OFFSET UNITYSDK_OFFSET(0x11DCF640)
#define CLASS_1_F456EA97250A2522___C_METHOD_1_CC2E3B8F36E04311_OFFSET UNITYSDK_OFFSET(0x11DCF740)
#define CLASS_1_F456EA97250A2522___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DCF5F0)
#define CLASS_1_F456EA97250A2522___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCF630)

inline static constexpr unsigned int Class_1_F456EA97250A2522___c_TypeDefinitionIndex = 50182;

class Class_1_F456EA97250A2522___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F456EA97250A2522___c_TypeDefinitionIndex)->GetStaticField(0x49590);
	}
	static ::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Int32>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F456EA97250A2522___c_TypeDefinitionIndex)->GetStaticField(0x49598);
	}
	static ::Class_1_F456EA97250A2522___c** StaticGet___9()
	{
		return (::Class_1_F456EA97250A2522___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F456EA97250A2522___c_TypeDefinitionIndex)->GetStaticField(0x495A0);
	}
	static ::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::Class_2_AC1B1CB16C488BEC*>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::Class_2_AC1B1CB16C488BEC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F456EA97250A2522___c_TypeDefinitionIndex)->GetStaticField(0x495A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A40522FA0B9F304D(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522___C_METHOD_1_A40522FA0B9F304D_OFFSET))(this, a1);
	}

	::Class_2_AC1B1CB16C488BEC* Method_1_71D5E10C4D500F85(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::Class_2_AC1B1CB16C488BEC*(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522___C_METHOD_1_71D5E10C4D500F85_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CC2E3B8F36E04311(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F456EA97250A2522___C_METHOD_1_CC2E3B8F36E04311_OFFSET))(this, a1, a2);
	}
};

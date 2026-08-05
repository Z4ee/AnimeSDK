#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A17C274079359ED8___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0xF751860)
#define CLASS_2_A17C274079359ED8___C_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0xF751870)
#define CLASS_2_A17C274079359ED8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF751810)
#define CLASS_2_A17C274079359ED8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF751850)

inline static constexpr unsigned int Class_2_A17C274079359ED8___c_TypeDefinitionIndex = 70403;

class Class_2_A17C274079359ED8___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A17C274079359ED8___c_TypeDefinitionIndex)->GetStaticField(0x47500);
	}
	static ::Class_2_A17C274079359ED8___c** StaticGet___9()
	{
		return (::Class_2_A17C274079359ED8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A17C274079359ED8___c_TypeDefinitionIndex)->GetStaticField(0x47508);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__4_1()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A17C274079359ED8___c_TypeDefinitionIndex)->GetStaticField(0x47510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}
};

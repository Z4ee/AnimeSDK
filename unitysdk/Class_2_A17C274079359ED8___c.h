#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A17C274079359ED8___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x141EC360)
#define CLASS_2_A17C274079359ED8___C_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x141EC2D0)
#define CLASS_2_A17C274079359ED8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141EC280)
#define CLASS_2_A17C274079359ED8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141EC2C0)

inline static constexpr unsigned int Class_2_A17C274079359ED8___c_TypeDefinitionIndex = 48678;

class Class_2_A17C274079359ED8___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A17C274079359ED8___c_TypeDefinitionIndex)->GetStaticField(0x2FB50);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__4_1()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A17C274079359ED8___c_TypeDefinitionIndex)->GetStaticField(0x2FB58);
	}
	static ::Class_2_A17C274079359ED8___c** StaticGet___9()
	{
		return (::Class_2_A17C274079359ED8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A17C274079359ED8___c_TypeDefinitionIndex)->GetStaticField(0x2FB60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};

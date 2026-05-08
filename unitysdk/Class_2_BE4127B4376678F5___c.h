#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_840FB8C8E5613817;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BE4127B4376678F5___C_METHOD_1_E26C967FF0DDE82A_OFFSET UNITYSDK_OFFSET(0x13A3EF20)
#define CLASS_2_BE4127B4376678F5___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x13A3EF40)
#define CLASS_2_BE4127B4376678F5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A3EED0)
#define CLASS_2_BE4127B4376678F5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A3EF10)

inline static constexpr unsigned int Class_2_BE4127B4376678F5___c_TypeDefinitionIndex = 81996;

class Class_2_BE4127B4376678F5___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_840FB8C8E5613817*, ::System::UInt32>** StaticGet___9__33_0()
	{
		return (::System::Func_2<::Class_3_840FB8C8E5613817*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE4127B4376678F5___c_TypeDefinitionIndex)->GetStaticField(0x2A760);
	}
	static ::Class_2_BE4127B4376678F5___c** StaticGet___9()
	{
		return (::Class_2_BE4127B4376678F5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE4127B4376678F5___c_TypeDefinitionIndex)->GetStaticField(0x2A768);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE4127B4376678F5___c_TypeDefinitionIndex)->GetStaticField(0x2A770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE4127B4376678F5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE4127B4376678F5___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_E26C967FF0DDE82A(::Class_3_840FB8C8E5613817* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_3_840FB8C8E5613817*))((::PBYTE)hIl2Cpp + CLASS_2_BE4127B4376678F5___C_METHOD_1_E26C967FF0DDE82A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BE4127B4376678F5___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};

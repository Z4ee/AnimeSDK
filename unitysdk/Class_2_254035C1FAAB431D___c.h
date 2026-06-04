#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DAF14F72B32D5C3;
class Class_1_668FE281FA72D3E8_4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_254035C1FAAB431D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC5DF80)
#define CLASS_2_254035C1FAAB431D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5DFC0)
#define CLASS_2_254035C1FAAB431D___C___CONVERTTOPROTO_B__13_0_OFFSET UNITYSDK_OFFSET(0xAC5DFD0)

inline static constexpr unsigned int Class_2_254035C1FAAB431D___c_TypeDefinitionIndex = 74161;

class Class_2_254035C1FAAB431D___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_1DAF14F72B32D5C3*, ::Class_1_668FE281FA72D3E8_4*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_1_1DAF14F72B32D5C3*, ::Class_1_668FE281FA72D3E8_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_254035C1FAAB431D___c_TypeDefinitionIndex)->GetStaticField(0x16DE0);
	}
	static ::Class_2_254035C1FAAB431D___c** StaticGet___9()
	{
		return (::Class_2_254035C1FAAB431D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_254035C1FAAB431D___c_TypeDefinitionIndex)->GetStaticField(0x16DE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_254035C1FAAB431D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_254035C1FAAB431D___C__CTOR_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_4* __ConvertToProto_b__13_0(::Class_1_1DAF14F72B32D5C3* a1)
	{
		return ((::Class_1_668FE281FA72D3E8_4*(*)(::PVOID, ::Class_1_1DAF14F72B32D5C3*))((::PBYTE)hIl2Cpp + CLASS_2_254035C1FAAB431D___C___CONVERTTOPROTO_B__13_0_OFFSET))(this, a1);
	}
};

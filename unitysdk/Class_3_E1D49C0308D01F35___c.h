#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_E1D49C0308D01F35___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16116BF0)
#define CLASS_3_E1D49C0308D01F35___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16116C30)
#define CLASS_3_E1D49C0308D01F35___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x16116C40)

inline static constexpr unsigned int Class_3_E1D49C0308D01F35___c_TypeDefinitionIndex = 52933;

class Class_3_E1D49C0308D01F35___c : public ::System::Object
{
public:
	static ::Class_3_E1D49C0308D01F35___c** StaticGet___9()
	{
		return (::Class_3_E1D49C0308D01F35___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E1D49C0308D01F35___c_TypeDefinitionIndex)->GetStaticField(0x36EF0);
	}
	static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E1D49C0308D01F35___c_TypeDefinitionIndex)->GetStaticField(0x36EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35___C__CTOR_OFFSET))(this);
	}

	::System::Single _OnTaskBegin_b__2_0(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E1D49C0308D01F35___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A03C6135177E0F97___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA09630)
#define CLASS_1_A03C6135177E0F97___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA09670)
#define CLASS_1_A03C6135177E0F97___C___CTOR_B__17_7_OFFSET UNITYSDK_OFFSET(0xCA09680)

inline static constexpr unsigned int Class_1_A03C6135177E0F97___c_TypeDefinitionIndex = 79566;

class Class_1_A03C6135177E0F97___c : public ::System::Object
{
public:
	static ::Class_1_A03C6135177E0F97___c** StaticGet___9()
	{
		return (::Class_1_A03C6135177E0F97___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C6135177E0F97___c_TypeDefinitionIndex)->GetStaticField(0x1ED50);
	}
	static ::System::Func_2<::System::Boolean, ::System::Int32>** StaticGet___9__17_7()
	{
		return (::System::Func_2<::System::Boolean, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C6135177E0F97___c_TypeDefinitionIndex)->GetStaticField(0x1ED58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__17_7(::System::Boolean a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97___C___CTOR_B__17_7_OFFSET))(this, a1);
	}
};

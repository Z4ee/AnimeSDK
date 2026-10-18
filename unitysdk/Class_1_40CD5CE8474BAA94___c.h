#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00D0CC9E4AC1D590;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_40CD5CE8474BAA94___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B4E3E0)
#define CLASS_1_40CD5CE8474BAA94___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4E420)
#define CLASS_1_40CD5CE8474BAA94___C__SORTHOLDEDDICES_B__83_0_OFFSET UNITYSDK_OFFSET(0x15B4E430)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94___c_TypeDefinitionIndex = 60319;

class Class_1_40CD5CE8474BAA94___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_00D0CC9E4AC1D590*>** StaticGet___9__83_0()
	{
		return (::System::Comparison_1<::Class_1_00D0CC9E4AC1D590*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CD5CE8474BAA94___c_TypeDefinitionIndex)->GetStaticField(0x6D4C0);
	}
	static ::Class_1_40CD5CE8474BAA94___c** StaticGet___9()
	{
		return (::Class_1_40CD5CE8474BAA94___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CD5CE8474BAA94___c_TypeDefinitionIndex)->GetStaticField(0x6D4C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortHoldedDices_b__83_0(::Class_1_00D0CC9E4AC1D590* a1, ::Class_1_00D0CC9E4AC1D590* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_00D0CC9E4AC1D590*, ::Class_1_00D0CC9E4AC1D590*))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__SORTHOLDEDDICES_B__83_0_OFFSET))(this, a1, a2);
	}
};

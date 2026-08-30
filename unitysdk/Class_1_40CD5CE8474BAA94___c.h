#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C8BB23B0435A836;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_40CD5CE8474BAA94___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158565E0)
#define CLASS_1_40CD5CE8474BAA94___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15856620)
#define CLASS_1_40CD5CE8474BAA94___C__SORTHOLDEDDICES_B__83_0_OFFSET UNITYSDK_OFFSET(0x15856630)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94___c_TypeDefinitionIndex = 60431;

class Class_1_40CD5CE8474BAA94___c : public ::System::Object
{
public:
	static ::Class_1_40CD5CE8474BAA94___c** StaticGet___9()
	{
		return (::Class_1_40CD5CE8474BAA94___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CD5CE8474BAA94___c_TypeDefinitionIndex)->GetStaticField(0x593D0);
	}
	static ::System::Comparison_1<::Class_1_9C8BB23B0435A836*>** StaticGet___9__83_0()
	{
		return (::System::Comparison_1<::Class_1_9C8BB23B0435A836*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CD5CE8474BAA94___c_TypeDefinitionIndex)->GetStaticField(0x593D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortHoldedDices_b__83_0(::Class_1_9C8BB23B0435A836* a1, ::Class_1_9C8BB23B0435A836* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__SORTHOLDEDDICES_B__83_0_OFFSET))(this, a1, a2);
	}
};

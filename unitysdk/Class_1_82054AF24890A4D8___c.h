#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_399;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_82054AF24890A4D8___C_METHOD_1_A3442125E1F62FA3_OFFSET UNITYSDK_OFFSET(0x11FB9DE0)
#define CLASS_1_82054AF24890A4D8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FB9D90)
#define CLASS_1_82054AF24890A4D8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11FB9DD0)

inline static constexpr unsigned int Class_1_82054AF24890A4D8___c_TypeDefinitionIndex = 69403;

class Class_1_82054AF24890A4D8___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82054AF24890A4D8___c_TypeDefinitionIndex)->GetStaticField(0x41C40);
	}
	static ::Class_1_82054AF24890A4D8___c** StaticGet___9()
	{
		return (::Class_1_82054AF24890A4D8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82054AF24890A4D8___c_TypeDefinitionIndex)->GetStaticField(0x41C48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A3442125E1F62FA3(::Class_1_5DA2E7556103D5A3_399* a1, ::Class_1_5DA2E7556103D5A3_399* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + CLASS_1_82054AF24890A4D8___C_METHOD_1_A3442125E1F62FA3_OFFSET))(this, a1, a2);
	}
};

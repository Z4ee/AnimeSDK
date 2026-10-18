#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_2;
class Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_1D60F7271ABDF106___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5233C0)
#define CLASS_2_1D60F7271ABDF106___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB523400)
#define CLASS_2_1D60F7271ABDF106___C__GENSTATISTICS_B__4_0_OFFSET UNITYSDK_OFFSET(0xB523410)

inline static constexpr unsigned int Class_2_1D60F7271ABDF106___c_TypeDefinitionIndex = 56011;

class Class_2_1D60F7271ABDF106___c : public ::System::Object
{
public:
	static ::Class_2_1D60F7271ABDF106___c** StaticGet___9()
	{
		return (::Class_2_1D60F7271ABDF106___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1D60F7271ABDF106___c_TypeDefinitionIndex)->GetStaticField(0x5A440);
	}
	static ::System::Func_2<::Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99*, ::Class_1_EBB10EC01CCC4716_2*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99*, ::Class_1_EBB10EC01CCC4716_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1D60F7271ABDF106___c_TypeDefinitionIndex)->GetStaticField(0x5A448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1D60F7271ABDF106___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D60F7271ABDF106___C__CTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_2* _GenStatistics_b__4_0(::Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99* a1)
	{
		return ((::Class_1_EBB10EC01CCC4716_2*(*)(::PVOID, ::Class_2_1D60F7271ABDF106_Class_1_98952B4A4DD0BE99*))((::PBYTE)hIl2Cpp + CLASS_2_1D60F7271ABDF106___C__GENSTATISTICS_B__4_0_OFFSET))(this, a1);
	}
};

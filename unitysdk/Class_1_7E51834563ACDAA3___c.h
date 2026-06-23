#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7E51834563ACDAA3___C_METHOD_1_5FD8A1C32402353A_OFFSET UNITYSDK_OFFSET(0x10785530)
#define CLASS_1_7E51834563ACDAA3___C_METHOD_1_740CA6813B67F8F2_OFFSET UNITYSDK_OFFSET(0x10785540)
#define CLASS_1_7E51834563ACDAA3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x107854E0)
#define CLASS_1_7E51834563ACDAA3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10785520)

inline static constexpr unsigned int Class_1_7E51834563ACDAA3___c_TypeDefinitionIndex = 79398;

class Class_1_7E51834563ACDAA3___c : public ::System::Object
{
public:
	static ::Class_1_7E51834563ACDAA3___c** StaticGet___9()
	{
		return (::Class_1_7E51834563ACDAA3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E51834563ACDAA3___c_TypeDefinitionIndex)->GetStaticField(0x395D0);
	}
	static ::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E51834563ACDAA3___c_TypeDefinitionIndex)->GetStaticField(0x395D8);
	}
	static ::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::Int32>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_2_1824EF69C8E376A3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E51834563ACDAA3___c_TypeDefinitionIndex)->GetStaticField(0x395E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E51834563ACDAA3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E51834563ACDAA3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5FD8A1C32402353A(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_1_7E51834563ACDAA3___C_METHOD_1_5FD8A1C32402353A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_740CA6813B67F8F2(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_1_7E51834563ACDAA3___C_METHOD_1_740CA6813B67F8F2_OFFSET))(this, a1);
	}
};

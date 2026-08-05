#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D46C5D064952E16_6.h"

class Class_1_5F817449EE3DD0C4;
class Class_2_0114679E2864BD47;
namespace System { class Type; }

#define CLASS_2_09D70B9EED699290_METHOD_2_1470AED6F2704975_OFFSET UNITYSDK_OFFSET(0xF20BAC0)
#define CLASS_2_09D70B9EED699290_METHOD_2_E3FFC49679E23EF8_OFFSET UNITYSDK_OFFSET(0xF20A560)
#define CLASS_2_09D70B9EED699290_METHOD_2_F28F32904368D612_OFFSET UNITYSDK_OFFSET(0xF20A400)
#define CLASS_2_09D70B9EED699290__CCTOR_OFFSET UNITYSDK_OFFSET(0xF20A600)
#define CLASS_2_09D70B9EED699290__CTOR_OFFSET UNITYSDK_OFFSET(0xF20A5F0)

inline static constexpr unsigned int Class_2_09D70B9EED699290_TypeDefinitionIndex = 87438;

class Class_2_09D70B9EED699290 : public ::Class_1_3D46C5D064952E16_6
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09D70B9EED699290_TypeDefinitionIndex)->GetStaticField(0x47E20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09D70B9EED699290__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_09D70B9EED699290__CCTOR_OFFSET))();
	}

	::Class_2_0114679E2864BD47* Method_2_F28F32904368D612(::Class_1_5F817449EE3DD0C4* a1)
	{
		return ((::Class_2_0114679E2864BD47*(*)(::PVOID, ::Class_1_5F817449EE3DD0C4*))((::PBYTE)hIl2Cpp + CLASS_2_09D70B9EED699290_METHOD_2_F28F32904368D612_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Type*>* Method_2_E3FFC49679E23EF8()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09D70B9EED699290_METHOD_2_E3FFC49679E23EF8_OFFSET))(this);
	}

	::Class_1_5F817449EE3DD0C4* Method_2_1470AED6F2704975()
	{
		return ((::Class_1_5F817449EE3DD0C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09D70B9EED699290_METHOD_2_1470AED6F2704975_OFFSET))(this);
	}
};

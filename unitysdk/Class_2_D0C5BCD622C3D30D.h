#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2DFEC5475995150.h"

class Class_2_CE9E0A4805087FDF;
class Class_4_F7FD34BD70F3BC4F;
namespace System { class String; }

#define CLASS_2_D0C5BCD622C3D30D_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1C69DAE0)
#define CLASS_2_D0C5BCD622C3D30D_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1C69DDF0)
#define CLASS_2_D0C5BCD622C3D30D_METHOD_2_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x1C69DBA0)
#define CLASS_2_D0C5BCD622C3D30D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69DAA0)

inline static constexpr unsigned int Class_2_D0C5BCD622C3D30D_TypeDefinitionIndex = 92508;

class Class_2_D0C5BCD622C3D30D : public ::Class_1_E2DFEC5475995150
{
public:
	::Class_2_CE9E0A4805087FDF* Field_2_0; // 0x40

	::System::Void _ctor(::Class_4_F7FD34BD70F3BC4F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_F7FD34BD70F3BC4F*))((::PBYTE)hIl2Cpp + CLASS_2_D0C5BCD622C3D30D__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C5BCD622C3D30D_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D0C5BCD622C3D30D_METHOD_2_E3ADA5CA2C064E44_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0C5BCD622C3D30D_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};

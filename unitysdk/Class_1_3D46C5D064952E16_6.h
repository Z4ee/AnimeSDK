#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F817449EE3DD0C4;
class Class_2_0114679E2864BD47;
namespace System { class Type; }

#define CLASS_1_3D46C5D064952E16_6_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x11583560)
#define CLASS_1_3D46C5D064952E16_6_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11583580)
#define CLASS_1_3D46C5D064952E16_6_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x11583570)
#define CLASS_1_3D46C5D064952E16_6__CTOR_OFFSET UNITYSDK_OFFSET(0x11583550)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_6_TypeDefinitionIndex = 58268;

class Class_1_3D46C5D064952E16_6 : public ::System::Object
{
public:
	static ::Class_2_0114679E2864BD47** StaticGet_Field_1_0()
	{
		return (::Class_2_0114679E2864BD47**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16_6_TypeDefinitionIndex)->GetStaticField(0x30150);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_6__CTOR_OFFSET))(this);
	}

	static ::Class_2_0114679E2864BD47* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_0114679E2864BD47*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_6_METHOD_1_43A46E5F9FAC62B8_OFFSET))();
	}

	static ::System::Void Method_1_58BA0C8308C8127F(::Class_2_0114679E2864BD47* a1)
	{
		return ((::System::Void(*)(::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_6_METHOD_1_58BA0C8308C8127F_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_6_METHOD_1_5790A55946AA509D_OFFSET))();
	}
};

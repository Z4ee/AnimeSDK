#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_19EADCA9FC374987_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x12998860)
#define CLASS_2_19EADCA9FC374987_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12998850)

inline static constexpr unsigned int Class_2_19EADCA9FC374987_1_TypeDefinitionIndex = 64756;

class Class_2_19EADCA9FC374987_1 : public ::System::Attribute
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19EADCA9FC374987_1_TypeDefinitionIndex)->GetStaticField(0x57F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EADCA9FC374987_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_19EADCA9FC374987_1__CCTOR_OFFSET))();
	}
};

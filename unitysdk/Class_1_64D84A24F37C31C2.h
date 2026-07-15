#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_413D5A0FF338BAB8;
class Class_1_D2C97E5E9F60802E;
class Class_2_68CB91321C3E76A7;

#define CLASS_1_64D84A24F37C31C2_METHOD_1_D7A14FD69B8367D0_OFFSET UNITYSDK_OFFSET(0x170ABCE0)
#define CLASS_1_64D84A24F37C31C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x170ABED0)
#define CLASS_1_64D84A24F37C31C2__CTOR_OFFSET UNITYSDK_OFFSET(0x170ABEC0)

inline static constexpr unsigned int Class_1_64D84A24F37C31C2_TypeDefinitionIndex = 73347;

class Class_1_64D84A24F37C31C2 : public ::System::Object
{
public:
	static ::Class_1_64D84A24F37C31C2** StaticGet_Field_1_0()
	{
		return (::Class_1_64D84A24F37C31C2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64D84A24F37C31C2_TypeDefinitionIndex)->GetStaticField(0x2D830);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64D84A24F37C31C2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64D84A24F37C31C2__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_D7A14FD69B8367D0(::Class_1_413D5A0FF338BAB8* a1, ::Class_1_D2C97E5E9F60802E* a2, ::Class_2_68CB91321C3E76A7* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_413D5A0FF338BAB8*, ::Class_1_D2C97E5E9F60802E*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_64D84A24F37C31C2_METHOD_1_D7A14FD69B8367D0_OFFSET))(this, a1, a2, a3);
	}
};

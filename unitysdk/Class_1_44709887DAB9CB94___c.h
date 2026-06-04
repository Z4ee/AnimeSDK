#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_44709887DAB9CB94;

#define CLASS_1_44709887DAB9CB94___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A532E80)
#define CLASS_1_44709887DAB9CB94___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A532EB0)
#define CLASS_1_44709887DAB9CB94___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A532EC0)
#define CLASS_1_44709887DAB9CB94___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1A532F10)
#define CLASS_1_44709887DAB9CB94___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1A532F20)

inline static constexpr unsigned int Class_1_44709887DAB9CB94___c_TypeDefinitionIndex = 29440;

class Class_1_44709887DAB9CB94___c : public ::System::Object
{
public:
	static ::Class_1_44709887DAB9CB94___c** StaticGet___9()
	{
		return (::Class_1_44709887DAB9CB94___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44709887DAB9CB94___c_TypeDefinitionIndex)->GetStaticField(0x102F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94___C__CTOR_OFFSET))(this);
	}

	::Class_1_44709887DAB9CB94* __cctor_b__23_0()
	{
		return ((::Class_1_44709887DAB9CB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94___C___CCTOR_B__23_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__23_1(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94___C___CCTOR_B__23_1_OFFSET))(this, a1);
	}

	::Enum_3_A35B38E5F9115A76_2 __cctor_b__23_2(::System::Int32 a1)
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44709887DAB9CB94___C___CCTOR_B__23_2_OFFSET))(this, a1);
	}
};

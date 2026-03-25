#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_496;
class Class_0_16E4307DCC419505_497;
class Class_2_F71231D877170194;
namespace System { class String; }

#define CLASS_1_ECE8E5C06F9041A1_METHOD_1_C0733427C3A538ED_OFFSET UNITYSDK_OFFSET(0xDE57880)
#define CLASS_1_ECE8E5C06F9041A1__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE57AB0)
#define CLASS_1_ECE8E5C06F9041A1__CTOR_OFFSET UNITYSDK_OFFSET(0xDE57AA0)

inline static constexpr unsigned int Class_1_ECE8E5C06F9041A1_TypeDefinitionIndex = 51351;

class Class_1_ECE8E5C06F9041A1 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_496** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_496**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE8E5C06F9041A1_TypeDefinitionIndex)->GetStaticField(0x47850);
	}
	static ::Class_2_F71231D877170194** StaticGet_Field_1_1()
	{
		return (::Class_2_F71231D877170194**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE8E5C06F9041A1_TypeDefinitionIndex)->GetStaticField(0x47858);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE8E5C06F9041A1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE8E5C06F9041A1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_497* Method_1_C0733427C3A538ED(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::Class_0_16E4307DCC419505_497*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECE8E5C06F9041A1_METHOD_1_C0733427C3A538ED_OFFSET))(a1, a2);
	}
};

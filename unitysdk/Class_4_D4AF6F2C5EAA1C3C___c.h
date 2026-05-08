#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_D4AF6F2C5EAA1C3C___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xEF97CE0)
#define CLASS_4_D4AF6F2C5EAA1C3C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEF97C90)
#define CLASS_4_D4AF6F2C5EAA1C3C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEF97CD0)

inline static constexpr unsigned int Class_4_D4AF6F2C5EAA1C3C___c_TypeDefinitionIndex = 43526;

class Class_4_D4AF6F2C5EAA1C3C___c : public ::System::Object
{
public:
	static ::Class_4_D4AF6F2C5EAA1C3C___c** StaticGet___9()
	{
		return (::Class_4_D4AF6F2C5EAA1C3C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D4AF6F2C5EAA1C3C___c_TypeDefinitionIndex)->GetStaticField(0x3FDE0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_D4AF6F2C5EAA1C3C___c_TypeDefinitionIndex)->GetStaticField(0x3FDE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_D4AF6F2C5EAA1C3C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4AF6F2C5EAA1C3C___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4AF6F2C5EAA1C3C___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3B0413BEA1AD1146___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xFBDF990)
#define CLASS_2_3B0413BEA1AD1146___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBDF940)
#define CLASS_2_3B0413BEA1AD1146___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFBDF980)

inline static constexpr unsigned int Class_2_3B0413BEA1AD1146___c_TypeDefinitionIndex = 72495;

class Class_2_3B0413BEA1AD1146___c : public ::System::Object
{
public:
	static ::Class_2_3B0413BEA1AD1146___c** StaticGet___9()
	{
		return (::Class_2_3B0413BEA1AD1146___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B0413BEA1AD1146___c_TypeDefinitionIndex)->GetStaticField(0x4C340);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__37_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B0413BEA1AD1146___c_TypeDefinitionIndex)->GetStaticField(0x4C348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B0413BEA1AD1146___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0413BEA1AD1146___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0413BEA1AD1146___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};

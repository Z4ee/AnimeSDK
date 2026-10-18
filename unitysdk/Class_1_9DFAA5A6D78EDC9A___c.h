#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9DFAA5A6D78EDC9A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE826130)
#define CLASS_1_9DFAA5A6D78EDC9A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE826170)
#define CLASS_1_9DFAA5A6D78EDC9A___C__GET_DESC_B__2_0_OFFSET UNITYSDK_OFFSET(0xE826180)

inline static constexpr unsigned int Class_1_9DFAA5A6D78EDC9A___c_TypeDefinitionIndex = 79666;

class Class_1_9DFAA5A6D78EDC9A___c : public ::System::Object
{
public:
	static ::Class_1_9DFAA5A6D78EDC9A___c** StaticGet___9()
	{
		return (::Class_1_9DFAA5A6D78EDC9A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DFAA5A6D78EDC9A___c_TypeDefinitionIndex)->GetStaticField(0x63070);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DFAA5A6D78EDC9A___c_TypeDefinitionIndex)->GetStaticField(0x63078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DFAA5A6D78EDC9A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DFAA5A6D78EDC9A___C__CTOR_OFFSET))(this);
	}

	::System::String* _get_Desc_b__2_0(::Class_0_16E4307DCC419505_123* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_123*))((::PBYTE)hIl2Cpp + CLASS_1_9DFAA5A6D78EDC9A___C__GET_DESC_B__2_0_OFFSET))(this, a1);
	}
};

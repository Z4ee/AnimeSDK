#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D6DA183EF60F02C8;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_4DCF564307588607___C_METHOD_1_D9E16EE20DF16DFD_OFFSET UNITYSDK_OFFSET(0x1A202DB0)
#define CLASS_3_4DCF564307588607___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A202D60)
#define CLASS_3_4DCF564307588607___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A202DA0)

inline static constexpr unsigned int Class_3_4DCF564307588607___c_TypeDefinitionIndex = 40066;

class Class_3_4DCF564307588607___c : public ::System::Object
{
public:
	static ::Class_3_4DCF564307588607___c** StaticGet___9()
	{
		return (::Class_3_4DCF564307588607___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4DCF564307588607___c_TypeDefinitionIndex)->GetStaticField(0x43BE0);
	}
	static ::System::Action_1<::Class_3_D6DA183EF60F02C8*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_D6DA183EF60F02C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4DCF564307588607___c_TypeDefinitionIndex)->GetStaticField(0x43BE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4DCF564307588607___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DCF564307588607___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D9E16EE20DF16DFD(::Class_3_D6DA183EF60F02C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_4DCF564307588607___C_METHOD_1_D9E16EE20DF16DFD_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5C01DB3813C27EF2;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_5C01DB3813C27EF2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB9DEB0)
#define CLASS_3_5C01DB3813C27EF2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB9DEF0)
#define CLASS_3_5C01DB3813C27EF2___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xAB9DF00)

inline static constexpr unsigned int Class_3_5C01DB3813C27EF2___c_TypeDefinitionIndex = 49390;

class Class_3_5C01DB3813C27EF2___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_5C01DB3813C27EF2*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_3_5C01DB3813C27EF2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5C01DB3813C27EF2___c_TypeDefinitionIndex)->GetStaticField(0xE1D0);
	}
	static ::Class_3_5C01DB3813C27EF2___c** StaticGet___9()
	{
		return (::Class_3_5C01DB3813C27EF2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5C01DB3813C27EF2___c_TypeDefinitionIndex)->GetStaticField(0xE1D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___C__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0(::Class_3_5C01DB3813C27EF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5C01DB3813C27EF2*))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2___C___CTOR_B__0_0_OFFSET))(this, a1);
	}
};

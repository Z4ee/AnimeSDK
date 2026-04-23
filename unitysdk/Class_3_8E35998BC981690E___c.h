#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8E35998BC981690E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_8E35998BC981690E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0449E0)
#define CLASS_3_8E35998BC981690E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA044A10)
#define CLASS_3_8E35998BC981690E___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xA044A20)

inline static constexpr unsigned int Class_3_8E35998BC981690E___c_TypeDefinitionIndex = 48725;

class Class_3_8E35998BC981690E___c : public ::System::Object
{
public:
	static ::Class_3_8E35998BC981690E___c** StaticGet___9()
	{
		return (::Class_3_8E35998BC981690E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8E35998BC981690E___c_TypeDefinitionIndex)->GetStaticField(0x6AB00);
	}
	static ::System::Action_1<::Class_3_8E35998BC981690E*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_3_8E35998BC981690E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8E35998BC981690E___c_TypeDefinitionIndex)->GetStaticField(0x6AB08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___C__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0(::Class_3_8E35998BC981690E* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8E35998BC981690E*))((::PBYTE)hIl2Cpp + CLASS_3_8E35998BC981690E___C___CTOR_B__0_0_OFFSET))(this, self);
	}
};

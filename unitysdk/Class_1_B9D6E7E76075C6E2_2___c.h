#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_B9D6E7E76075C6E2_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CAD100)
#define CLASS_1_B9D6E7E76075C6E2_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAD140)
#define CLASS_1_B9D6E7E76075C6E2_2___C__GETBOSSENEMY_B__5_0_OFFSET UNITYSDK_OFFSET(0x16CAD150)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_2___c_TypeDefinitionIndex = 79677;

class Class_1_B9D6E7E76075C6E2_2___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_0471857D35382E2E*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::Class_1_0471857D35382E2E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9D6E7E76075C6E2_2___c_TypeDefinitionIndex)->GetStaticField(0x42E0);
	}
	static ::Class_1_B9D6E7E76075C6E2_2___c** StaticGet___9()
	{
		return (::Class_1_B9D6E7E76075C6E2_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9D6E7E76075C6E2_2___c_TypeDefinitionIndex)->GetStaticField(0x42E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetBossEnemy_b__5_0(::Class_1_0471857D35382E2E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__GETBOSSENEMY_B__5_0_OFFSET))(this, a1);
	}
};

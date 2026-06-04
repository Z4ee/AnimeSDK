#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B60836D7AC28948F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xABF8A90)
#define CLASS_1_B60836D7AC28948F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xABF8AC0)
#define CLASS_1_B60836D7AC28948F___C__INITIAL_B__63_0_OFFSET UNITYSDK_OFFSET(0xABF8AD0)

inline static constexpr unsigned int Class_1_B60836D7AC28948F___c_TypeDefinitionIndex = 69075;

class Class_1_B60836D7AC28948F___c : public ::System::Object
{
public:
	static ::Class_1_B60836D7AC28948F___c** StaticGet___9()
	{
		return (::Class_1_B60836D7AC28948F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B60836D7AC28948F___c_TypeDefinitionIndex)->GetStaticField(0x120C0);
	}
	static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__63_0()
	{
		return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B60836D7AC28948F___c_TypeDefinitionIndex)->GetStaticField(0x120C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _initial_b__63_0(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_B60836D7AC28948F___C__INITIAL_B__63_0_OFFSET))(this, a1);
	}
};

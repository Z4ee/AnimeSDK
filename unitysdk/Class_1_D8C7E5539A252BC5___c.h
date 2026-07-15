#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_D8C7E5539A252BC5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181810D0)
#define CLASS_1_D8C7E5539A252BC5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18181110)
#define CLASS_1_D8C7E5539A252BC5___C__REMOVEENDBUFFS_B__8_0_OFFSET UNITYSDK_OFFSET(0x18181120)

inline static constexpr unsigned int Class_1_D8C7E5539A252BC5___c_TypeDefinitionIndex = 35740;

class Class_1_D8C7E5539A252BC5___c : public ::System::Object
{
public:
	static ::Class_1_D8C7E5539A252BC5___c** StaticGet___9()
	{
		return (::Class_1_D8C7E5539A252BC5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C7E5539A252BC5___c_TypeDefinitionIndex)->GetStaticField(0x59AA0);
	}
	static ::System::Predicate_1<::Class_1_7686EC5B8E7BB729*>** StaticGet___9__8_0()
	{
		return (::System::Predicate_1<::Class_1_7686EC5B8E7BB729*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8C7E5539A252BC5___c_TypeDefinitionIndex)->GetStaticField(0x59AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveEndBuffs_b__8_0(::Class_1_7686EC5B8E7BB729* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7686EC5B8E7BB729*))((::PBYTE)hIl2Cpp + CLASS_1_D8C7E5539A252BC5___C__REMOVEENDBUFFS_B__8_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BAD4948F9FB7FC7A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9FC30786612477D7___C_METHOD_1_99DB6D9AD83718DE_OFFSET UNITYSDK_OFFSET(0x12728D50)
#define CLASS_3_9FC30786612477D7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12728D00)
#define CLASS_3_9FC30786612477D7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12728D40)

inline static constexpr unsigned int Class_3_9FC30786612477D7___c_TypeDefinitionIndex = 83173;

class Class_3_9FC30786612477D7___c : public ::System::Object
{
public:
	static ::Class_3_9FC30786612477D7___c** StaticGet___9()
	{
		return (::Class_3_9FC30786612477D7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9FC30786612477D7___c_TypeDefinitionIndex)->GetStaticField(0x4F340);
	}
	static ::System::Action_1<::Class_3_BAD4948F9FB7FC7A*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::Class_3_BAD4948F9FB7FC7A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9FC30786612477D7___c_TypeDefinitionIndex)->GetStaticField(0x4F348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99DB6D9AD83718DE(::Class_3_BAD4948F9FB7FC7A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BAD4948F9FB7FC7A*))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7___C_METHOD_1_99DB6D9AD83718DE_OFFSET))(this, a1);
	}
};

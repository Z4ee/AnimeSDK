#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BAD4948F9FB7FC7A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F461AE38AB429FB5___C_METHOD_1_99DB6D9AD83718DE_OFFSET UNITYSDK_OFFSET(0x11C616C0)
#define CLASS_3_F461AE38AB429FB5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C61670)
#define CLASS_3_F461AE38AB429FB5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C616B0)

inline static constexpr unsigned int Class_3_F461AE38AB429FB5___c_TypeDefinitionIndex = 41616;

class Class_3_F461AE38AB429FB5___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_BAD4948F9FB7FC7A*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::Class_3_BAD4948F9FB7FC7A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F461AE38AB429FB5___c_TypeDefinitionIndex)->GetStaticField(0x3BF60);
	}
	static ::Class_3_F461AE38AB429FB5___c** StaticGet___9()
	{
		return (::Class_3_F461AE38AB429FB5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F461AE38AB429FB5___c_TypeDefinitionIndex)->GetStaticField(0x3BF68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99DB6D9AD83718DE(::Class_3_BAD4948F9FB7FC7A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BAD4948F9FB7FC7A*))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5___C_METHOD_1_99DB6D9AD83718DE_OFFSET))(this, a1);
	}
};

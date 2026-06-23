#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_7DE03FFC38B69B91;
class Class_5_8A5B236F53009830;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_8360C088D369930F___C_METHOD_1_020C804A8FFF97CA_OFFSET UNITYSDK_OFFSET(0x13405FE0)
#define CLASS_3_8360C088D369930F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13405F90)
#define CLASS_3_8360C088D369930F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13405FD0)

inline static constexpr unsigned int Class_3_8360C088D369930F___c_TypeDefinitionIndex = 48308;

class Class_3_8360C088D369930F___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_5_8A5B236F53009830*, ::Class_5_7DE03FFC38B69B91*>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::Class_5_8A5B236F53009830*, ::Class_5_7DE03FFC38B69B91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8360C088D369930F___c_TypeDefinitionIndex)->GetStaticField(0x44530);
	}
	static ::Class_3_8360C088D369930F___c** StaticGet___9()
	{
		return (::Class_3_8360C088D369930F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8360C088D369930F___c_TypeDefinitionIndex)->GetStaticField(0x44538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8360C088D369930F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8360C088D369930F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_020C804A8FFF97CA(::Class_5_8A5B236F53009830* a1, ::Class_5_7DE03FFC38B69B91* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_8A5B236F53009830*, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_8360C088D369930F___C_METHOD_1_020C804A8FFF97CA_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoWayPath; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_B83767DAA3ADB444___C_METHOD_1_4853777A401D93FE_OFFSET UNITYSDK_OFFSET(0x18E0B740)
#define CLASS_1_B83767DAA3ADB444___C_METHOD_1_EBF58ADB3C8E45A6_OFFSET UNITYSDK_OFFSET(0x18E0B7F0)
#define CLASS_1_B83767DAA3ADB444___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E0B6F0)
#define CLASS_1_B83767DAA3ADB444___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0B730)

inline static constexpr unsigned int Class_1_B83767DAA3ADB444___c_TypeDefinitionIndex = 64508;

class Class_1_B83767DAA3ADB444___c : public ::System::Object
{
public:
	static ::Class_1_B83767DAA3ADB444___c** StaticGet___9()
	{
		return (::Class_1_B83767DAA3ADB444___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B83767DAA3ADB444___c_TypeDefinitionIndex)->GetStaticField(0x2FD50);
	}
	static ::System::Func_2<::MoleMole::MonoWayPath*, ::System::String*>** StaticGet___9__107_0()
	{
		return (::System::Func_2<::MoleMole::MonoWayPath*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B83767DAA3ADB444___c_TypeDefinitionIndex)->GetStaticField(0x2FD58);
	}
	static ::System::Func_2<::MoleMole::MonoWayPath*, ::UnityEngine::Renderer*>** StaticGet___9__107_1()
	{
		return (::System::Func_2<::MoleMole::MonoWayPath*, ::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B83767DAA3ADB444___c_TypeDefinitionIndex)->GetStaticField(0x2FD60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B83767DAA3ADB444___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B83767DAA3ADB444___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Renderer* Method_1_4853777A401D93FE(::MoleMole::MonoWayPath* a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::MoleMole::MonoWayPath*))((::PBYTE)hIl2Cpp + CLASS_1_B83767DAA3ADB444___C_METHOD_1_4853777A401D93FE_OFFSET))(this, a1);
	}

	::System::String* Method_1_EBF58ADB3C8E45A6(::MoleMole::MonoWayPath* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::MonoWayPath*))((::PBYTE)hIl2Cpp + CLASS_1_B83767DAA3ADB444___C_METHOD_1_EBF58ADB3C8E45A6_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_011F5F8CC4313C2D___C_METHOD_1_E1C47ED2E76F15D6_OFFSET UNITYSDK_OFFSET(0x15983400)
#define CLASS_4_011F5F8CC4313C2D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159833B0)
#define CLASS_4_011F5F8CC4313C2D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159833F0)

inline static constexpr unsigned int Class_4_011F5F8CC4313C2D___c_TypeDefinitionIndex = 47206;

class Class_4_011F5F8CC4313C2D___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_011F5F8CC4313C2D___c_TypeDefinitionIndex)->GetStaticField(0x41CA0);
	}
	static ::Class_4_011F5F8CC4313C2D___c** StaticGet___9()
	{
		return (::Class_4_011F5F8CC4313C2D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_011F5F8CC4313C2D___c_TypeDefinitionIndex)->GetStaticField(0x41CA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E1C47ED2E76F15D6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D___C_METHOD_1_E1C47ED2E76F15D6_OFFSET))(this, a1);
	}
};

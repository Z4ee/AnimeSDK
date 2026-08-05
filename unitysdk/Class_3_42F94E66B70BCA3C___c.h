#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_42F94E66B70BCA3C___C_METHOD_1_51BC74883F962039_OFFSET UNITYSDK_OFFSET(0x13BA0770)
#define CLASS_3_42F94E66B70BCA3C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BA0720)
#define CLASS_3_42F94E66B70BCA3C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13BA0760)

inline static constexpr unsigned int Class_3_42F94E66B70BCA3C___c_TypeDefinitionIndex = 77683;

class Class_3_42F94E66B70BCA3C___c : public ::System::Object
{
public:
	static ::Class_3_42F94E66B70BCA3C___c** StaticGet___9()
	{
		return (::Class_3_42F94E66B70BCA3C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_42F94E66B70BCA3C___c_TypeDefinitionIndex)->GetStaticField(0x47820);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_42F94E66B70BCA3C___c_TypeDefinitionIndex)->GetStaticField(0x47828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_51BC74883F962039(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_42F94E66B70BCA3C___C_METHOD_1_51BC74883F962039_OFFSET))(this, a1);
	}
};

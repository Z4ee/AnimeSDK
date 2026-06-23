#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class IComparable; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_798995D7624B327A___C_METHOD_1_7E8383D5E61E2F61_OFFSET UNITYSDK_OFFSET(0x129905A0)
#define CLASS_2_798995D7624B327A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12990550)
#define CLASS_2_798995D7624B327A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12990590)

inline static constexpr unsigned int Class_2_798995D7624B327A___c_TypeDefinitionIndex = 80196;

class Class_2_798995D7624B327A___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_798995D7624B327A___c_TypeDefinitionIndex)->GetStaticField(0x3DCD0);
	}
	static ::Class_2_798995D7624B327A___c** StaticGet___9()
	{
		return (::Class_2_798995D7624B327A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_798995D7624B327A___c_TypeDefinitionIndex)->GetStaticField(0x3DCD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A___C__CTOR_OFFSET))(this);
	}

	::System::IComparable* Method_1_7E8383D5E61E2F61(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::IComparable*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_798995D7624B327A___C_METHOD_1_7E8383D5E61E2F61_OFFSET))(this, a1);
	}
};

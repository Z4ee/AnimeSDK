#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B03C0CCB751F18C4___C_METHOD_1_9E519BFE55E9511F_OFFSET UNITYSDK_OFFSET(0x19003730)
#define CLASS_2_B03C0CCB751F18C4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190036E0)
#define CLASS_2_B03C0CCB751F18C4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19003720)

inline static constexpr unsigned int Class_2_B03C0CCB751F18C4___c_TypeDefinitionIndex = 81124;

class Class_2_B03C0CCB751F18C4___c : public ::System::Object
{
public:
	static ::Class_2_B03C0CCB751F18C4___c** StaticGet___9()
	{
		return (::Class_2_B03C0CCB751F18C4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B03C0CCB751F18C4___c_TypeDefinitionIndex)->GetStaticField(0x38C30);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>, ::MoleMole::Battle::Entity*>** StaticGet___9__274_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>, ::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B03C0CCB751F18C4___c_TypeDefinitionIndex)->GetStaticField(0x38C38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_9E519BFE55E9511F(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*> a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>))((::PBYTE)hIl2Cpp + CLASS_2_B03C0CCB751F18C4___C_METHOD_1_9E519BFE55E9511F_OFFSET))(this, a1);
	}
};

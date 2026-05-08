#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_CCA2F740419298FF___C_METHOD_1_9E519BFE55E9511F_OFFSET UNITYSDK_OFFSET(0x1791D0C0)
#define CLASS_2_CCA2F740419298FF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1791D070)
#define CLASS_2_CCA2F740419298FF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1791D0B0)

inline static constexpr unsigned int Class_2_CCA2F740419298FF___c_TypeDefinitionIndex = 78705;

class Class_2_CCA2F740419298FF___c : public ::System::Object
{
public:
	static ::Class_2_CCA2F740419298FF___c** StaticGet___9()
	{
		return (::Class_2_CCA2F740419298FF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CCA2F740419298FF___c_TypeDefinitionIndex)->GetStaticField(0x33280);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>, ::MoleMole::Battle::Entity*>** StaticGet___9__273_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>, ::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CCA2F740419298FF___c_TypeDefinitionIndex)->GetStaticField(0x33288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CCA2F740419298FF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA2F740419298FF___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_9E519BFE55E9511F(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*> a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>))((::PBYTE)hIl2Cpp + CLASS_2_CCA2F740419298FF___C_METHOD_1_9E519BFE55E9511F_OFFSET))(this, a1);
	}
};

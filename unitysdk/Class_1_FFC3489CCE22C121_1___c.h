#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_FFC3489CCE22C121_1___C_METHOD_1_8A429F16678BB711_OFFSET UNITYSDK_OFFSET(0x13EEDA20)
#define CLASS_1_FFC3489CCE22C121_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EED9D0)
#define CLASS_1_FFC3489CCE22C121_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEDA10)

inline static constexpr unsigned int Class_1_FFC3489CCE22C121_1___c_TypeDefinitionIndex = 75895;

class Class_1_FFC3489CCE22C121_1___c : public ::System::Object
{
public:
	static ::Class_1_FFC3489CCE22C121_1___c** StaticGet___9()
	{
		return (::Class_1_FFC3489CCE22C121_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFC3489CCE22C121_1___c_TypeDefinitionIndex)->GetStaticField(0x3E690);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFC3489CCE22C121_1___c_TypeDefinitionIndex)->GetStaticField(0x3E698);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFC3489CCE22C121_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFC3489CCE22C121_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8A429F16678BB711(::Nap::NapECS::EcsComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + CLASS_1_FFC3489CCE22C121_1___C_METHOD_1_8A429F16678BB711_OFFSET))(this, a1);
	}
};

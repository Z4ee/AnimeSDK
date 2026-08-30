#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_C042602817EF9FC9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x121E07E0)
#define CLASS_3_C042602817EF9FC9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x121E0820)
#define CLASS_3_C042602817EF9FC9___C__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x121E0830)

inline static constexpr unsigned int Class_3_C042602817EF9FC9___c_TypeDefinitionIndex = 59277;

class Class_3_C042602817EF9FC9___c : public ::System::Object
{
public:
	static ::Class_3_C042602817EF9FC9___c** StaticGet___9()
	{
		return (::Class_3_C042602817EF9FC9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C042602817EF9FC9___c_TypeDefinitionIndex)->GetStaticField(0x48F90);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C042602817EF9FC9___c_TypeDefinitionIndex)->GetStaticField(0x48F98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C042602817EF9FC9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C042602817EF9FC9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Evaluate_b__1_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C042602817EF9FC9___C__EVALUATE_B__1_0_OFFSET))(this, a1);
	}
};

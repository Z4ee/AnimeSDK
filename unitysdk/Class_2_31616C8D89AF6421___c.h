#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_31616C8D89AF6421___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124F19A0)
#define CLASS_2_31616C8D89AF6421___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124F19D0)
#define CLASS_2_31616C8D89AF6421___C__ONTASKSUCCESS_B__9_0_OFFSET UNITYSDK_OFFSET(0x124F19E0)

inline static constexpr unsigned int Class_2_31616C8D89AF6421___c_TypeDefinitionIndex = 48336;

class Class_2_31616C8D89AF6421___c : public ::System::Object
{
public:
	static ::Class_2_31616C8D89AF6421___c** StaticGet___9()
	{
		return (::Class_2_31616C8D89AF6421___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31616C8D89AF6421___c_TypeDefinitionIndex)->GetStaticField(0x11270);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__9_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31616C8D89AF6421___c_TypeDefinitionIndex)->GetStaticField(0x11278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnTaskSuccess_b__9_0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_31616C8D89AF6421___C__ONTASKSUCCESS_B__9_0_OFFSET))(this, entity);
	}
};

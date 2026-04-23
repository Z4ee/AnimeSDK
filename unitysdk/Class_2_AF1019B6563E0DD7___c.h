#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_AF1019B6563E0DD7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124D4FF0)
#define CLASS_2_AF1019B6563E0DD7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124D5020)
#define CLASS_2_AF1019B6563E0DD7___C___REFRESHHUDACTIVESTATE_B__54_0_OFFSET UNITYSDK_OFFSET(0x124D5030)

inline static constexpr unsigned int Class_2_AF1019B6563E0DD7___c_TypeDefinitionIndex = 66170;

class Class_2_AF1019B6563E0DD7___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__54_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7___c_TypeDefinitionIndex)->GetStaticField(0xDBC0);
	}
	static ::Class_2_AF1019B6563E0DD7___c** StaticGet___9()
	{
		return (::Class_2_AF1019B6563E0DD7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7___c_TypeDefinitionIndex)->GetStaticField(0xDBC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshHUDActiveState_b__54_0(::RPG::GameCore::GameEntity* target)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7___C___REFRESHHUDACTIVESTATE_B__54_0_OFFSET))(this, target);
	}
};

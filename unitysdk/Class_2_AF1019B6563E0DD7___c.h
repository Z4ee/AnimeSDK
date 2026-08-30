#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_AF1019B6563E0DD7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152862E0)
#define CLASS_2_AF1019B6563E0DD7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15286310)
#define CLASS_2_AF1019B6563E0DD7___C___REFRESHHUDACTIVESTATE_B__55_0_OFFSET UNITYSDK_OFFSET(0x15286320)

inline static constexpr unsigned int Class_2_AF1019B6563E0DD7___c_TypeDefinitionIndex = 71750;

class Class_2_AF1019B6563E0DD7___c : public ::System::Object
{
public:
	static ::Class_2_AF1019B6563E0DD7___c** StaticGet___9()
	{
		return (::Class_2_AF1019B6563E0DD7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7___c_TypeDefinitionIndex)->GetStaticField(0x630E0);
	}
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__55_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF1019B6563E0DD7___c_TypeDefinitionIndex)->GetStaticField(0x630E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshHUDActiveState_b__55_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF1019B6563E0DD7___C___REFRESHHUDACTIVESTATE_B__55_0_OFFSET))(this, a1);
	}
};

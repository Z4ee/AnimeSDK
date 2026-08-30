#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_511CDFCB0C002552___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E31890)
#define CLASS_2_511CDFCB0C002552___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E318D0)
#define CLASS_2_511CDFCB0C002552___C___SETUPAREA2TEAM_B__9_0_OFFSET UNITYSDK_OFFSET(0x15E318E0)

inline static constexpr unsigned int Class_2_511CDFCB0C002552___c_TypeDefinitionIndex = 56428;

class Class_2_511CDFCB0C002552___c : public ::System::Object
{
public:
	static ::Class_2_511CDFCB0C002552___c** StaticGet___9()
	{
		return (::Class_2_511CDFCB0C002552___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_511CDFCB0C002552___c_TypeDefinitionIndex)->GetStaticField(0x53200);
	}
	static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_511CDFCB0C002552___c_TypeDefinitionIndex)->GetStaticField(0x53208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetupArea2Team_b__9_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_511CDFCB0C002552___C___SETUPAREA2TEAM_B__9_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9C972AC88E9A3A3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F50BC0)
#define CLASS_2_9C972AC88E9A3A3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F50C00)
#define CLASS_2_9C972AC88E9A3A3E___C___ONBATTLETOGGLESKILLPRESHOW_B__73_0_OFFSET UNITYSDK_OFFSET(0x15F50C10)

inline static constexpr unsigned int Class_2_9C972AC88E9A3A3E___c_TypeDefinitionIndex = 68651;

class Class_2_9C972AC88E9A3A3E___c : public ::System::Object
{
public:
	static ::Class_2_9C972AC88E9A3A3E___c** StaticGet___9()
	{
		return (::Class_2_9C972AC88E9A3A3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C972AC88E9A3A3E___c_TypeDefinitionIndex)->GetStaticField(0x5710);
	}
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__73_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9C972AC88E9A3A3E___c_TypeDefinitionIndex)->GetStaticField(0x5718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnBattleToggleSkillPreShow_b__73_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9C972AC88E9A3A3E___C___ONBATTLETOGGLESKILLPRESHOW_B__73_0_OFFSET))(this, a1);
	}
};

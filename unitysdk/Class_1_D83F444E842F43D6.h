#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_329;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D83F444E842F43D6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E90990)
#define CLASS_1_D83F444E842F43D6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E90E20)

inline static constexpr unsigned int Class_1_D83F444E842F43D6_TypeDefinitionIndex = 77344;

class Class_1_D83F444E842F43D6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D83F444E842F43D6__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_329* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D83F444E842F43D6_EXECUTE_OFFSET))(this, a1, a2, a3);
	}
};

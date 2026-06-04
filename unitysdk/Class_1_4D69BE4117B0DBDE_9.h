#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D69BE4117B0DBDE_9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14459C90)
#define CLASS_1_4D69BE4117B0DBDE_9__CTOR_OFFSET UNITYSDK_OFFSET(0x14459FE0)

inline static constexpr unsigned int Class_1_4D69BE4117B0DBDE_9_TypeDefinitionIndex = 71883;

class Class_1_4D69BE4117B0DBDE_9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D69BE4117B0DBDE_9__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_260* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4D69BE4117B0DBDE_9_EXECUTE_OFFSET))(this, a1, a2, a3);
	}
};

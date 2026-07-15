#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_93E8ED619699DC2C_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18DCBC50)
#define CLASS_1_93E8ED619699DC2C__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCC690)

inline static constexpr unsigned int Class_1_93E8ED619699DC2C_TypeDefinitionIndex = 73386;

class Class_1_93E8ED619699DC2C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93E8ED619699DC2C__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_0_16E4307DCC419505_280* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93E8ED619699DC2C_EXECUTE_OFFSET))(this, a1, a2, a3);
	}
};

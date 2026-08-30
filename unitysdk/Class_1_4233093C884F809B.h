#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define CLASS_1_4233093C884F809B_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15718D10)
#define CLASS_1_4233093C884F809B__CTOR_OFFSET UNITYSDK_OFFSET(0x15718F20)

inline static constexpr unsigned int Class_1_4233093C884F809B_TypeDefinitionIndex = 76927;

class Class_1_4233093C884F809B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4233093C884F809B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_255* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4233093C884F809B_GETVALUE_OFFSET))(this, a1, a2, a3);
	}
};
